#!/bin/bash
gcc -fPIC -shared -Wall -Werror -Wextra -pedantic -o "lib${1:-all}.so" *.c
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
