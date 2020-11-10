#include<bits/stdc++.h>
#include<iostream>
#include "../object.h"

using namespace std;


static map<int,pair<int,int> > signal_address;

extern vector<int8_t> t_ans;
extern vector<int8_t> t_edge;
extern map<string,int> t_mp;
extern vector<vector<int> > height;
extern vector<vector<int> > dealloc_signal;
extern vector<Gate> component_vector;
extern vector<Signal> signal_vector;
extern long long int MX;
extern long long int MN;
extern unordered_map<string, int> mpsignal;
extern unordered_map <int, bool> signal_mark;


static unsigned int *d_M_EVENT_time;
static int *d_M_EVENT_val;

static long long int max_part_number;
static int thread_number, sig_part_number;
static int gpu_size;


class Buddy{
public:
	const int max_n = 40;
	set<long long int > S[100];
	map<int,long long int> mp;
	Buddy(){
		S[max_n].insert(0);
	}
	long long int find_buddy(long long int r,long long int level){
		return r^(1LL<<level);
	}
	long long int t_allocate(int size){
		long long int k=log2(size);
		if((1LL<<k)!=size)
		k++;
		long long int pos=k;
		for(int i=k;i<100;i++){
			if(S[i].size()!=0){
				pos=i;
				break;
			}
		}

		for(int i=pos;i>k;i--){
			long long int node=*S[i].begin();
			S[i].erase(S[i].begin());
			long long int left=node;
			long long int right=find_buddy(node,i-1);
			S[i-1].insert(left);
			S[i-1].insert(right);
			mp[left]=i-1;
			mp[right]=i-1;
		}
		if(S[k].size()!=0){
			long long int ans=*S[k].begin();
			S[k].erase(S[k].begin());
			return ans;
		}
		return -1;
	}
	void t_deallocate(long long int pos){
		int p=mp[pos];
		while(true){
			long long int bud=find_buddy(pos,p);
			auto fin=S[p].find(bud);
			if(fin!=S[p].end()){
				S[p].erase(fin);
				//int x=*fin;
				p++;
				pos=min(bud,pos);
			}
			else
			break;
		}
		mp[pos]=p;
		S[p].insert(pos);
	}

};

static Buddy tree;

static int total_number_of_gates, total_number_of_ports, total_number_of_partitions, total_number_of_port_per_parts, total_sum_of_sdf, total_number_of_signal_parts, total_input_sig;

static int *h_sig_input_M_pointer, *d_sig_input_M_pointer;
static int *h_sig_input_D_pointer, *d_sig_input_D_pointer;
static int *h_sig_input_size, *d_sig_input_size;
static unsigned int *h_input_time, *d_input_time;
static int *h_input_val, *d_input_val;

static int *h_gate_start, *d_gate_start;
static int *h_gate_end, *d_gate_end;
static int *h_port_start, *d_port_start;
static int *h_port_end, *d_port_end;

static int *h_gate_ind, *d_gate_ind;
static int *h_gate_partition_number, *d_gate_partition_number;
static int *d_out_pointer;

static int *h_gate_partition_index, *d_gate_partition_index;
static int *d_port_partition_start;
static int *d_port_partition_end;
static int *d_partition_pre;
static int *d_partition_address_first, *d_partition_address_last;
static bool *d_zero_time;
static int *h_partition_number, *d_partition_number;
static int *h_stimuli_sdf_first, *d_stimuli_sdf_first;
static int *h_stimuli_sdf_end, *d_stimuli_sdf_end;
static int *h_table_id, *d_table_id;
static int *h_table, *d_table;
static unsigned int *d_tmp_memory_time;
static int *h_partition_output_address, *d_partition_output_address;
static unsigned int *d_partition_min_time;
static int *h_stimuli_size, *d_stimuli_size;
static int *h_sdf_mask, *d_sdf_mask;
static int *h_sdf_s_in, *d_sdf_s_in;
static int8_t *h_t_edge , *d_t_edge;
static int *h_signal_pointer_first, *d_signal_pointer_first;
static int *h_signal_pointer_last, *d_signal_pointer_last;
static bool *h_signal_ending_part, *d_signal_ending_part;
static unsigned int *h_saif_part, *d_saif_part;
static bool *h_fake_signal, *d_fake_signal;
static bool *h_fake_part, *d_fake_part;


void input_init_g1(){

	cudaMalloc(&d_M_EVENT_time, gpu_size*sizeof(unsigned int));
	cudaMalloc(&d_M_EVENT_val, gpu_size*sizeof(int));
	int total_event = 0;
	for(int i = 0 ; i < signal_vector.size(); i++){
		Signal& signall = signal_vector[i];
		int id = mpsignal[signall.name];
		if(id != i) continue;
		if(signal_mark[i] == false && signall.vaweform.size() > 0){
			signall.netlist_input = true;
		}
		if(signall.netlist_input == false)continue;
		total_input_sig ++;
		total_event += signall.vaweform.size();
	}

	h_sig_input_M_pointer = (int *)malloc(total_input_sig*sizeof(int));
	h_sig_input_D_pointer = (int *)malloc(total_input_sig*sizeof(int));
	h_sig_input_size = (int *)malloc(total_input_sig*sizeof(int));
	h_input_time = (unsigned int *)malloc(total_event*sizeof(unsigned int));
	h_input_val = (int *)malloc(total_event*sizeof(int));

	cudaMalloc(&d_sig_input_M_pointer, total_input_sig*sizeof(int));
	cudaMalloc(&d_sig_input_D_pointer, total_input_sig*sizeof(int));
	cudaMalloc(&d_sig_input_size, total_input_sig*sizeof(int));
	cudaMalloc(&d_input_time, total_event*sizeof(unsigned int));
	cudaMalloc(&d_input_val, total_event*sizeof(int));

	int cnt_input_sig = 0;
	int cnt_event = 0;
	for(int i = 0 ; i < signal_vector.size(); i++){
		Signal& signall = signal_vector[i];
		int id = mpsignal[signall.name];
		if(id != i) continue;
		int lev = signall.last_level;
		dealloc_signal[lev].push_back(i);
		if(signall.netlist_input == false)continue;
		int sz = signall.vaweform.size();
		int ptr1 = tree.t_allocate(sz);
		int ptr2 = ptr1 + sz;
		if(ptr1 > gpu_size - gpu_size / 8 || ptr2 > gpu_size){
			cout<<"sdfsdfsdfsdfsdf "<<signall.name<<" "<<ptr1<<" "<<ptr2<<endl;
		}
		signall.alloc_ptr_first = ptr1;
		if(ptr1 < 0 || ptr1 >= gpu_size){
			cout<<"sshohoh"<<endl;
			exit(0);
		}
		signall.alloc_ptr_last = ptr2;
		//cout<<"allocate "<<signall.name<<" "<<ptr1<<" "<<ptr2<<" "<<sz<<endl;
		h_sig_input_M_pointer[cnt_input_sig] = ptr1;
		h_sig_input_D_pointer[cnt_input_sig] = cnt_event;
		h_sig_input_size[cnt_input_sig] = ptr2 - ptr1;
		for(int j = 0 ; j < signall.vaweform.size(); j++){
			long long int next_time = MX;
			long long int this_time = MN;
			int val = signall.vaweform[j].value;
			if(j + 1 < signall.vaweform.size()){
				next_time = max(MN, min(MX, signall.vaweform[j+1].time));
			}
			this_time = max(MN, min(MX, signall.vaweform[j].time));
			if(val == 0 ){
				signall.o_val += next_time - this_time;
			}
			if(val == 1 ){
				signall.i_val += next_time - this_time;
			}
			if(val >= 2 ){
				signall.x_val += next_time - this_time;
			}
			h_input_time[cnt_event] = signall.vaweform[j].time;
			h_input_val[cnt_event] = signall.vaweform[j].value;
			cnt_event++;
		}

		//cout<<"saif : "<<signall.name<<" "<<signall.o_val<<" "<<signall.i_val<<" "<<signall.x_val<<endl;
		cnt_input_sig++;
	}

	cudaMemcpy(d_sig_input_M_pointer, h_sig_input_M_pointer, total_input_sig*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(d_sig_input_D_pointer, h_sig_input_D_pointer,total_input_sig*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(d_sig_input_size, h_sig_input_size,total_input_sig*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(d_input_time, h_input_time,total_event*sizeof(unsigned int), cudaMemcpyHostToDevice);
	cudaMemcpy(d_input_val, h_input_val,total_event*sizeof(int), cudaMemcpyHostToDevice);

}

void input_free_g1(){
	free(h_sig_input_M_pointer);
	free(h_sig_input_D_pointer);
	free(h_sig_input_size);
	free(h_input_time);
	free(h_input_val);

	cudaFree(d_sig_input_M_pointer);
	cudaFree(d_sig_input_D_pointer);
	cudaFree(d_sig_input_size);
	cudaFree(d_input_time);
	cudaFree(d_input_val);
}

__global__ void kernel0_input_init_g1_g1(int sig_part_number,int sig_n, int *d_sig_input_M_pointer, int *d_sig_input_D_pointer, int *d_sig_input_size, unsigned int *d_input_time, int *d_input_val, unsigned int *d_M_EVENT_time, int *d_M_EVENT_val){
	int index = blockIdx.x * blockDim.x + threadIdx.x;
	if(index < sig_n * sig_part_number){
		int gate_ind = index / sig_part_number;
		int part_ind = index % sig_part_number;

		int size = d_sig_input_size[gate_ind];
		int p1 = (size * part_ind) / sig_part_number;
		int p2 = (size * (part_ind + 1)) / sig_part_number;
		if(part_ind == sig_part_number - 1){
			 p2 = size;
		}
		int t_pointer1 = d_sig_input_M_pointer[gate_ind];
		int d_pointer1 = d_sig_input_D_pointer[gate_ind];
		for(int i = p1 ; i < p2; i++){
			d_M_EVENT_val[t_pointer1 + i] = d_input_val[d_pointer1 + i];
			d_M_EVENT_time[t_pointer1 + i] = d_input_time[d_pointer1 + i];
		}
	}
}

static vector<int> gate_partition_vec;
static vector<long long int> gate_size_vec;
static long long int total_size_of_inputs;

void initialize_level_g1(int LEV){
	gate_partition_vec.clear();
	gate_size_vec.clear();

	total_size_of_inputs = 0;
	total_number_of_gates = 0;
	total_number_of_ports = 0;
	total_number_of_partitions = 0;
	total_number_of_port_per_parts = 0;
	total_number_of_signal_parts = 0;
	total_sum_of_sdf = 0;

	//deallocation
	for(int j = 0 ; j < dealloc_signal[LEV].size(); j++){
		int ind = dealloc_signal[LEV][j];
		Signal& signall = signal_vector[ind];
		if(signall.alloc_ptr_first != -1)
			tree.t_deallocate(signall.alloc_ptr_first);
		signall.alloc_ptr_first = -1;
		signall.alloc_ptr_last = -1;
	}

	cout<<height[LEV].size()<<endl;
	for(int i = 0 ; i < height[LEV].size(); i++){
		int comp_ind = height[LEV][i];
		Gate& compo = component_vector[comp_ind];
		int insz = compo.inputs.size();
		int outsz = compo.outputs.size();
		long long int input_size = 0;

		for(int j = 0 ; j < compo.inputs.size() ; j++){
			int signal_id = compo.inputs[j].signal_index;
			Signal& signall = signal_vector[signal_id];
			int ptr1 = signall.alloc_ptr_first;
			int ptr2 = signall.alloc_ptr_last;
			input_size += ptr2 - ptr1;
		}
		for(int j = 0 ; j < outsz; j++){
			gate_size_vec.push_back(input_size);
			total_size_of_inputs += input_size;
		}
	}

	for(int i = 0; i < height[LEV].size(); i++){

		int comp_ind = height[LEV][i];
		Gate& compo = component_vector[comp_ind];
		int insz = compo.inputs.size();
		int outsz = compo.outputs.size();
		long long int input_size = gate_size_vec[total_number_of_gates];

		//most important line:
		//long long int part_number = max( 1LL , (max_part_number * input_size) / total_size_of_inputs) ;
		long long int part_number = min(input_size / 100 , (max_part_number * input_size) / total_size_of_inputs) + 1;

		for(int j = 0 ; j < outsz; j++){
			gate_partition_vec.push_back(part_number);
		}

		total_sum_of_sdf += 16 * compo.dl2.size();
		total_number_of_gates += outsz;
		total_number_of_ports += insz * outsz;
		total_number_of_partitions += part_number * outsz;
		total_number_of_port_per_parts += insz * outsz * part_number;
		total_number_of_signal_parts += outsz * sig_part_number;
	}
}

void memory_allocate_g1(){

	h_gate_start = (int *)malloc(total_number_of_gates*sizeof(int));
	cudaMalloc(&d_gate_start, total_number_of_gates*sizeof(int));
	h_gate_end = (int *)malloc(total_number_of_gates*sizeof(int));
	cudaMalloc(&d_gate_end, total_number_of_gates*sizeof(int));

	h_port_start = (int *)malloc(total_number_of_ports*sizeof(int));
	cudaMalloc(&d_port_start, total_number_of_ports*sizeof(int));
	h_port_end = (int *)malloc(total_number_of_ports*sizeof(int));
	cudaMalloc(&d_port_end, total_number_of_ports*sizeof(int));

	h_gate_partition_index = (int *)malloc(total_number_of_gates*sizeof(int));
	cudaMalloc(&d_gate_partition_index, total_number_of_gates*sizeof(int));

	h_gate_ind = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_gate_ind, total_number_of_partitions*sizeof(int));

	h_gate_partition_number = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_gate_partition_number, total_number_of_partitions*sizeof(int));

	cudaMalloc(&d_out_pointer, total_number_of_partitions*sizeof(int));

	cudaMalloc(&d_port_partition_start, total_number_of_port_per_parts*sizeof(int));
	cudaMalloc(&d_port_partition_end, total_number_of_port_per_parts*sizeof(int));

	cudaMalloc(&d_partition_pre, total_number_of_port_per_parts*sizeof(int));

	cudaMalloc(&d_partition_address_first, total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_partition_address_last, total_number_of_partitions*sizeof(int));

	cudaMalloc(&d_zero_time, total_number_of_partitions*sizeof(bool));

	h_partition_number = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_partition_number, total_number_of_partitions*sizeof(int));

	h_stimuli_sdf_first = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_stimuli_sdf_first, total_number_of_partitions*sizeof(int));
	h_stimuli_sdf_end = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_stimuli_sdf_end, total_number_of_partitions*sizeof(int));

	h_table_id = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_table_id, total_number_of_partitions*sizeof(int));

	h_table = (int *)malloc((t_ans.size())*sizeof(int));
	cudaMalloc(&d_table, (t_ans.size())*sizeof(int));

	cudaMalloc(&d_tmp_memory_time, total_number_of_partitions * 12 * sizeof(unsigned int));

	h_partition_output_address = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_partition_output_address, total_number_of_partitions*sizeof(int));

	cudaMalloc(&d_partition_min_time, total_number_of_partitions*sizeof(unsigned int));

	h_stimuli_size = (int *)malloc(total_number_of_partitions*sizeof(int));
	cudaMalloc(&d_stimuli_size, total_number_of_partitions*sizeof(int));

	h_sdf_mask = (int *)malloc(total_sum_of_sdf*sizeof(int));
	cudaMalloc(&d_sdf_mask, total_sum_of_sdf*sizeof(int));

	h_sdf_s_in = (int *)malloc((total_sum_of_sdf / 8)*sizeof(int));
	cudaMalloc(&d_sdf_s_in, (total_sum_of_sdf / 8)*sizeof(int));

	h_fake_signal = (bool *)malloc(total_number_of_partitions*sizeof(bool));
	cudaMalloc(&d_fake_signal, total_number_of_partitions*sizeof(bool));

	h_t_edge = (int8_t *)malloc((t_edge.size())*sizeof(int8_t));
	cudaMalloc(&d_t_edge, (t_edge.size())*sizeof(int8_t));

	h_signal_pointer_first = (int *)malloc(total_number_of_signal_parts*sizeof(int));
	cudaMalloc(&d_signal_pointer_first, total_number_of_signal_parts*sizeof(int));
	h_signal_pointer_last = (int *)malloc(total_number_of_signal_parts*sizeof(int));
	cudaMalloc(&d_signal_pointer_last, total_number_of_signal_parts*sizeof(int));
	h_signal_ending_part = (bool *)malloc(total_number_of_signal_parts*sizeof(bool));
	cudaMalloc(&d_signal_ending_part, total_number_of_signal_parts*sizeof(bool));

	h_saif_part = (unsigned int *)malloc(total_number_of_signal_parts*3*sizeof(unsigned int));
	cudaMalloc(&d_saif_part, total_number_of_signal_parts*3*sizeof(unsigned int));

	h_fake_part = (bool *)malloc(total_number_of_signal_parts*sizeof(bool));
	cudaMalloc(&d_fake_part, total_number_of_signal_parts*sizeof(bool));

}


__global__ void kernel_print_waveform_g1(int ptr1, int ptr2, int *d_M_EVENT_val, unsigned int *d_M_EVENT_time){
	printf(" printing waveforme : p1 : %d  p2 : %d \n", ptr1, ptr2 );
	for(int i = ptr1; i < ptr2; i++){
		if(  ptr2  - i < 50 || i - ptr1 < 20)
		printf("- %lld %d\n",d_M_EVENT_time[i], d_M_EVENT_val[i] );
	}
}

void set_arrays_g1(int LEVEL){
	int cnt_gate = 0;
	int cnt_partition = 0;
	int cnt_sdf = 0;
	int cnt_port = 0;
	int cnt_partition_index = 0;

	for(int j = 0 ; j < t_ans.size(); j++){
		h_table[j] = (int)t_ans[j];
	}
	for(int j = 0 ; j < 16; j++){
		h_t_edge[j] = t_edge[j];
	}
	//cout<<"a"<<endl;
	for(int i = 0 ; i < height[LEVEL].size(); i++){
		int comp_ind = height[LEVEL][i];
		Gate& compo = component_vector[comp_ind];
		int output_num = compo.size - compo.l_in;
		int mask2 = pow(3, compo.l_in);
		for(int op = 0 ; op < output_num; op++){
			//cout<<"gate : "<<compo.name<<" "<<op<<" cntgate : "<<cnt_gate<<" cntport : "<<cnt_port<<" cntpart: "<<cnt_partition<<endl;
			//sdf part
			int o_sig_id = compo.outputs[op].signal_index;
			Signal& o_sig = signal_vector[o_sig_id];

			int cnt_sdf1 = cnt_sdf;
			for(int k = 0 ; k < compo.dl2.size(); k++){
					delay2& del = compo.dl2[k];
					if(del.out != compo.l_in + op) continue;

					h_sdf_s_in[cnt_sdf/ 8]= del.in;
					for(int i_edge = 1 ; i_edge < 3; i_edge++){
						for(int o_edge = 1 ; o_edge < 5; o_edge++){
							int x = ((i_edge - 1) * 4 +  (o_edge - 1)) + cnt_sdf;

							int y = 999;
							if(del.edge == 0 || del.edge == i_edge){
								if(o_edge == 1){
									y = del.ris;
								}
								else if(o_edge == 2){
									y = del.fal;
								}
								else if(o_edge == 3){
									y = max(del.ris, del.fal);
								}
								else if(o_edge == 4){
									y = min(del.ris, del.fal);
								}
							}
							h_sdf_mask[x] = y;
						}
					}
					cnt_sdf += 8;
				}
			int cnt_sdf2 = cnt_sdf;

			int part_number = gate_partition_vec[cnt_gate];
			h_gate_partition_index[cnt_gate] = cnt_partition_index;
			//cout<<"partition index : "<<cnt_port * part_number<<endl;
			h_gate_start[cnt_gate] = cnt_port;
			//cout<<cnt_gate<<" -> "<<cnt_port<<endl;
			for(int j = 0 ; j < compo.inputs.size(); j++){
				int signal_id = compo.inputs[j].signal_index;
				Signal& signall = signal_vector[signal_id];
				int ptr1 = signall.alloc_ptr_first;
				int ptr2 = signall.alloc_ptr_last;

				//if(compo.name == "u_partition_c_reset_ICCADs_sync_reset_synced_rstn_ICCADs_UI_test_mode_outmux"){
				//	cout<<"input signal "<<signall.name<<" "<<ptr1<<" "<<ptr2<<endl;
				//}
				if(ptr1 == -1 || ptr2 == -1){
					cout<<"NO WAY ptr is -1 for"<<signall.name<<endl;
					exit(0);
				}
				h_port_start[cnt_port] = ptr1;
				h_port_end[cnt_port] = ptr2;
				cnt_port++;
				cnt_partition_index += part_number;
			}
			h_gate_end[cnt_gate] = cnt_port;
			//partition part(kernel 2 and 3)
			for(int j = 0 ; j < part_number ; j++){
				h_fake_signal[cnt_partition] = false;
				if(o_sig.name == "Fake"){
					h_fake_signal[cnt_partition] = true;
				}
				h_gate_ind[cnt_partition] = cnt_gate;
				h_gate_partition_number[cnt_partition] = part_number;
				h_partition_number[cnt_partition] = j;
				h_stimuli_sdf_first[cnt_partition] = cnt_sdf1;
				h_stimuli_sdf_end[cnt_partition] = cnt_sdf2;
				h_table_id[cnt_partition] = compo.table_id + mask2 * op;
				cnt_partition++;
			}
			cnt_gate++;
		}

	}
}


__device__ int check_port_index_g1(long long int Time, int first_pointer, int last_pointer, unsigned int *d_M_EVENT_time){
	int l = first_pointer;
	int r = last_pointer ;
	while(l < r - 1){
		int mid = (r + l) / 2;
		if(d_M_EVENT_time[mid] < Time){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	if(d_M_EVENT_time[l] >= Time){
		return l;
	}
	else{
		return r;
	}
}

__device__ bool check_time_g1(long long int Time, long long int tmp_size, int p1, int p2, int *portfirst, int *portlast, unsigned int *d_M_EVENT_time){
	long long int ans = 0;
	for(int i = p1 ; i < p2 ; i++){
		int index = check_port_index_g1(Time, portfirst[i - p1], portlast[i - p1], d_M_EVENT_time);
		ans += index - portfirst[i - p1] + 1;
	}
	if(ans >= tmp_size){
		return true;
	}
	return false;
}

__device__ long long int find_time_g1(long long int tmp_size, int p1, int p2, int *portfirst, int *portlast, unsigned int *d_M_EVENT_time){

	long long int l = 0;
	long long int r = 1000000LL*1000000LL;
	while(l < r - 1){
		long long int mid = (r + l) / 2;
		if(check_time_g1(mid, tmp_size, p1, p2, portfirst, portlast, d_M_EVENT_time)){
			r = mid;
		}
		else{
			l = mid;
		}
	}
	if(check_time_g1(l, tmp_size, p1, p2, portfirst, portlast, d_M_EVENT_time)){
		return l;
	}
	return r;
}

__global__ void kernel1_find_parttion_bounds_g1(int part_n, int *d_gate_partition_number, int *d_partition_number, int *d_gate_ind, bool *d_zero_time, int *d_partition_pre, int *d_partition_address_first, int *d_partition_address_last, int *d_port_partition_start, int *d_port_partition_end, int *d_gate_partition_index, int *d_gate_start, int * d_gate_end, int *d_port_start, int *d_port_end, unsigned int *d_M_EVENT_time, int *d_M_EVENT_val){

	int index = blockIdx.x * blockDim.x + threadIdx.x;

	if(index < part_n){
		//printf("index is %d\n", index);
		long long int total_size = 0;
		int gate_ind = d_gate_ind[index];//!
		int p1 = d_gate_start[gate_ind];
		int p2 = d_gate_end[gate_ind];
		int portfirst[6];
		int portlast[6];
		for(int i = p1 ; i < p2; i++){
			portfirst[i - p1] = d_port_start[i];
			portlast[i - p1] = d_port_end[i];
		}
		for(int i = p1 ; i < p2; i++){
			total_size += portlast[i - p1] - portfirst[i - p1];
		}
		int part_number = d_gate_partition_number[index];//!
		int partitioin_pointer = d_gate_partition_index[gate_ind];
		int part_cnt = d_partition_number[index];//!
		int ptr = index - part_cnt;//!
		if(part_cnt == 0){
			d_zero_time[ptr] = true;
			//first part of first part
			for(int i = p1; i < p2; i++){
				d_port_partition_start[partitioin_pointer + i - p1] = portfirst[i - p1];
				d_partition_pre[partitioin_pointer + i - p1] = d_M_EVENT_val[portfirst[i - p1]];
			}
			d_partition_address_first[ptr] = partitioin_pointer ;
			d_partition_address_last[ptr] = partitioin_pointer + p2 - p1;

			//last of last part
			for(int j = p1 ; j < p2 ; j++){
				int ind = partitioin_pointer + ((part_number - 1) * (p2 - p1)) +  j - p1;
				d_port_partition_end[ind] = portlast[j - p1];
			}
		}
		else{
			long long int tmp_size = (total_size * part_cnt) / part_number;
			long long int new_time = find_time_g1(tmp_size, p1, p2, portfirst, portlast, d_M_EVENT_time);
			//printf("partition : %d  new time : %lld   tmpsize : %lld\n", i, new_time, tmp_size );
			d_zero_time[ptr + part_cnt] = false;
			if(new_time == 0){
				d_zero_time[ptr + part_cnt] = true;
			}
			d_partition_address_first[ptr + part_cnt] = partitioin_pointer + ((part_cnt) * (p2 - p1)) ;
			d_partition_address_last[ptr + part_cnt] = partitioin_pointer + ((part_cnt + 1) * (p2 - p1));
			for(int j = p1 ; j < p2 ; j++){
				int x = check_port_index_g1(new_time, portfirst[j - p1], portlast[j - p1], d_M_EVENT_time);
				int ind1 = partitioin_pointer + ((part_cnt - 1) * (p2 - p1)) +  j - p1;
				int ind2 = partitioin_pointer + (part_cnt * (p2 - p1)) +  j - p1;
				int z = portfirst[j - p1];
				z = max(z, x - 1);
				d_partition_pre[ind2] = d_M_EVENT_val[z];
				d_port_partition_end[ind1] = x;
				d_port_partition_start[ind2] = x;
			}
		}
		/*if(index == -1){
			for(int i = 0 ; i < part_number ; i++){
				printf("%d---partition : %d\n",index ,i );
				printf("%d  zero : %d\n",index , d_zero_time[ptr + i]);
				printf("%d  part first : %d part last : %d\n",index ,d_partition_address_first[ptr + i], d_partition_address_last[ptr + i] );
				for(int j = p1 ; j < p2 ; j++){
					int ind1 = partitioin_pointer + (i * (p2 - p1)) +  j - p1;
					printf("%d     port %d\n",index ,j );
					printf("%d       part pre : %d \n",index ,d_partition_pre[ind1] );
					printf("%d       portstart: %d portlast : %d pre part : %d\n",index , d_port_partition_start[ind1], d_port_partition_end[ind1], d_partition_pre[ind1]);
					printf("%d       index1 : %d\n",index , ind1);
					printf("%d       start Time : %lld\n",index ,d_M_EVENT_time[d_port_partition_start[ind1]] );
				}
			}

		}*/

	}
}

__global__ void kernel2_find_partition_sizes_g1(int thread_number, int part_n, int *d_out_pointer, int *d_gate_partition_number, long long int mx,int *d_partition_number, bool *d_zero_time, unsigned int *d_partition_min_time, int *d_stimuli_size, int *d_partition_pre, int *d_stimuli_sdf_first, int *d_stimuli_sdf_end, int *d_partition_address_first, int *d_partition_address_last, int *d_port_partition_start, int*d_port_partition_end, int *d_sdf_mask, int *d_sdf_s_in, int8_t *d_t_edge, int *d_table_id, unsigned int *d_tmp_memory_time, int *d_table, int *d_M_EVENT_val, unsigned int *d_M_EVENT_time){
	int index = blockIdx.x * blockDim.x + threadIdx.x;
	int index0 = blockIdx.x * blockDim.x;

	__shared__ int8_t sh_table[35556];

	if(index - index0 < 32)
	{
		int chunk_sz = 35556 / 32 + 1;
		int sh_p1 = chunk_sz * (index - index0);
		int sh_p2 = min(35556, chunk_sz * (index - index0 + 1));
		for(int i = sh_p1 ; i < sh_p2 ; i++){
			sh_table[i] = d_table[i];
		}
	}
	/*if(index == index0){
		for(int i = 0; i < 35556; i++) {
			sh_table[i] = d_table[i];
		}
	}*/
	__syncthreads();

	if(index < part_n){
		int8_t sh_edge[16];
		for(int i = 0 ; i < 16; i++){
			sh_edge[i] = d_t_edge[i];
		}

		int loop_size = 12;
		int loop_ptr = index * loop_size;
		int out1 = 0;
		int stimuli_size = 0;
		unsigned int Time = 0;
		unsigned int min_partition_time = mx + 1;
		int p1 = d_partition_address_first[index];
		int p2 = d_partition_address_last[index];
		int sdf1 = d_stimuli_sdf_first[index];
		int sdf2 = d_stimuli_sdf_end[index];
		int t_id = d_table_id[index];
		int pre_in_ports[6];
		int now_in_ports[6];
		int output_val = 0;
		int n_output_val = 0;
		int last_port[6];
		int end_port[6];
		unsigned int last_time[6];
		int tmpmask = 0;
		for(int i = p1; i < p2 ; i++){
			last_port[i - p1] = d_port_partition_start[i];
			end_port[i - p1] = d_port_partition_end[i];
			pre_in_ports[i - p1] = d_partition_pre[i];
			last_time[i - p1] = d_M_EVENT_time[last_port[i - p1]];
			now_in_ports[i - p1] = d_partition_pre[i];
		}
		for(int i = p2 - 1; i >= p1 ; i--){
			tmpmask *= 3;
			tmpmask += min(2, now_in_ports[i - p1]);
		}
		tmpmask += t_id;
		output_val = sh_table[tmpmask];
		//printf(" but why ? at part : %d mask : %d   value : %d\n",index , tmpmask, output_val);
		if(d_zero_time[index] == true){
			min_partition_time = 0;
			stimuli_size++;
			d_tmp_memory_time[loop_ptr + out1] = 0;
			out1 = (out1 + 1) % loop_size;
		}

		while(true){
			int mask = 0;
			Time = mx + 1;
			for(int i = p1 ; i < p2; i++){
				if(last_port[i - p1] < end_port[i - p1]){
					//long long int time_ = d_M_EVENT_time[last_port[i - p1]];
					//Time = min (time_, Time);
					Time = min(last_time[i - p1], Time);
				}
			}
			if(Time > mx) break;
			for(int i = p2 - 1; i >= p1 ; i--){
				if(last_port[i - p1] < end_port[i - p1]){
					//long long int time_ = d_M_EVENT_time[last_port[i - p1]];
					//if(time_ == Time){
					//	now_in_ports[i - p1] = d_M_EVENT_val[last_port[i - p1]];
					//	last_port[i - p1]++;
					//}
					if(last_time[i - p1] == Time){
						now_in_ports[i - p1] = d_M_EVENT_val[last_port[i - p1]];
						last_port[i - p1]++;
						last_time[i - p1] = d_M_EVENT_time[last_port[i - p1]];
					}
				}
				mask *= 3;
				mask += min(2, now_in_ports[i - p1]);
			}
			mask += t_id;
			n_output_val = sh_table[mask];
			int output_edge = sh_edge[output_val * 4 + n_output_val];
			if(output_val != n_output_val){
				int delay_out = 999;
				for(int i = sdf1; i < sdf2; i += 8){
					int s_in = d_sdf_s_in[i / 8];
					int input_edge = sh_edge[pre_in_ports[s_in] * 4 + now_in_ports[s_in]];
					if(input_edge > 0){
						delay_out = min(delay_out, d_sdf_mask[i + ((input_edge - 1) * 4 + (output_edge - 1))]);
					}
				}
				if(delay_out == 999){
					delay_out = 0;
				}
				if(delay_out < 0){
					printf("oh noo boiii %d %d\n",delay_out, index );
				}
				unsigned int new_time = Time + delay_out;
				min_partition_time = min(min_partition_time, new_time);
				int cnt = 0;
				while(stimuli_size && d_tmp_memory_time[loop_ptr + (out1 - 1 + loop_size) % loop_size] >= new_time){
					cnt++;
					stimuli_size--;

					out1 = (out1 - 1 + loop_size) % loop_size;
				}
				if(cnt > loop_size){
					printf("slkdjfslkdjfssssssssssss %d\n", cnt);
				}
				//if(index < 5){
				//	printf("here is new event %d -> %d time : %d\n", output_val, n_output_val, new_time);
				//}

				stimuli_size++;

				d_tmp_memory_time[loop_ptr + out1] = new_time;
				out1 = (out1 + 1) % loop_size;
			}
			output_val = n_output_val;
			for(int i = p1; i < p2 ; i++){
				pre_in_ports[i - p1] = now_in_ports[i - p1];
			}
		}
		//printf(" ok now im in partition %d and min part time is : %lld\n",index, min_partition_time );
		d_partition_min_time[index] = min_partition_time;
		d_stimuli_size[index] = stimuli_size;
		d_out_pointer[index] = out1;
		//printf("part number : %d stimuli size : %d  minparttime : %lld\n",index, stimuli_size, d_partition_min_time[index] );

	}

}


__global__ void kernel2_2_find_partition_sizes_g1(int part_n,int *d_out_pointer, int *d_gate_partition_number, long long int mx,int *d_partition_number, bool *d_zero_time, unsigned int *d_partition_min_time, int *d_stimuli_size, int *d_partition_pre, int *d_stimuli_sdf_first, int *d_stimuli_sdf_end, int *d_partition_address_first, int *d_partition_address_last, int *d_port_partition_start, int*d_port_partition_end, int8_t *d_t_edge, int *d_table_id, unsigned int *d_tmp_memory_time, int *d_table, int *d_M_EVENT_val, unsigned int *d_M_EVENT_time){
	int index = blockIdx.x * blockDim.x + threadIdx.x;

	if(index < part_n){
		int loop_size = 12;
		int loop_ptr = index * loop_size;
		int out1 = d_out_pointer[index];
		int gate_part_n = d_gate_partition_number[index];//!
		int stimuli_size = d_stimuli_size[index];
		int part_num = d_partition_number[index];//!

		unsigned int z = mx + 1;
		for(int i = part_num + 1; i < gate_part_n; i++){
			z = min(z, d_partition_min_time[index + i - part_num]);
		}
		int cnt = 0;
		while(stimuli_size && d_tmp_memory_time[loop_ptr + (out1 - 1 + loop_size) % loop_size] >= z){
			stimuli_size--;
			cnt++;
			out1 = (out1 - 1 + loop_size) % loop_size;
		}
		if(cnt > loop_size){
			printf("slk222222djfslkdjfssssssssssss %d %d %lld \n", cnt, index, z);
		}
		d_stimuli_size[index] = stimuli_size;
		if(stimuli_size < 0)
		printf("MM partintion : %d   stimuli size %d  partnumber : %d\n", index, stimuli_size, part_num);
	}

}

//kernel3
__global__ void kernel3_gpu_single_gate_simulation_g1(int thread_number, int part_n, long long int mx,int *d_partition_number, int *d_partition_output_address, bool *d_zero_time, unsigned int *d_partition_min_time, int *d_stimuli_size, int *d_partition_pre, int *d_stimuli_sdf_first, int *d_stimuli_sdf_end, int *d_partition_address_first,
	 int *d_partition_address_last, int *d_port_partition_start, int *d_port_partition_end, int *d_sdf_mask, int *d_sdf_s_in, int8_t *d_t_edge, int *d_table_id, int *d_table, int *d_M_EVENT_val, unsigned int *d_M_EVENT_time, bool *d_fake_signal){

	int index = blockIdx.x * blockDim.x + threadIdx.x;
	int index0 = blockIdx.x * blockDim.x;

	__shared__ int8_t sh_table[35556];

	if(index - index0 < 32)
	{
		int chunk_sz = 35556 / 32 + 1;
		int sh_p1 = chunk_sz * (index - index0);
		int sh_p2 = min(35556, chunk_sz * (index - index0 + 1));
		for(int i = sh_p1 ; i < sh_p2 ; i++){
			sh_table[i] = d_table[i];
		}
	}
	/*if(index == index0){
		for(int i = 0; i < 35556; i++) {
			sh_table[i] = d_table[i];
		}
	}*/
	__syncthreads();

	if(index < part_n){

		bool fake_signal = d_fake_signal[index];
		int8_t sh_edge[16];
		for(int i = 0 ; i < 16; i++){
			sh_edge[i] = d_t_edge[i];
		}

		unsigned int overflow_time = 0;
	 	int out1 = d_partition_output_address[index];
		int out2 = out1 + d_stimuli_size[index];
		int out0 = out1;

		unsigned int Time = 0;
		//int part_num = d_partition_number[index];
		int p1 = d_partition_address_first[index];
		int p2 = d_partition_address_last[index];
		int sdf1 = d_stimuli_sdf_first[index];
		int sdf2 = d_stimuli_sdf_end[index];
		int t_id = d_table_id[index];
		int pre_in_ports[6];
		int now_in_ports[6];
		int output_val = 0;
		int n_output_val = 0;
		int last_port[6];
		int end_port[6];
		unsigned int last_time[6];
		int tmpmask = 0;
		for(int i = p1; i < p2 ; i++){
			last_port[i - p1] = d_port_partition_start[i];
			end_port[i - p1] = d_port_partition_end[i];
			pre_in_ports[i - p1] = d_partition_pre[i];
			now_in_ports[i - p1] = d_partition_pre[i];
			last_time[i - p1] = d_M_EVENT_time[last_port[i - p1]];
		}
		for(int i = p2 - 1; i >= p1 ; i--){
			tmpmask *= 3;
			tmpmask += min(2, now_in_ports[i - p1]);
		}
		tmpmask += t_id;
		output_val = sh_table[tmpmask];
		if(d_zero_time[index] == true && fake_signal == false){
			if(out1 != out2){
				d_M_EVENT_val[out1] = output_val;
				d_M_EVENT_time[out1] = 0;
				out1++;
			}
		}

		while(true){
			int mask = 0;
			Time = mx + 1;
			for(int i = p1 ; i < p2; i++){
				if(last_port[i - p1] < end_port[i - p1]){
					//long long int time_ = d_M_EVENT_time[last_port[i - p1]];
					//Time = min (time_, Time);
					Time = min(last_time[i - p1], Time);
				}
			}
			if(Time > mx) break;
			for(int i = p2 - 1; i >= p1 ; i--){
				if(last_port[i - p1] < end_port[i - p1]){
					//long long int time_ = d_M_EVENT_time[last_port[i - p1]];
					//if(time_ == Time){
					//	now_in_ports[i - p1] = d_M_EVENT_val[last_port[i - p1]];
					//	last_port[i - p1]++;
					//}
					if(last_time[i - p1] == Time){
						now_in_ports[i - p1] = d_M_EVENT_val[last_port[i - p1]];
						last_port[i - p1]++;
						last_time[i - p1] = d_M_EVENT_time[last_port[i - p1]];
					}
				}
				mask *= 3;
				mask += min(2, now_in_ports[i - p1]);
			}
			mask += t_id;
			n_output_val = sh_table[mask];
			int output_edge = sh_edge[output_val * 4 + n_output_val];
			if(output_val != n_output_val){
				int delay_out = 999;
				for(int i = sdf1; i < sdf2; i += 8){
					int s_in = d_sdf_s_in[i / 8];
					int input_edge = sh_edge[pre_in_ports[s_in] * 4 + now_in_ports[s_in]];
					if(input_edge > 0){
						delay_out = min(delay_out, d_sdf_mask[i + ((input_edge - 1) * 4 + (output_edge - 1)) ]);
					}
				}
				if(delay_out == 999){
					delay_out = 0;
				}
				if(delay_out < 0){
					printf("oh noo boiii %d %d\n",delay_out, index );
				}
				unsigned int new_time = Time + delay_out;

				if(out1 > out2 && overflow_time >= new_time && fake_signal == false){
					out1--;
				}
				while(out1 > out0 && out1 <= out2 && d_M_EVENT_time[out1 - 1] >= new_time && fake_signal == false){
					out1--;
				}
				if(fake_signal == false){
					if(out1 >= out2){
						overflow_time = new_time;
						out1 = out2 + 1;
					}
					else{
						d_M_EVENT_time[out1] = (unsigned int) new_time;
						d_M_EVENT_val[out1] = n_output_val;
						out1++;
					}
				}
			}
			output_val = n_output_val;
			for(int i = p1; i < p2 ; i++){
				pre_in_ports[i - p1] = now_in_ports[i - p1];
			}
		}

	}

}

void tree_allocations_g1(int LEVEL){
	int cnt_partition = 0;
	int cnt_gate = 0;

	for(int i = 0 ; i < height[LEVEL].size() ; i++){
		int comp_ind = height[LEVEL][i];
		Gate& compo = component_vector[comp_ind];
		int output_num = compo.size - compo.l_in;
		for(int op = 0 ; op < output_num; op++){
			int signal_id = compo.outputs[op].signal_index;
			Signal& signall = signal_vector[signal_id];

			int part_number = gate_partition_vec[cnt_gate];

			int total_waveform_size = 0;
			if(signall.name == "Fake"){
				for(int j = 0 ; j < part_number ; j++){
					h_partition_output_address[cnt_partition + j] = 0;
				}
				cnt_partition += part_number;
			}
			else{

				for(int j = 0 ; j < part_number ; j++){
					total_waveform_size += h_stimuli_size[cnt_partition + j];
					//cout<<total_waveform_size<<endl;
				}


				//cout<<"!! "<<total_waveform_size<<endl;
				if(total_waveform_size <= 0){
					cout<<signall.name<<" size is 0 "<<compo.name<<" "<<total_waveform_size<<"   /"<<cnt_partition<<endl;
					for(int j = 0 ; j < compo.inputs.size(); j++){
						int signal_id = compo.inputs[j].signal_index;
						Signal& signallf = signal_vector[signal_id];
						int ptr1 = signallf.alloc_ptr_first;
						int ptr2 = signallf.alloc_ptr_last;
						cout<<"lets just remind that "<<signallf.name<<" location is "<<ptr1 <<" to "<<ptr2<<endl;
						kernel_print_waveform_g1<<<1,1>>>(ptr1, ptr2, d_M_EVENT_val, d_M_EVENT_time);
						cudaDeviceSynchronize();
					}
					for(int j = 0 ; j < part_number ; j++){
						total_waveform_size = h_stimuli_size[cnt_partition + j];
						cout<<total_waveform_size<<endl;
					}
					exit(0);
				}
				int ptr1 = tree.t_allocate(total_waveform_size);
				if(ptr1 > gpu_size - gpu_size / 8 || ptr1 + total_waveform_size > gpu_size){
					cout<<"sdfsdfsdfsdfsdf "<<signall.name<<" "<<ptr1<<" "<<ptr1 + total_waveform_size<<endl;
				}
				signall.alloc_ptr_first = ptr1;
				signall.alloc_ptr_last = ptr1 + total_waveform_size;

				total_waveform_size = 0;
				for(int j = 0 ; j < part_number ; j++){
					h_partition_output_address[cnt_partition + j] = total_waveform_size + ptr1;
					total_waveform_size += h_stimuli_size[cnt_partition + j];
				}
				cnt_partition += part_number;
			}
			cnt_gate++;
		}
	}
}

__global__ void kernel4_make_saif_g1(int part_n, long long int saif_min, long long int saif_mx, int *d_signal_pointer_first, int *d_signal_pointer_last, bool *d_signal_ending_part, bool *d_fake_part, unsigned int *d_saif_part, int *d_M_EVENT_val, unsigned int *d_M_EVENT_time){
	int index = blockIdx.x * blockDim.x + threadIdx.x;
	bool fake_bool = d_fake_part[index];

	if(index < part_n && fake_bool == false){
		int pointer1 = d_signal_pointer_first[index];
		int pointer2 = d_signal_pointer_last[index];
		bool ending = d_signal_ending_part[index];
		long long int mx;
		if(ending){
			mx = saif_mx;
		}
		else{
			mx = d_M_EVENT_time[pointer2];
		}
		//printf("ok we are in part : %d  p1 : %d p2 : %d lowest time : %lld  highest time : %lld\n",index, pointer1, pointer2, d_M_EVENT_time[pointer1], mx);
		long long int x_val = 0;
		long long int i_val = 0;
		long long int o_val = 0;
		for(int i = pointer1 ; i < pointer2; i++){
			long long int t1 = max(saif_min, min(saif_mx,(long long int) d_M_EVENT_time[i]));
			long long int t2 = max(saif_min, min(saif_mx, mx));
			if(i + 1 < pointer2){
				t2 = max(saif_min, min(saif_mx,(long long int) d_M_EVENT_time[i + 1]));
			}
			long long int duration = t2 - t1;
			int val = d_M_EVENT_val[i];
			if(val == 0){
				//printf("adding %lld to %d\n",duration, val );
				o_val += duration;
			}
			else if(val == 1){
				//printf("adding %lld to %d\n",duration, val );
				i_val += duration;
			}
			else{
				//printf("adding %lld to %d\n",duration, val );
				x_val += duration;
			}
		}
		//printf("in partition : %d  oval : %ld  ival: %ld xval: %ld\n",index, o_val, i_val,x_val );
		d_saif_part[index * 3] = o_val;
		d_saif_part[index * 3 + 1] = i_val;
		d_saif_part[index * 3 + 2] = x_val;
	}
}

void memory_deallocate_g1(){
	free(h_gate_start);
	free(h_gate_end);
	free(h_port_start);
	free(h_port_end);
	free(h_partition_number);
	free(h_gate_ind);
	free(h_gate_partition_number);
	free(h_gate_partition_index);
	free(h_stimuli_sdf_first);
	free(h_stimuli_sdf_end);
	free(h_table_id);
	free(h_table);
	free(h_partition_output_address);
	free(h_stimuli_size);
	free(h_sdf_mask);
	free(h_sdf_s_in);
	free(h_t_edge);
	free(h_signal_pointer_first);
	free(h_signal_pointer_last);
	free(h_signal_ending_part);
	free(h_saif_part);
	free(h_fake_signal);
	free(h_fake_part);

	cudaFree(d_gate_start);
	cudaFree(d_gate_end);
	cudaFree(d_port_start);
	cudaFree(d_port_end);
	cudaFree(d_gate_ind);
	cudaFree(d_gate_partition_number);
	cudaFree(d_out_pointer);
	cudaFree(d_gate_partition_index);
	cudaFree(d_port_partition_start);
	cudaFree(d_port_partition_end);
	cudaFree(d_partition_pre);
	cudaFree(d_partition_address_first);
	cudaFree(d_partition_address_last);
	cudaFree(d_zero_time);
	cudaFree(d_partition_number);
	cudaFree(d_stimuli_sdf_first);
	cudaFree(d_stimuli_sdf_end);
	cudaFree(d_table_id);
	cudaFree(d_table);
	cudaFree(d_tmp_memory_time);
	cudaFree(d_partition_output_address);
	cudaFree(d_partition_min_time);
	cudaFree(d_stimuli_size);
	cudaFree(d_sdf_mask);
	cudaFree(d_sdf_s_in);
	cudaFree(d_t_edge);
	cudaFree(d_signal_pointer_last);
	cudaFree(d_signal_pointer_first);
	cudaFree(d_signal_ending_part);
	cudaFree(d_saif_part);
	cudaFree(d_fake_signal);
	cudaFree(d_fake_part);
}




void saif_initialize_g1(int LEVEL){

	int cnt_partition = 0;
	for(int i = 0 ; i < height[LEVEL].size(); i++){
		int comp_ind = height[LEVEL][i];
		Gate& compo = component_vector[comp_ind];
		int output_num = compo.size - compo.l_in;
		for(int op = 0 ; op < output_num; op++){
			int signal_id = compo.outputs[op].signal_index;
			Signal& signall = signal_vector[signal_id];
			int ptr1 = signall.alloc_ptr_first;
			int ptr2 = signall.alloc_ptr_last;
			//cout<<"lets just remind that "<<signall.name<<" location is "<<ptr1 <<" to "<<ptr2<<endl;
			//kernel_print_waveform_g1<<<1,1>>>(ptr1, ptr2, d_M_EVENT_val, d_M_EVENT_time);
			//cudaDeviceSynchronize();
			int sz = ptr2 - ptr1;
			int chunk_sz = sz / sig_part_number;
			for(int j = 0 ; j < sig_part_number; j++){
				if(signall.name == "Fake"){
					h_fake_part[cnt_partition] = true;
				}
				else{
					h_fake_part[cnt_partition] = false;
				}
				h_signal_pointer_first[cnt_partition] = ptr1 + j * chunk_sz;
				h_signal_pointer_last[cnt_partition] = ptr1 + (j + 1) * chunk_sz;
				h_signal_ending_part[cnt_partition] = false;
				if(j == sig_part_number - 1){
					h_signal_pointer_last[cnt_partition] = ptr2;
					h_signal_ending_part[cnt_partition] = true;
				}
				cnt_partition++;
			}
		}
	}
}


void saif_process_g1(int LEVEL){

	int cnt_partition = 0;
	for(int i = 0 ; i < height[LEVEL].size(); i++){
		int comp_ind = height[LEVEL][i];
		Gate& compo = component_vector[comp_ind];
		int output_num = compo.size - compo.l_in;
		for(int op = 0 ; op < output_num; op++){
			int signal_id = compo.outputs[op].signal_index;
			Signal& signall = signal_vector[signal_id];
			if(signall.name == "Fake"){
				cnt_partition += sig_part_number;
				continue;
			}
			//cout<<signall.name<<endl;
			for(int j = 0 ; j < sig_part_number; j++){
				int idx = cnt_partition * 3;
				long long int ov, iv, xv;
				ov = h_saif_part[idx];
				iv = h_saif_part[idx + 1];
				xv = h_saif_part[idx + 2];
				signall.o_val += ov;
				signall.i_val += iv;
				signall.x_val += xv;
				//cout<<"in partition "<<j<<" we have "<<ov<<" "<<iv<<" "<<xv<<endl;
				cnt_partition++;
			}
			//if(i < 5)
			//cout<<" saif : "<<signall.name<<" "<<signall.o_val<<" "<<signall.i_val<<" "<<signall.x_val<<endl;
		}
	}
}

void gpusimultaion1(){

	max_part_number = 40000;
	sig_part_number = 64;
	thread_number = 128;
	gpu_size = 1000*1000*1000;
	cout<<"boom"<<endl;
	input_init_g1();
	cout<<"bam"<<endl;
	kernel0_input_init_g1_g1<<<((total_input_sig * sig_part_number + thread_number - 1) / thread_number), thread_number>>>(sig_part_number, total_input_sig, d_sig_input_M_pointer, d_sig_input_D_pointer, d_sig_input_size, d_input_time, d_input_val, d_M_EVENT_time, d_M_EVENT_val);
	input_free_g1();

	for(int i = 0; i < height.size(); i++){
		//if(i == 1) break;
		cout<<"\n\n--------------------------------------\n\n\n\nlevel "<<i<<endl;
		initialize_level_g1(i);
		memory_allocate_g1();


		set_arrays_g1(i);
		//cout<<"tota num gates : "<<total_number_of_gates<<endl;
		cudaMemcpy(d_gate_start, h_gate_start, total_number_of_gates*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_gate_end, h_gate_end, total_number_of_gates*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_port_start, h_port_start, total_number_of_ports*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_port_end, h_port_end, total_number_of_ports*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_gate_partition_index, h_gate_partition_index, total_number_of_gates*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_partition_number, h_partition_number, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_gate_ind, h_gate_ind, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_gate_partition_number, h_gate_partition_number, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);

		//cout<<"kernel1 "<<total_number_of_partitions<<endl;
		kernel1_find_parttion_bounds_g1<<<((total_number_of_partitions + thread_number - 1) / thread_number), thread_number>>>(total_number_of_partitions, d_gate_partition_number, d_partition_number, d_gate_ind, d_zero_time, d_partition_pre, d_partition_address_first, d_partition_address_last, d_port_partition_start, d_port_partition_end, d_gate_partition_index, d_gate_start,  d_gate_end, d_port_start, d_port_end, d_M_EVENT_time, d_M_EVENT_val);
		//cudaDeviceSynchronize();

		cudaMemcpy(d_stimuli_sdf_first, h_stimuli_sdf_first, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_stimuli_sdf_end, h_stimuli_sdf_end, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_table_id, h_table_id, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_table, h_table, (t_ans.size())*sizeof(int) , cudaMemcpyHostToDevice);
		cudaMemcpy(d_sdf_mask, h_sdf_mask, total_sum_of_sdf*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_sdf_s_in, h_sdf_s_in, (total_sum_of_sdf / 8)*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_t_edge, h_t_edge, 16*sizeof(int8_t), cudaMemcpyHostToDevice);
		//cout<<"A "<<total_number_of_partitions<<endl;

		//cout<<"kernel2"<<endl;
		kernel2_find_partition_sizes_g1<<<((total_number_of_partitions + thread_number - 1) / thread_number), thread_number>>>(thread_number, total_number_of_partitions, d_out_pointer, d_gate_partition_number, MX, d_partition_number, d_zero_time, d_partition_min_time, d_stimuli_size, d_partition_pre, d_stimuli_sdf_first, d_stimuli_sdf_end, d_partition_address_first, d_partition_address_last, d_port_partition_start, d_port_partition_end, d_sdf_mask, d_sdf_s_in, d_t_edge, d_table_id, d_tmp_memory_time, d_table, d_M_EVENT_val, d_M_EVENT_time);
		//cudaDeviceSynchronize();
		kernel2_2_find_partition_sizes_g1<<<((total_number_of_partitions + thread_number - 1) / thread_number), thread_number>>>( total_number_of_partitions, d_out_pointer, d_gate_partition_number, MX, d_partition_number, d_zero_time, d_partition_min_time,  d_stimuli_size, d_partition_pre, d_stimuli_sdf_first, d_stimuli_sdf_end, d_partition_address_first, d_partition_address_last, d_port_partition_start, d_port_partition_end, d_t_edge, d_table_id, d_tmp_memory_time, d_table, d_M_EVENT_val, d_M_EVENT_time);
		//cout<<"end kernel2"<<endl;
		cudaMemcpy(h_stimuli_size, d_stimuli_size, total_number_of_partitions*sizeof(int), cudaMemcpyDeviceToHost);

		cout<<"tree allocation of level "<<i<<endl;
		tree_allocations_g1(i);

		cudaMemcpy(d_partition_output_address, h_partition_output_address, total_number_of_partitions*sizeof(int), cudaMemcpyHostToDevice);
		cudaMemcpy(d_fake_signal, h_fake_signal, total_number_of_partitions*sizeof(bool), cudaMemcpyHostToDevice);

		cout<<"kernel3"<<endl;
		kernel3_gpu_single_gate_simulation_g1<<<((total_number_of_partitions + thread_number - 1) / thread_number), thread_number>>>(thread_number, total_number_of_partitions, MX, d_partition_number, d_partition_output_address, d_zero_time, d_partition_min_time, d_stimuli_size, d_partition_pre, d_stimuli_sdf_first, d_stimuli_sdf_end, d_partition_address_first, d_partition_address_last, d_port_partition_start, d_port_partition_end, d_sdf_mask, d_sdf_s_in, d_t_edge, d_table_id, d_table, d_M_EVENT_val, d_M_EVENT_time, d_fake_signal);
		cudaDeviceSynchronize();

		saif_initialize_g1(i);

		cudaMemcpy(d_signal_pointer_first, h_signal_pointer_first, total_number_of_signal_parts*sizeof(int),cudaMemcpyHostToDevice);
		cudaMemcpy(d_signal_pointer_last, h_signal_pointer_last, total_number_of_signal_parts*sizeof(int),cudaMemcpyHostToDevice);
		cudaMemcpy(d_signal_ending_part, h_signal_ending_part, total_number_of_signal_parts*sizeof(bool),cudaMemcpyHostToDevice);
		cudaMemcpy(d_fake_part, h_fake_part, total_number_of_signal_parts*sizeof(bool), cudaMemcpyHostToDevice);

		cout<<"kernel4"<<endl;
		kernel4_make_saif_g1<<<((total_number_of_signal_parts + thread_number - 1) / thread_number), thread_number>>>(total_number_of_signal_parts, MN, MX, d_signal_pointer_first, d_signal_pointer_last, d_signal_ending_part, d_fake_part, d_saif_part, d_M_EVENT_val, d_M_EVENT_time);
		cudaDeviceSynchronize();

		cudaMemcpy(h_saif_part, d_saif_part, total_number_of_signal_parts*3*sizeof(unsigned int),cudaMemcpyDeviceToHost);
		saif_process_g1(i);

		//if(vcd_make){
		//	make_vcd_output();
		//}

		memory_deallocate_g1();
	}

	cudaFree(d_M_EVENT_val);
	cudaFree(d_M_EVENT_time);
}
