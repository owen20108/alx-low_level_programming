#!/bin/bash
wget -p /tmp https://github.com/owen20108/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
