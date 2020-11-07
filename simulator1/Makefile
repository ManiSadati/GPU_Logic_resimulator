pre:
	nvcc -O3 simulator.cpp seprate_out.cpp ../vlib_gpu/vlib_gpu.cpp vcdoutput.cpp ../vlib/type1parser.cpp  ../vlib/type1component.cpp  ../vlib/libraryparser.cpp ../vlib/gatefunction.cpp  ../vlib/primitiveparser.cpp ../graph/netlist.cpp ../sdf/sdfparser.cpp ../vlib/portparser.cpp ../vlib2/vlib_files/lib.cpp ../vlib2/vlib_files/vlib.cpp ../vcd_translator/thread.cpp -o cada0143_preprocessing
gpu:
	nvcc -O3 seprate_in.cpp  ../gpu-sim/gsimulator.cu ../gpu-sim/gsimulator1.cu saif.cpp ../vlib2/vlib_files/lib.cpp ../vcd_translator/thread.cpp ../vlib/libraryparser.cpp -o cada0143_GPUsimulator
