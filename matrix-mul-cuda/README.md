# Matrix Multiplication
Several tricks to accelerate matrix multiplication computing on GPUs.

## Environment
Tesla K40m, 12GB
nvcc release 7.5
gcc 4.8.2
CentOS release 6.6

## Result
Time is measured in micro seconds(/ms).

| | 16x16 | 32x32 | 64x64 | 128x128 | 256x256 | 512x512 | 1Kx1K | 2Kx2K | 4Kx4K | 8Kx8K | 16Kx16K |
|:-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:| :-------------:|
| Naive CPU |0.009184|	0.052096|	0.407456| 3.149088| 30.431681| 307.032227| 2.12s| 16.69s| 17.21min| 1.95h| 13.98h|
| GPU SDK Sample |0.071616| 0.084352| 0.104128| 0.19136| 0.46656| 2.33168|	12.599392| 71.282974| 531.699036| 4082.872314| 32015.88672|
| CUBLAS | 0.01|	0.018|	0.021|	0.03|	0.057|	0.221|	1.119|	6.43|	46.771|	362.224|	2909.446|
| Naive GPU |0.041184|	0.052256|	0.072224|	0.155488|	0.562752|	3.841408|	27.248705|	192.561661|	1537.895752|	12092.95117|	96204.04688|
| Tiling GPU |0.037632|	0.045472|	0.061728|	0.13648|	0.391616|	2.484352|	16.961472|	117.099236|	922.941406|	7263.639648|	58013.33203|
| Global mem coalescing GPU |0.042176|	0.047072|	0.061568|	0.136352|	0.354944|	2.18256|	14.34592|	95.066147|	744.365662|	5803.124512|	45844.03516|
| Remove shared mem bank conflict GPU |0.038144|	0.04352|	0.056768|	0.127808|	0.29616|	1.741728|	10.757568	|67.182877|	516.759705|	4021.116943|	31717.60352|
| Threads perform computation optimization GPU| 0.029376|	0.034496|	0.076352|	0.15408|	0.275584|	1.3832	|6.667264|	31.690016|	224.768921|	1739.138916|	13594.55762|
| Loop unrolling GPU |0.02928	|0.034112	|0.077856|	0.15696|	0.27984|	1.37568|	7.900992|	32.115841	|230.839005|	1791.019653|	13986.36426|
| Prefetching GPU |0.02848|	0.034176|	0.076896|	0.153792|	0.284896|	1.370784|	7.272704|	31.888	|227.607361|	1761.708496|	13743.58008|

# REF
- NVIDIA SDK Examples
- The GPU on the Matrix-Matrix Multiply: Performance Study and Contributions, <http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.484.2206&rep=rep1&type=pdf>
- Improving Performance of Matrix Multiplication and FFT on GPU, <http://sei.pku.edu.cn/~cyf/icpads09.pdf>
- Cache and Bandwidth Aware Matrix Multiplication on the GPU, <http://conteudo.icmc.usp.br/pessoas/castelo/CUDA/docs/cache-bandwidth-gpumatrixmult.pdf>
- Benchmarking data and compute intensive applications on modern CPU and GPU architectures, <https://ac.els-cdn.com/S1877050912003298/1-s2.0-S1877050912003298-main.pdf?_tid=4140e8d1-4993-4d99-9abd-8f17ca33ae56&acdnat=1526317476_d7d66d261dcf4dcc7190f8103e51e4a5>
- Coordinating the use of GPU and CPU for improving performance of compute intensive applications, <https://ieeexplore.ieee.org/abstract/document/5289193/>
