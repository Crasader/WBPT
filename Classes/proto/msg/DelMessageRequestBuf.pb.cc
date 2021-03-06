// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DelMessageRequestBuf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DelMessageRequestBuf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace huizhi {
namespace im {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* DelMessageRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DelMessageRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* DelMessageResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DelMessageResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DelMessageRequestBuf_2eproto() {
  protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DelMessageRequestBuf.proto");
  GOOGLE_CHECK(file != NULL);
  DelMessageRequest_descriptor_ = file->message_type(0);
  static const int DelMessageRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageRequest, fromuserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageRequest, touserid_),
  };
  DelMessageRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DelMessageRequest_descriptor_,
      DelMessageRequest::default_instance_,
      DelMessageRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DelMessageRequest));
  DelMessageResponse_descriptor_ = file->message_type(1);
  static const int DelMessageResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageResponse, fromuserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageResponse, touserid_),
  };
  DelMessageResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DelMessageResponse_descriptor_,
      DelMessageResponse::default_instance_,
      DelMessageResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelMessageResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DelMessageResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DelMessageRequestBuf_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DelMessageRequest_descriptor_, &DelMessageRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DelMessageResponse_descriptor_, &DelMessageResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DelMessageRequestBuf_2eproto() {
  delete DelMessageRequest::default_instance_;
  delete DelMessageRequest_reflection_;
  delete DelMessageResponse::default_instance_;
  delete DelMessageResponse_reflection_;
}

void protobuf_AddDesc_DelMessageRequestBuf_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032DelMessageRequestBuf.proto\022\026com.huizhi"
    ".im.protobuf\"9\n\021DelMessageRequest\022\022\n\nfro"
    "mUserId\030\001 \002(\005\022\020\n\010toUserId\030\002 \002(\005\"J\n\022DelMe"
    "ssageResponse\022\016\n\006result\030\001 \002(\005\022\022\n\nfromUse"
    "rId\030\002 \002(\005\022\020\n\010toUserId\030\003 \002(\005B\026B\024DelMessag"
    "eRequestBuf", 211);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DelMessageRequestBuf.proto", &protobuf_RegisterTypes);
  DelMessageRequest::default_instance_ = new DelMessageRequest();
  DelMessageResponse::default_instance_ = new DelMessageResponse();
  DelMessageRequest::default_instance_->InitAsDefaultInstance();
  DelMessageResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DelMessageRequestBuf_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DelMessageRequestBuf_2eproto {
  StaticDescriptorInitializer_DelMessageRequestBuf_2eproto() {
    protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  }
} static_descriptor_initializer_DelMessageRequestBuf_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DelMessageRequest::kFromUserIdFieldNumber;
const int DelMessageRequest::kToUserIdFieldNumber;
#endif  // !_MSC_VER

DelMessageRequest::DelMessageRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DelMessageRequest::InitAsDefaultInstance() {
}

DelMessageRequest::DelMessageRequest(const DelMessageRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DelMessageRequest::SharedCtor() {
  _cached_size_ = 0;
  fromuserid_ = 0;
  touserid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DelMessageRequest::~DelMessageRequest() {
  SharedDtor();
}

void DelMessageRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DelMessageRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DelMessageRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DelMessageRequest_descriptor_;
}

const DelMessageRequest& DelMessageRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  return *default_instance_;
}

DelMessageRequest* DelMessageRequest::default_instance_ = NULL;

DelMessageRequest* DelMessageRequest::New() const {
  return new DelMessageRequest;
}

void DelMessageRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    fromuserid_ = 0;
    touserid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DelMessageRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 fromUserId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fromuserid_)));
          set_has_fromuserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_toUserId;
        break;
      }

      // required int32 toUserId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_toUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &touserid_)));
          set_has_touserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DelMessageRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 fromUserId = 1;
  if (has_fromuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->fromuserid(), output);
  }

  // required int32 toUserId = 2;
  if (has_touserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->touserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DelMessageRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 fromUserId = 1;
  if (has_fromuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->fromuserid(), target);
  }

  // required int32 toUserId = 2;
  if (has_touserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->touserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DelMessageRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 fromUserId = 1;
    if (has_fromuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fromuserid());
    }

    // required int32 toUserId = 2;
    if (has_touserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->touserid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DelMessageRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DelMessageRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DelMessageRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DelMessageRequest::MergeFrom(const DelMessageRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fromuserid()) {
      set_fromuserid(from.fromuserid());
    }
    if (from.has_touserid()) {
      set_touserid(from.touserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DelMessageRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DelMessageRequest::CopyFrom(const DelMessageRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DelMessageRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void DelMessageRequest::Swap(DelMessageRequest* other) {
  if (other != this) {
    std::swap(fromuserid_, other->fromuserid_);
    std::swap(touserid_, other->touserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DelMessageRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DelMessageRequest_descriptor_;
  metadata.reflection = DelMessageRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DelMessageResponse::kResultFieldNumber;
const int DelMessageResponse::kFromUserIdFieldNumber;
const int DelMessageResponse::kToUserIdFieldNumber;
#endif  // !_MSC_VER

DelMessageResponse::DelMessageResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DelMessageResponse::InitAsDefaultInstance() {
}

DelMessageResponse::DelMessageResponse(const DelMessageResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DelMessageResponse::SharedCtor() {
  _cached_size_ = 0;
  result_ = 0;
  fromuserid_ = 0;
  touserid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DelMessageResponse::~DelMessageResponse() {
  SharedDtor();
}

void DelMessageResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DelMessageResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DelMessageResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DelMessageResponse_descriptor_;
}

const DelMessageResponse& DelMessageResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  return *default_instance_;
}

DelMessageResponse* DelMessageResponse::default_instance_ = NULL;

DelMessageResponse* DelMessageResponse::New() const {
  return new DelMessageResponse;
}

void DelMessageResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = 0;
    fromuserid_ = 0;
    touserid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DelMessageResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 result = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_fromUserId;
        break;
      }

      // required int32 fromUserId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fromUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fromuserid_)));
          set_has_fromuserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_toUserId;
        break;
      }

      // required int32 toUserId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_toUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &touserid_)));
          set_has_touserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DelMessageResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 result = 1;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // required int32 fromUserId = 2;
  if (has_fromuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->fromuserid(), output);
  }

  // required int32 toUserId = 3;
  if (has_touserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->touserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DelMessageResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 result = 1;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  // required int32 fromUserId = 2;
  if (has_fromuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->fromuserid(), target);
  }

  // required int32 toUserId = 3;
  if (has_touserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->touserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DelMessageResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 result = 1;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->result());
    }

    // required int32 fromUserId = 2;
    if (has_fromuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fromuserid());
    }

    // required int32 toUserId = 3;
    if (has_touserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->touserid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DelMessageResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DelMessageResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DelMessageResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DelMessageResponse::MergeFrom(const DelMessageResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_fromuserid()) {
      set_fromuserid(from.fromuserid());
    }
    if (from.has_touserid()) {
      set_touserid(from.touserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DelMessageResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DelMessageResponse::CopyFrom(const DelMessageResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DelMessageResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void DelMessageResponse::Swap(DelMessageResponse* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(fromuserid_, other->fromuserid_);
    std::swap(touserid_, other->touserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DelMessageResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DelMessageResponse_descriptor_;
  metadata.reflection = DelMessageResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace im
}  // namespace huizhi
}  // namespace com

// @@protoc_insertion_point(global_scope)
