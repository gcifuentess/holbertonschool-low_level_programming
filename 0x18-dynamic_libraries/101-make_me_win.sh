#!/bin/bash
wget -P /tmp https://github.com/gcifuentess/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libMakeMeWin.so
export LD_PRELOAD=/tmp/libMakeMeWin.so
