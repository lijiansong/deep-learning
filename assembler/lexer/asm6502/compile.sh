#!/bin/bash
set -e
echo "compile asm6502.g4 ..."
#antlr4 asm6502.g4 # listener mode 
#antlr4 -no-listener -visitor asm6502.g4 # visitor mode
mkdir ast
mv *.h *.cpp *.tokens ast

echo "done!"
