# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

import grgrpc_pb2 as grgrpc__pb2


class GNURadioLinkStub(object):

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.PublishData = channel.stream_stream(
        '/grgrpc.GNURadioLink/PublishData',
        request_serializer=grgrpc__pb2.GRData.SerializeToString,
        response_deserializer=grgrpc__pb2.StatusData.FromString,
        )
    self.RequestData = channel.stream_stream(
        '/grgrpc.GNURadioLink/RequestData',
        request_serializer=grgrpc__pb2.StatusData.SerializeToString,
        response_deserializer=grgrpc__pb2.GRData.FromString,
        )


class GNURadioLinkServicer(object):

  def PublishData(self, request_iterator, context):
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def RequestData(self, request_iterator, context):
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_GNURadioLinkServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'PublishData': grpc.stream_stream_rpc_method_handler(
          servicer.PublishData,
          request_deserializer=grgrpc__pb2.GRData.FromString,
          response_serializer=grgrpc__pb2.StatusData.SerializeToString,
      ),
      'RequestData': grpc.stream_stream_rpc_method_handler(
          servicer.RequestData,
          request_deserializer=grgrpc__pb2.StatusData.FromString,
          response_serializer=grgrpc__pb2.GRData.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'grgrpc.GNURadioLink', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))