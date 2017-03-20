#ifndef INCLUDED_DATA_STREAMER_SERVER_H
#define INCLUDED_DATA_STREAMER_SERVER_H

#include "sink_impl.h"
#include <grpc/grpc.h>
#include <grpc++/server_context.h>
#include "data_streamer.grpc.pb.h"
#include "data_streamer.pb.h"

class DataStreamerImpl final : public DataStreamer::Service{
private:
    gr::grpc_blocks::sink_impl* v_sink;
public:
    DataStreamerImpl(gr::grpc_blocks::sink_impl* sink);
    grpc::Status RequestData(grpc::ServerContext * context, const Request * request, grpc::ServerWriter< Reply> * writer);
};

#endif /* INCLUDED_DATA_STREAMER_SERVER_H */
