/*
 * Copyright 1993-2009 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property and 
 * proprietary rights in and to this software and related documentation and 
 * any modifications thereto.  Any use, reproduction, disclosure, or distribution 
 * of this software and related documentation without an express license 
 * agreement from NVIDIA Corporation is strictly prohibited.
 * 
 */

#ifndef _MATRIXMUL_H_
#define _MATRIXMUL_H_

#define CHECK_RESULT 1
#define ENABLE_NAIVE 1

// Thread block size
#define BLOCK_SIZE 16

// outer product vetor size is VECTOR_SIZE * BLOCK_SIZE
#define VECTOR_SIZE 4
#define N 1

// Matrix dimensions
// (chosen as multiples of the thread block size for simplicity)
#define WA (N * BLOCK_SIZE) // Matrix A width
#define HA (N * BLOCK_SIZE) // Matrix A height
#define WB (N * BLOCK_SIZE) // Matrix B width
#define HB WA  // Matrix B height
#define WC WB  // Matrix C width 
#define HC HA  // Matrix C height

#endif // _MATRIXMUL_H_

