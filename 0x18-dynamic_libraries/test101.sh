#!/bin/bash
#curl https://github.com/jfangwang/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/win.so -o /usr/lib/x86_64-linux-gnu/win.so
export LD_PRELOAD=/home/vagrant/holbertonschool-low_level_programming/0x18-dynamic_libraries/win.so
./gm 9 8 10 24 75 9
