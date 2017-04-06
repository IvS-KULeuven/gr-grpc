#include "data_streamer.server.h"

using grpc::Status;
using grpc::ServerContext;
using grpc::ServerWriter;
using gr::grpc_blocks::sink_impl;

using namespace datastreamer;

namespace gr {
  namespace grpc_blocks {

DataStreamerImpl::DataStreamerImpl(sink_impl* sink) : v_sink(sink){}

    Status DataStreamerImpl::RequestData(ServerContext * context, const Request * request, ServerWriter< Reply> * writer) {
        std::cout << "client request" << std::endl;
        v_sink->server_writer = writer;
        while(true){}
        
        return Status::OK;
    }
  }
}
