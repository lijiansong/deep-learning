#!/bin/bash

echo ********* begine test *********
size=(16 32 64 128 256 512 1024 2048 4096 8192 16384)
for i in ${size[@]}
do
    ./matrixMul${i}x${i} 2>&1 | tee res-${i}x${i}.log
done

echo ********* all test done *********
