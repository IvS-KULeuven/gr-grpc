#!/usr/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/wimc/project/gr_mods/gr-grpc_blocks/lib
export PATH=/home/wimc/project/gr_mods/gr-grpc_blocks/build/lib:$PATH
export LD_LIBRARY_PATH=/home/wimc/project/gr_mods/gr-grpc_blocks/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=$PYTHONPATH
test-grpc_blocks 
