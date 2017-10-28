#!/bin/bash
set -e
echo "compile asm6502.g4 ..."
antlr4 asm6502.g4 
mkdir ast
mv *.h *.cpp *.tokens ast

echo "done!"
