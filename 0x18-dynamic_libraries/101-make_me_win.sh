#!/bin/bash
wget -P /tmp/ https://github.com/AhmedOmi/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/random
export LD_PRELOAD=/tmp/random