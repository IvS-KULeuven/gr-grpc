
#include <iostream>
#include <memory>
#include <string>

#include <grpc++/grpc++.h>
#include "data_streamer.grpc.pb.h"
#include "data_streamer.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::ClientReader;
using namespace datastreamer;

class DataStreamerClient {
 public:
  DataStreamerClient(std::shared_ptr<Channel> channel)
      : stub_(DataStreamer::NewStub(channel)) {}

  // Assembles the client's payload, sends it and presents the response back
  // from the server.
  void RequestData() {
    // Container for the data we expect from the server.
    Reply reply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;
    
    std::unique_ptr<ClientReader<Reply> > reader(
        stub_->RequestData(&context, Request()));
    while (reader->Read(&reply)) {
      std::cout << "Float received: "
                << std::to_string(reply.message()) << std::endl;
    }
    Status status = reader->Finish();
    if (status.ok()) {
      std::cout << "rpc succeeded." << std::endl;
    } else {
      std::cout << "rpc failed." << std::endl;
    }
  }

 private:
  std::unique_ptr<DataStreamer::Stub> stub_;
};

int main(int argc, char** argv) {
  // Instantiate the client. It requires a channel, out of which the actual RPCs
  // are created. This channel models a connection to an endpoint (in this case,
  // localhost at port 50051). We indicate that the channel isn't authenticated
  // (use of InsecureChannelCredentials()).
  DataStreamerClient client(grpc::CreateChannel(
      "localhost:50051", grpc::InsecureChannelCredentials()));
  client.RequestData();
  
  return 0;
}
