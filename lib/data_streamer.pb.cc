// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data_streamer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "data_streamer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class RequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Request> {
} _Request_default_instance_;
class ReplyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Reply> {
} _Reply_default_instance_;

namespace protobuf_data_5fstreamer_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reply, message_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Request)},
  { 4, -1, sizeof(Reply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Request_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Reply_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "data_streamer.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Request_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Reply_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Request_default_instance_.DefaultConstruct();
  _Reply_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\023data_streamer.proto\"\t\n\007Request\"\030\n\005Repl"
      "y\022\017\n\007message\030\001 \001(\00223\n\014DataStreamer\022#\n\013Re"
      "questData\022\010.Request\032\006.Reply\"\0000\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "data_streamer.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_data_5fstreamer_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Request::Request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_data_5fstreamer_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Request)
}
Request::Request(const Request& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Request)
}

void Request::SharedCtor() {
  _cached_size_ = 0;
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:Request)
  SharedDtor();
}

void Request::SharedDtor() {
}

void Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Request::descriptor() {
  protobuf_data_5fstreamer_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_data_5fstreamer_2eproto::file_level_metadata[0].descriptor;
}

const Request& Request::default_instance() {
  protobuf_data_5fstreamer_2eproto::InitDefaults();
  return *internal_default_instance();
}

Request* Request::New(::google::protobuf::Arena* arena) const {
  Request* n = new Request;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:Request)
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Request)
  return false;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Request)
  // @@protoc_insertion_point(serialize_end:Request)
}

::google::protobuf::uint8* Request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Request)
  // @@protoc_insertion_point(serialize_to_array_end:Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Request)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Request)
  GOOGLE_DCHECK_NE(&from, this);
  const Request* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Request)
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
}

void Request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::Swap(Request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Request::InternalSwap(Request* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Request::GetMetadata() const {
  protobuf_data_5fstreamer_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_data_5fstreamer_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Request

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Reply::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Reply::Reply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_data_5fstreamer_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Reply)
}
Reply::Reply(const Reply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_ = from.message_;
  // @@protoc_insertion_point(copy_constructor:Reply)
}

void Reply::SharedCtor() {
  message_ = 0;
  _cached_size_ = 0;
}

Reply::~Reply() {
  // @@protoc_insertion_point(destructor:Reply)
  SharedDtor();
}

void Reply::SharedDtor() {
}

void Reply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Reply::descriptor() {
  protobuf_data_5fstreamer_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_data_5fstreamer_2eproto::file_level_metadata[1].descriptor;
}

const Reply& Reply::default_instance() {
  protobuf_data_5fstreamer_2eproto::InitDefaults();
  return *internal_default_instance();
}

Reply* Reply::New(::google::protobuf::Arena* arena) const {
  Reply* n = new Reply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Reply::Clear() {
// @@protoc_insertion_point(message_clear_start:Reply)
  message_ = 0;
}

bool Reply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Reply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float message = 1;
      case 1: {
        if (tag == 13u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &message_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Reply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Reply)
  return false;
#undef DO_
}

void Reply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Reply)
  // float message = 1;
  if (this->message() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->message(), output);
  }

  // @@protoc_insertion_point(serialize_end:Reply)
}

::google::protobuf::uint8* Reply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Reply)
  // float message = 1;
  if (this->message() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->message(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Reply)
  return target;
}

size_t Reply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Reply)
  size_t total_size = 0;

  // float message = 1;
  if (this->message() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Reply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Reply)
  GOOGLE_DCHECK_NE(&from, this);
  const Reply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Reply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Reply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Reply)
    MergeFrom(*source);
  }
}

void Reply::MergeFrom(const Reply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Reply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.message() != 0) {
    set_message(from.message());
  }
}

void Reply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Reply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Reply::CopyFrom(const Reply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Reply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Reply::IsInitialized() const {
  return true;
}

void Reply::Swap(Reply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Reply::InternalSwap(Reply* other) {
  std::swap(message_, other->message_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Reply::GetMetadata() const {
  protobuf_data_5fstreamer_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_data_5fstreamer_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Reply

// float message = 1;
void Reply::clear_message() {
  message_ = 0;
}
float Reply::message() const {
  // @@protoc_insertion_point(field_get:Reply.message)
  return message_;
}
void Reply::set_message(float value) {
  
  message_ = value;
  // @@protoc_insertion_point(field_set:Reply.message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
