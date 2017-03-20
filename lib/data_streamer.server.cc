#include "data_streamer.server.h"

using grpc::Status;
using grpc::ServerContext;
using grpc::ServerWriter;
using gr::grpc_blocks::sink_impl;

DataStreamerImpl::DataStreamerImpl(sink_impl* sink) : v_sink(sink){}

Status DataStreamerImpl::RequestData(ServerContext * context, const Request * request, ServerWriter< Reply> * writer) {
    v_sink->server_writer = writer;
    while(true){}
    
    return Status::OK;
}
