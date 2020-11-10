GPU Accelerated Logic Re-simulator
======================================
PALANG is a logic resimulation tool accelerated by GPGPU developed by the research team supervised by Prf. Behnam Ghavami at Shahid Bahonar University of kerman (SBUK).
PALANG is the best open-source tool for logic resimulation based on GPU which is parallelized by 2 dimensions.
In particular, our tool solves a problem in the industry, which is described in the following link:

* Yanqing Zhang, Haoxing (Mark) Ren, Ben Keller, Brucek Khailany (NVIDIA)
["GPU Accelerated Logic Re-simulation"](http://iccad-contest.org/2020/Problem_C/ICCAD2020_ContestProblemSpecification_ProblemC_08102020.pdf)

PALANG is developed based on the paper below but it has some diffrences and innovations:

* Stefan Holst, Michael E. Imhof and Hans-Joachim Wunderlich
["High-Throughput Logic Timing Simulation on GPGPUs"](https://dl.acm.org/doi/abs/10.1145/2714564)

(PALANG supports ICCAD2020 [benchmarks](https://drive.google.com/drive/u/0/folders/1IrWXkHEED_gVsLPUGrIKNIOAE6BIp0WY)).
This version of code is consistent with the one submitted to contest.

## 1. How to Build

**Step 1:** Download the source code. For example,
```bash
$ git clone https://github.com/ManiSadati/GPU_Logic_resimulator.git
```

**Step 2:** Go to the project root and build by
```bash
$ cd simulator1
$ make pre
$ make gpu
```

Note that this will generate two binary files named `preprocess` and `GPUsimulator`.

### 1.1. Dependencies

* [GNU Make](https://www.gnu.org/software/make/) (version >= 4.1)
* [nvidia-cuda-toolkit (nvcc compiler)](https://developer.nvidia.com/cuda-downloads) (version >= 5)
* [CUDA-enabled GPU](https://developer.nvidia.com/cuda-gpus) (cuda compute capability >= 7)

Note that it might work on lower dependencies.

## 2. How to Run

### 2.1. Toy Test

#### Run Preprocess Binary File

Go to the `simulator1` directory and run the binary `preprocess` with a sample case `sample_test` in the Test directory:
```bash
$ cd simulator1
$ ./preprocess ../test/sample_test.gv ../test/sample_test.sdf ../GENERIC_STD_CELL.vlib 
```
`sample_test.gv` is a gate level netlist description of the design.
`sample_test.sdf` is an SDF file that describes the delays of each gate in the design
`GENERIC_STD_CELL.vlib` is a standard cell library file, which describes the behavior of each standard cell gate in the design.
(Right now we only support limited combinatoinal gates that are described in the `GENERIC_STD_CELL.vlib`, but you can add any sequential gates to the library.)

This will make a file named `netlist.txt` which contains important informations about those files for the gpu-simulation part.

#### Run GPUprocess Binary File

Here is the part that we run the simulation.
Go to the `simulator1` directory and run the binary `GPUsimulator` with a sample case `sample_test` in the Test directory:
```bash
$ cd simulator1
$ ./GPUsimulator ../test/sample_test.vcd 0 100 sample_test.saif 
```
`sample_test.vcd` is a VCD file contains waveforms of the primary and pseudo-primary inputs ofthe design for the duration of the testbench.
after that there is 3 numbers. The first 2 are saif_start_time saif_end_time. That means it should simulate the design's waveforms during this period (0ps and 100ps).
`sample_test.saif` can be the name of the output file you want. It gives A SAIF file as an output.
