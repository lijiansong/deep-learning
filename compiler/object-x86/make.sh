#!/bin/bash
set -e 
gcc pthread.c -o pthread
./pthread
gcc pthread.c -lpthread -o pthread
./pthread
