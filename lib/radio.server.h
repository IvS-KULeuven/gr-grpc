#ifndef INCLUDED_DATA_STREAMER_SERVER_H
#define INCLUDED_DATA_STREAMER_SERVER_H

#include "sink_impl.h"

#include <grpc/grpc.h>
#include <grpc++/server_context.h>
#include "radio.grpc.pb.h"
#include "radio.pb.h"

using namespace radio_rpc;
using namespace grpc;

namespace gr {
  namespace grpc_blocks {
    class RadioImpl final : public Radio::Service{
        private:
            gr::grpc_blocks::sink_impl* v_sink;
        public:
            RadioImpl(gr::grpc_blocks::sink_impl* sink);
            
            Status GetData(ServerContext * context, const Empty * request, ServerWriter< Float> * writer) override;
            
            Status SetData(ServerContext * context, ServerReader< Float> * reader, Empty * response) override;
            
            Status Stop(ServerContext * context, const Empty * request, Bool * response) override;
            
            Status SetParams(ServerContext * context, const Parameters * request, Bool * response) override;
    };
  }
}

#endif /* INCLUDED_DATA_STREAMER_SERVER_H */
