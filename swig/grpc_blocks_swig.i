/* -*- c++ -*- */

#define GRPC_BLOCKS_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "grpc_blocks_swig_doc.i"

%{
#include "grpc_blocks/grpc_client_source.h"
#include "grpc_blocks/grpc_client_sink.h"
%}


%include "grpc_blocks/grpc_client_sink.h"
GR_SWIG_BLOCK_MAGIC2(grpc_blocks, grpc_client_sink);
%include "grpc_blocks/grpc_client_source.h"
GR_SWIG_BLOCK_MAGIC2(grpc_blocks, grpc_client_source);
