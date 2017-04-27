// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: radio.proto

#ifndef PROTOBUF_radio_2eproto__INCLUDED
#define PROTOBUF_radio_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace radio_rpc {
class Bool;
class BoolDefaultTypeInternal;
extern BoolDefaultTypeInternal _Bool_default_instance_;
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class Float;
class FloatDefaultTypeInternal;
extern FloatDefaultTypeInternal _Float_default_instance_;
class Parameters;
class ParametersDefaultTypeInternal;
extern ParametersDefaultTypeInternal _Parameters_default_instance_;
}  // namespace radio_rpc

namespace radio_rpc {

namespace protobuf_radio_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_radio_2eproto

// ===================================================================

class Empty : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:radio_rpc.Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Empty& default_instance();

  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }

  void Swap(Empty* other);

  // implements Message ----------------------------------------------

  inline Empty* New() const PROTOBUF_FINAL { return New(NULL); }

  Empty* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Empty* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:radio_rpc.Empty)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct  protobuf_radio_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Bool : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:radio_rpc.Bool) */ {
 public:
  Bool();
  virtual ~Bool();

  Bool(const Bool& from);

  inline Bool& operator=(const Bool& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Bool& default_instance();

  static inline const Bool* internal_default_instance() {
    return reinterpret_cast<const Bool*>(
               &_Bool_default_instance_);
  }

  void Swap(Bool* other);

  // implements Message ----------------------------------------------

  inline Bool* New() const PROTOBUF_FINAL { return New(NULL); }

  Bool* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Bool& from);
  void MergeFrom(const Bool& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Bool* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bool boolean = 1;
  void clear_boolean();
  static const int kBooleanFieldNumber = 1;
  bool boolean() const;
  void set_boolean(bool value);

  // @@protoc_insertion_point(class_scope:radio_rpc.Bool)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool boolean_;
  mutable int _cached_size_;
  friend struct  protobuf_radio_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:radio_rpc.Float) */ {
 public:
  Float();
  virtual ~Float();

  Float(const Float& from);

  inline Float& operator=(const Float& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float& default_instance();

  static inline const Float* internal_default_instance() {
    return reinterpret_cast<const Float*>(
               &_Float_default_instance_);
  }

  void Swap(Float* other);

  // implements Message ----------------------------------------------

  inline Float* New() const PROTOBUF_FINAL { return New(NULL); }

  Float* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float& from);
  void MergeFrom(const Float& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Float* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float _float = 1;
  void clear__float();
  static const int kFloatFieldNumber = 1;
  float _float() const;
  void set__float(float value);

  // @@protoc_insertion_point(class_scope:radio_rpc.Float)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float _float_;
  mutable int _cached_size_;
  friend struct  protobuf_radio_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Parameters : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:radio_rpc.Parameters) */ {
 public:
  Parameters();
  virtual ~Parameters();

  Parameters(const Parameters& from);

  inline Parameters& operator=(const Parameters& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Parameters& default_instance();

  static inline const Parameters* internal_default_instance() {
    return reinterpret_cast<const Parameters*>(
               &_Parameters_default_instance_);
  }

  void Swap(Parameters* other);

  // implements Message ----------------------------------------------

  inline Parameters* New() const PROTOBUF_FINAL { return New(NULL); }

  Parameters* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Parameters& from);
  void MergeFrom(const Parameters& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Parameters* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float frequency = 1;
  void clear_frequency();
  static const int kFrequencyFieldNumber = 1;
  float frequency() const;
  void set_frequency(float value);

  // float gain = 2;
  void clear_gain();
  static const int kGainFieldNumber = 2;
  float gain() const;
  void set_gain(float value);

  // int32 sample_rate = 3;
  void clear_sample_rate();
  static const int kSampleRateFieldNumber = 3;
  ::google::protobuf::int32 sample_rate() const;
  void set_sample_rate(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:radio_rpc.Parameters)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float frequency_;
  float gain_;
  ::google::protobuf::int32 sample_rate_;
  mutable int _cached_size_;
  friend struct  protobuf_radio_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Empty

// -------------------------------------------------------------------

// Bool

// bool boolean = 1;
inline void Bool::clear_boolean() {
  boolean_ = false;
}
inline bool Bool::boolean() const {
  // @@protoc_insertion_point(field_get:radio_rpc.Bool.boolean)
  return boolean_;
}
inline void Bool::set_boolean(bool value) {
  
  boolean_ = value;
  // @@protoc_insertion_point(field_set:radio_rpc.Bool.boolean)
}

// -------------------------------------------------------------------

// Float

// float _float = 1;
inline void Float::clear__float() {
  _float_ = 0;
}
inline float Float::_float() const {
  // @@protoc_insertion_point(field_get:radio_rpc.Float._float)
  return _float_;
}
inline void Float::set__float(float value) {
  
  _float_ = value;
  // @@protoc_insertion_point(field_set:radio_rpc.Float._float)
}

// -------------------------------------------------------------------

// Parameters

// float frequency = 1;
inline void Parameters::clear_frequency() {
  frequency_ = 0;
}
inline float Parameters::frequency() const {
  // @@protoc_insertion_point(field_get:radio_rpc.Parameters.frequency)
  return frequency_;
}
inline void Parameters::set_frequency(float value) {
  
  frequency_ = value;
  // @@protoc_insertion_point(field_set:radio_rpc.Parameters.frequency)
}

// float gain = 2;
inline void Parameters::clear_gain() {
  gain_ = 0;
}
inline float Parameters::gain() const {
  // @@protoc_insertion_point(field_get:radio_rpc.Parameters.gain)
  return gain_;
}
inline void Parameters::set_gain(float value) {
  
  gain_ = value;
  // @@protoc_insertion_point(field_set:radio_rpc.Parameters.gain)
}

// int32 sample_rate = 3;
inline void Parameters::clear_sample_rate() {
  sample_rate_ = 0;
}
inline ::google::protobuf::int32 Parameters::sample_rate() const {
  // @@protoc_insertion_point(field_get:radio_rpc.Parameters.sample_rate)
  return sample_rate_;
}
inline void Parameters::set_sample_rate(::google::protobuf::int32 value) {
  
  sample_rate_ = value;
  // @@protoc_insertion_point(field_set:radio_rpc.Parameters.sample_rate)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace radio_rpc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_radio_2eproto__INCLUDED
