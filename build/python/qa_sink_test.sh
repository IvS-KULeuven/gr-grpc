#!/usr/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/wimc/project/gr_mods/gr-grpc_blocks/python
export PATH=/home/wimc/project/gr_mods/gr-grpc_blocks/build/python:$PATH
export LD_LIBRARY_PATH=/home/wimc/project/gr_mods/gr-grpc_blocks/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/wimc/project/gr_mods/gr-grpc_blocks/build/swig:$PYTHONPATH
/usr/bin/python2 /home/wimc/project/gr_mods/gr-grpc_blocks/python/qa_sink.py 
