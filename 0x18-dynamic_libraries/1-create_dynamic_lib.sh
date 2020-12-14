#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
