#include "radio.server.h"

using grpc::Status;
using grpc::ServerContext;
using grpc::ServerWriter;
using gr::grpc_blocks::sink_impl;

using namespace radio_rpc;

namespace gr {
  namespace grpc_blocks {

    RadioImpl::RadioImpl(sink_impl* sink) : v_sink(sink){}
    
    Status RadioImpl::GetData(ServerContext * context, const Empty * request, ServerWriter< Float> * writer){
        v_sink->server_writer = writer;
        while(true){}
        return Status::OK;
    }
    
    Status SetData(ServerContext * context, ServerReader< Float> * reader, Empty * response) {
        
        return Status::OK;
    }
            
    Status Stop(ServerContext * context, const Empty * request, Bool * response) {
        
        
        return Status::OK;
    }
    
    Status SetParams(ServerContext * context, const Parameters * request, Bool * response) {
        
        
        return Status::OK;
    }
  }
}
