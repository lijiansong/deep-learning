#!/bin/bash
set -e
gcc -E foo.c -o foo.i
gcc -S foo.c
#gcc -v foo.c -o foo
gcc -S foo2.c
