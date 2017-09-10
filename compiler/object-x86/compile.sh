#!/bin/bash
set -e
gcc -c foo.c
file foo.o
objdump -h foo.o
size foo.o
objdump -s -d foo.o
objdump -x -s -d foo.o
readelf -h foo.o
readelf -S foo.o
nm foo.o
readelf -s foo.o
# cut off the debug info
strip foo.o
