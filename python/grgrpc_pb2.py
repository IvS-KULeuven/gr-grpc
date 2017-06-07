# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: grgrpc.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='grgrpc.proto',
  package='grgrpc',
  syntax='proto3',
  serialized_pb=_b('\n\x0cgrgrpc.proto\x12\x06grgrpc\"\x07\n\x05\x45mpty\"\x1a\n\nStatusData\x12\x0c\n\x04\x63ode\x18\x01 \x01(\t\"\x85\x01\n\x06GRData\x12\x0e\n\x06m_byte\x18\x01 \x03(\x0c\x12\x0c\n\x04\x63ode\x18\x02 \x01(\t\x12!\n\x04type\x18\x03 \x01(\x0e\x32\x13.grgrpc.GRData.Type\x12\x18\n\x03tag\x18\x04 \x03(\x0b\x32\x0b.grgrpc.Tag\" \n\x04Type\x12\x0b\n\x07REQUEST\x10\x00\x12\x0b\n\x07PUBLISH\x10\x01\"\x17\n\x04\x42ool\x12\x0f\n\x07\x62oolean\x18\x01 \x01(\x08\"\x17\n\x05\x46loat\x12\x0e\n\x06_float\x18\x01 \x01(\x02\"B\n\nParameters\x12\x11\n\tfrequency\x18\x01 \x01(\x02\x12\x0c\n\x04gain\x18\x02 \x01(\x02\x12\x13\n\x0bsample_rate\x18\x03 \x01(\x05\"@\n\x03Tag\x12\x0e\n\x06offset\x18\x01 \x01(\x04\x12\x0b\n\x03key\x18\x02 \x01(\t\x12\r\n\x05value\x18\x03 \x01(\t\x12\r\n\x05srcid\x18\x04 \x01(\t2\x80\x01\n\x0cGNURadioLink\x12\x37\n\x0bPublishData\x12\x0e.grgrpc.GRData\x1a\x12.grgrpc.StatusData\"\x00(\x01\x30\x01\x12\x37\n\x0bRequestData\x12\x12.grgrpc.StatusData\x1a\x0e.grgrpc.GRData\"\x00(\x01\x30\x01\x62\x06proto3')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_GRDATA_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='grgrpc.GRData.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='REQUEST', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PUBLISH', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=163,
  serialized_end=195,
)
_sym_db.RegisterEnumDescriptor(_GRDATA_TYPE)


_EMPTY = _descriptor.Descriptor(
  name='Empty',
  full_name='grgrpc.Empty',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=24,
  serialized_end=31,
)


_STATUSDATA = _descriptor.Descriptor(
  name='StatusData',
  full_name='grgrpc.StatusData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='code', full_name='grgrpc.StatusData.code', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=33,
  serialized_end=59,
)


_GRDATA = _descriptor.Descriptor(
  name='GRData',
  full_name='grgrpc.GRData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='m_byte', full_name='grgrpc.GRData.m_byte', index=0,
      number=1, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='code', full_name='grgrpc.GRData.code', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='grgrpc.GRData.type', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tag', full_name='grgrpc.GRData.tag', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _GRDATA_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=62,
  serialized_end=195,
)


_BOOL = _descriptor.Descriptor(
  name='Bool',
  full_name='grgrpc.Bool',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='boolean', full_name='grgrpc.Bool.boolean', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=197,
  serialized_end=220,
)


_FLOAT = _descriptor.Descriptor(
  name='Float',
  full_name='grgrpc.Float',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='_float', full_name='grgrpc.Float._float', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=222,
  serialized_end=245,
)


_PARAMETERS = _descriptor.Descriptor(
  name='Parameters',
  full_name='grgrpc.Parameters',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='frequency', full_name='grgrpc.Parameters.frequency', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gain', full_name='grgrpc.Parameters.gain', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sample_rate', full_name='grgrpc.Parameters.sample_rate', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=247,
  serialized_end=313,
)


_TAG = _descriptor.Descriptor(
  name='Tag',
  full_name='grgrpc.Tag',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='offset', full_name='grgrpc.Tag.offset', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='key', full_name='grgrpc.Tag.key', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='grgrpc.Tag.value', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='srcid', full_name='grgrpc.Tag.srcid', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=315,
  serialized_end=379,
)

_GRDATA.fields_by_name['type'].enum_type = _GRDATA_TYPE
_GRDATA.fields_by_name['tag'].message_type = _TAG
_GRDATA_TYPE.containing_type = _GRDATA
DESCRIPTOR.message_types_by_name['Empty'] = _EMPTY
DESCRIPTOR.message_types_by_name['StatusData'] = _STATUSDATA
DESCRIPTOR.message_types_by_name['GRData'] = _GRDATA
DESCRIPTOR.message_types_by_name['Bool'] = _BOOL
DESCRIPTOR.message_types_by_name['Float'] = _FLOAT
DESCRIPTOR.message_types_by_name['Parameters'] = _PARAMETERS
DESCRIPTOR.message_types_by_name['Tag'] = _TAG

Empty = _reflection.GeneratedProtocolMessageType('Empty', (_message.Message,), dict(
  DESCRIPTOR = _EMPTY,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.Empty)
  ))
_sym_db.RegisterMessage(Empty)

StatusData = _reflection.GeneratedProtocolMessageType('StatusData', (_message.Message,), dict(
  DESCRIPTOR = _STATUSDATA,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.StatusData)
  ))
_sym_db.RegisterMessage(StatusData)

GRData = _reflection.GeneratedProtocolMessageType('GRData', (_message.Message,), dict(
  DESCRIPTOR = _GRDATA,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.GRData)
  ))
_sym_db.RegisterMessage(GRData)

Bool = _reflection.GeneratedProtocolMessageType('Bool', (_message.Message,), dict(
  DESCRIPTOR = _BOOL,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.Bool)
  ))
_sym_db.RegisterMessage(Bool)

Float = _reflection.GeneratedProtocolMessageType('Float', (_message.Message,), dict(
  DESCRIPTOR = _FLOAT,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.Float)
  ))
_sym_db.RegisterMessage(Float)

Parameters = _reflection.GeneratedProtocolMessageType('Parameters', (_message.Message,), dict(
  DESCRIPTOR = _PARAMETERS,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.Parameters)
  ))
_sym_db.RegisterMessage(Parameters)

Tag = _reflection.GeneratedProtocolMessageType('Tag', (_message.Message,), dict(
  DESCRIPTOR = _TAG,
  __module__ = 'grgrpc_pb2'
  # @@protoc_insertion_point(class_scope:grgrpc.Tag)
  ))
_sym_db.RegisterMessage(Tag)


try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class GNURadioLinkStub(object):

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.PublishData = channel.stream_stream(
          '/grgrpc.GNURadioLink/PublishData',
          request_serializer=GRData.SerializeToString,
          response_deserializer=StatusData.FromString,
          )
      self.RequestData = channel.stream_stream(
          '/grgrpc.GNURadioLink/RequestData',
          request_serializer=StatusData.SerializeToString,
          response_deserializer=GRData.FromString,
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
            request_deserializer=GRData.FromString,
            response_serializer=StatusData.SerializeToString,
        ),
        'RequestData': grpc.stream_stream_rpc_method_handler(
            servicer.RequestData,
            request_deserializer=StatusData.FromString,
            response_serializer=GRData.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'grgrpc.GNURadioLink', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaGNURadioLinkServicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    def PublishData(self, request_iterator, context):
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def RequestData(self, request_iterator, context):
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaGNURadioLinkStub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    def PublishData(self, request_iterator, timeout, metadata=None, with_call=False, protocol_options=None):
      raise NotImplementedError()
    def RequestData(self, request_iterator, timeout, metadata=None, with_call=False, protocol_options=None):
      raise NotImplementedError()


  def beta_create_GNURadioLink_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('grgrpc.GNURadioLink', 'PublishData'): GRData.FromString,
      ('grgrpc.GNURadioLink', 'RequestData'): StatusData.FromString,
    }
    response_serializers = {
      ('grgrpc.GNURadioLink', 'PublishData'): StatusData.SerializeToString,
      ('grgrpc.GNURadioLink', 'RequestData'): GRData.SerializeToString,
    }
    method_implementations = {
      ('grgrpc.GNURadioLink', 'PublishData'): face_utilities.stream_stream_inline(servicer.PublishData),
      ('grgrpc.GNURadioLink', 'RequestData'): face_utilities.stream_stream_inline(servicer.RequestData),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_GNURadioLink_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('grgrpc.GNURadioLink', 'PublishData'): GRData.SerializeToString,
      ('grgrpc.GNURadioLink', 'RequestData'): StatusData.SerializeToString,
    }
    response_deserializers = {
      ('grgrpc.GNURadioLink', 'PublishData'): StatusData.FromString,
      ('grgrpc.GNURadioLink', 'RequestData'): GRData.FromString,
    }
    cardinalities = {
      'PublishData': cardinality.Cardinality.STREAM_STREAM,
      'RequestData': cardinality.Cardinality.STREAM_STREAM,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'grgrpc.GNURadioLink', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
