#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/olakunle1/alx-low_level_programming/main/0x18-dynamic_libraries/libmyprintf.so
export LD_PRELOAD=/tmp/libmyprintf.so
