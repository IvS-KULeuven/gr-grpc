/* -*- c++ -*- */

#define GRPC_BLOCKS_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "grpc_blocks_swig_doc.i"

%{
#include "grpc_blocks/sink.h"
#include "grpc_blocks/source.h"
%}


%include "grpc_blocks/sink.h"
GR_SWIG_BLOCK_MAGIC2(grpc_blocks, sink);
%include "grpc_blocks/source.h"
GR_SWIG_BLOCK_MAGIC2(grpc_blocks, source);
