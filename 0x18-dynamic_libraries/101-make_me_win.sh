#!/bin/bash
wget -q -O /./unrandom.so https://github.com/bekikal/alx-low_level_programming/raw/master/0x18-dynamic_libraries/unrandom.so 
export LD_PRELOAD=/./unrandom.so
