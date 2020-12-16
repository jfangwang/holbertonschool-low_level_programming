#!/bin/bash
gcc win.c -c -fPIC
gcc *.o -shared -o win.so
