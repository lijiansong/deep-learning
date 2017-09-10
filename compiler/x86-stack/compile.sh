#!/bin/bash
set -e
gcc -masm=intel -S foobar.c -o foobar.s
file foobar.s
