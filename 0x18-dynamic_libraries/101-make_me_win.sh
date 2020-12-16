#!/bin/bash
curl https://github.com/jfangwang/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/win.so -o /tmp/win.so
export LD_PRELOAD=/tmp/win.so
