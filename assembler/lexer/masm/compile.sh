#!/bin/bash
set -e
echo "compile MASM.g4 ..."
#antlr4 MASM.g4
#antlr4 MASM.g4 # listener mode 
#antlr4 -no-listener -visitor MASM.g4  # visitor mode
mkdir ast
mv *.h *.cpp *.tokens ast

echo "done!"
