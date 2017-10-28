#!/bin/bash
set -e
echo "compile MASM.g4 ..."
#antlr4 MASM.g4
mkdir ast
mv *.h *.cpp *.tokens ast

echo "done!"
