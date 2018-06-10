#ifndef _MATRIXMUL_UNROLL_H_
#define _MATRIXMUL_UNROLL_H_

#include <stdio.h>
#include "matrixMul.h"

#define CHECK_BANK_CONFLICTS 0
#if CHECK_BANK_CONFLICTS
#define AS(i, j) cutilBankChecker(((float*)&As[0][0]), (BLOCK_SIZE * i + j))
#define BS(i, j) cutilBankChecker(((float*)&Bs[0][0]), (BLOCK_SIZE * i + j))
#else
#define AS(i, j) As[i][j]
#define BS(i, j) Bs[i][j]
#endif

////////////////////////////////////////////////////////////////////////////////
//! Matrix multiplication on the device: C = A * B
//! wA is A's width and wB is B's width
////////////////////////////////////////////////////////////////////////////////
__global__ void
matrixMul_unroll( float* C, float* A, float* B, int wA, int wB)
{
    // Block index
    int bx = blockIdx.x;
    int by = blockIdx.y;

    // Thread index
    int tx = threadIdx.x;
    int ty = threadIdx.y;

    // Declaration of the shared memory array As used to
    // store the sub-matrix of A
    __shared__ float As[BLOCK_SIZE * BLOCK_SIZE];

    // Declaration of the shared memory array Bs used to
    // store the sub-matrix of B
    // __shared__ float Bs[BLOCK_SIZE][BLOCK_SIZE];

    float cv[BLOCK_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    // Index of the first sub-matrix of A processed by the block
    int aBegin = wA * BLOCK_SIZE * by;

    // Index of the last sub-matrix of A processed by the block
    int aEnd   = aBegin + wA - 1;

    // Step size used to iterate through the sub-matrices of A
    int aStep  = BLOCK_SIZE;

    // Index of the first sub-matrix of B processed by the block
    int bBegin = BLOCK_SIZE * VECTOR_SIZE * bx;

    // Step size used to iterate through the sub-matrices of B
    int bStep  = BLOCK_SIZE * wB;

    int cBegin = wB * BLOCK_SIZE * by + VECTOR_SIZE * BLOCK_SIZE * bx;

    // Csub is used to store the element of the block sub-matrix
    // that is computed by the thread
    // float Csub = 0;

    // Loop over all the sub-matrices of A and B
    // required to compute the block sub-matrix
    for (int a = aBegin, b = bBegin;
	 a <= aEnd;
	 a += aStep, b += bStep) {


      // Load the matrices from device memory
      // to shared memory; each thread loads
      // one element of each matrix
      float *Ap = &A[a + wA * ty +tx];
      float *ap = &As[ty + BLOCK_SIZE * tx];
#pragma unroll
      for(int i = 0; i < 16; i+=4){
        ap[i] = Ap[wA * i];
      }
      __syncthreads();

      ap = &As[0];
      float *bp = &B[b + BLOCK_SIZE * ty + tx]; 

#pragma unroll      
      for(int i = 0; i < BLOCK_SIZE; i++){
	float bv = bp[0];
	cv[0] +=  ap[0] * bv;
	cv[1] +=  ap[1] * bv;
	cv[2] +=  ap[2] * bv;
	cv[3] +=  ap[3] * bv;
	cv[4] +=  ap[4] * bv;
	cv[5] +=  ap[5] * bv;
	cv[6] +=  ap[6] * bv;
	cv[7] +=  ap[7] * bv;
	cv[8] +=  ap[8] * bv;
	cv[9] +=  ap[9] * bv;
	cv[10] +=  ap[10] * bv;
	cv[11] +=  ap[11] * bv;
	cv[12] +=  ap[12] * bv;
	cv[13] +=  ap[13] * bv;
	cv[14] +=  ap[14] * bv;
	cv[15] +=  ap[15] * bv;
	ap += BLOCK_SIZE;
	bp += wB;
      }

      // Synchronize to make sure the matrices are loaded
      __syncthreads();

    }

    // Write the block sub-matrix to device memory;
    // each thread writes one element
    float *Cp = &C[cBegin];
    Cp += BLOCK_SIZE * ty + tx;
    int cStep = wB;
#pragma unroll
    for(int i=0; i<BLOCK_SIZE; i++){
      Cp[0] = cv[i]; Cp += cStep;
    }

}

#endif // #ifndef _MATRIXMUL_KERNEL_H_
