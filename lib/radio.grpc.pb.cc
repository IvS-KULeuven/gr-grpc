// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: radio.proto

#include "radio.pb.h"
#include "radio.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace radio_rpc {

static const char* Radio_method_names[] = {
  "/radio_rpc.Radio/GetData",
  "/radio_rpc.Radio/SetData",
  "/radio_rpc.Radio/Stop",
  "/radio_rpc.Radio/SetParams",
};

std::unique_ptr< Radio::Stub> Radio::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Radio::Stub> stub(new Radio::Stub(channel));
  return stub;
}

Radio::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetData_(Radio_method_names[0], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SetData_(Radio_method_names[1], ::grpc::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_Stop_(Radio_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetParams_(Radio_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::radio_rpc::Float>* Radio::Stub::GetDataRaw(::grpc::ClientContext* context, const ::radio_rpc::Empty& request) {
  return new ::grpc::ClientReader< ::radio_rpc::Float>(channel_.get(), rpcmethod_GetData_, context, request);
}

::grpc::ClientAsyncReader< ::radio_rpc::Float>* Radio::Stub::AsyncGetDataRaw(::grpc::ClientContext* context, const ::radio_rpc::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReader< ::radio_rpc::Float>(channel_.get(), cq, rpcmethod_GetData_, context, request, tag);
}

::grpc::ClientWriter< ::radio_rpc::Float>* Radio::Stub::SetDataRaw(::grpc::ClientContext* context, ::radio_rpc::Empty* response) {
  return new ::grpc::ClientWriter< ::radio_rpc::Float>(channel_.get(), rpcmethod_SetData_, context, response);
}

::grpc::ClientAsyncWriter< ::radio_rpc::Float>* Radio::Stub::AsyncSetDataRaw(::grpc::ClientContext* context, ::radio_rpc::Empty* response, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncWriter< ::radio_rpc::Float>(channel_.get(), cq, rpcmethod_SetData_, context, response, tag);
}

::grpc::Status Radio::Stub::Stop(::grpc::ClientContext* context, const ::radio_rpc::Empty& request, ::radio_rpc::Bool* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Stop_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::radio_rpc::Bool>* Radio::Stub::AsyncStopRaw(::grpc::ClientContext* context, const ::radio_rpc::Empty& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::radio_rpc::Bool>(channel_.get(), cq, rpcmethod_Stop_, context, request);
}

::grpc::Status Radio::Stub::SetParams(::grpc::ClientContext* context, const ::radio_rpc::Parameters& request, ::radio_rpc::Bool* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetParams_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::radio_rpc::Bool>* Radio::Stub::AsyncSetParamsRaw(::grpc::ClientContext* context, const ::radio_rpc::Parameters& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::radio_rpc::Bool>(channel_.get(), cq, rpcmethod_SetParams_, context, request);
}

Radio::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Radio_method_names[0],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< Radio::Service, ::radio_rpc::Empty, ::radio_rpc::Float>(
          std::mem_fn(&Radio::Service::GetData), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Radio_method_names[1],
      ::grpc::RpcMethod::CLIENT_STREAMING,
      new ::grpc::ClientStreamingHandler< Radio::Service, ::radio_rpc::Float, ::radio_rpc::Empty>(
          std::mem_fn(&Radio::Service::SetData), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Radio_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Radio::Service, ::radio_rpc::Empty, ::radio_rpc::Bool>(
          std::mem_fn(&Radio::Service::Stop), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Radio_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Radio::Service, ::radio_rpc::Parameters, ::radio_rpc::Bool>(
          std::mem_fn(&Radio::Service::SetParams), this)));
}

Radio::Service::~Service() {
}

::grpc::Status Radio::Service::GetData(::grpc::ServerContext* context, const ::radio_rpc::Empty* request, ::grpc::ServerWriter< ::radio_rpc::Float>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Radio::Service::SetData(::grpc::ServerContext* context, ::grpc::ServerReader< ::radio_rpc::Float>* reader, ::radio_rpc::Empty* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Radio::Service::Stop(::grpc::ServerContext* context, const ::radio_rpc::Empty* request, ::radio_rpc::Bool* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Radio::Service::SetParams(::grpc::ServerContext* context, const ::radio_rpc::Parameters* request, ::radio_rpc::Bool* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace radio_rpc

