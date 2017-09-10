#!/bin/bash
set -e
gcc -c a.c b.c
ld a.o b.o -e main -o ab
objdump -h a.o
objdump -h b.o
objdump -h ab
