#!/bin/bash
set -e
gcc -E foo.c -o foo.i
gcc -S foo.c
#gcc -v foo.c -o foo

# gen foo.o
gcc -c foo.c
readelf -h foo.o
gcc -S foo2.c

ar -t /usr/lib/libctemplate.a
objdump -t /usr/lib/libctemplate.a
