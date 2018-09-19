// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DelMessageRequestBuf.proto

#ifndef PROTOBUF_DelMessageRequestBuf_2eproto__INCLUDED
#define PROTOBUF_DelMessageRequestBuf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace huizhi {
namespace im {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DelMessageRequestBuf_2eproto();
void protobuf_AssignDesc_DelMessageRequestBuf_2eproto();
void protobuf_ShutdownFile_DelMessageRequestBuf_2eproto();

class DelMessageRequest;
class DelMessageResponse;

// ===================================================================

class DelMessageRequest : public ::google::protobuf::Message {
 public:
  DelMessageRequest();
  virtual ~DelMessageRequest();

  DelMessageRequest(const DelMessageRequest& from);

  inline DelMessageRequest& operator=(const DelMessageRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DelMessageRequest& default_instance();

  void Swap(DelMessageRequest* other);

  // implements Message ----------------------------------------------

  DelMessageRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DelMessageRequest& from);
  void MergeFrom(const DelMessageRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 fromUserId = 1;
  inline bool has_fromuserid() const;
  inline void clear_fromuserid();
  static const int kFromUserIdFieldNumber = 1;
  inline ::google::protobuf::int32 fromuserid() const;
  inline void set_fromuserid(::google::protobuf::int32 value);

  // required int32 toUserId = 2;
  inline bool has_touserid() const;
  inline void clear_touserid();
  static const int kToUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 touserid() const;
  inline void set_touserid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.huizhi.im.protobuf.DelMessageRequest)
 private:
  inline void set_has_fromuserid();
  inline void clear_has_fromuserid();
  inline void set_has_touserid();
  inline void clear_has_touserid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 fromuserid_;
  ::google::protobuf::int32 touserid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  friend void protobuf_AssignDesc_DelMessageRequestBuf_2eproto();
  friend void protobuf_ShutdownFile_DelMessageRequestBuf_2eproto();

  void InitAsDefaultInstance();
  static DelMessageRequest* default_instance_;
};
// -------------------------------------------------------------------

class DelMessageResponse : public ::google::protobuf::Message {
 public:
  DelMessageResponse();
  virtual ~DelMessageResponse();

  DelMessageResponse(const DelMessageResponse& from);

  inline DelMessageResponse& operator=(const DelMessageResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DelMessageResponse& default_instance();

  void Swap(DelMessageResponse* other);

  // implements Message ----------------------------------------------

  DelMessageResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DelMessageResponse& from);
  void MergeFrom(const DelMessageResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // required int32 fromUserId = 2;
  inline bool has_fromuserid() const;
  inline void clear_fromuserid();
  static const int kFromUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 fromuserid() const;
  inline void set_fromuserid(::google::protobuf::int32 value);

  // required int32 toUserId = 3;
  inline bool has_touserid() const;
  inline void clear_touserid();
  static const int kToUserIdFieldNumber = 3;
  inline ::google::protobuf::int32 touserid() const;
  inline void set_touserid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.huizhi.im.protobuf.DelMessageResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_fromuserid();
  inline void clear_has_fromuserid();
  inline void set_has_touserid();
  inline void clear_has_touserid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 fromuserid_;
  ::google::protobuf::int32 touserid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_DelMessageRequestBuf_2eproto();
  friend void protobuf_AssignDesc_DelMessageRequestBuf_2eproto();
  friend void protobuf_ShutdownFile_DelMessageRequestBuf_2eproto();

  void InitAsDefaultInstance();
  static DelMessageResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// DelMessageRequest

// required int32 fromUserId = 1;
inline bool DelMessageRequest::has_fromuserid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DelMessageRequest::set_has_fromuserid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DelMessageRequest::clear_has_fromuserid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DelMessageRequest::clear_fromuserid() {
  fromuserid_ = 0;
  clear_has_fromuserid();
}
inline ::google::protobuf::int32 DelMessageRequest::fromuserid() const {
  return fromuserid_;
}
inline void DelMessageRequest::set_fromuserid(::google::protobuf::int32 value) {
  set_has_fromuserid();
  fromuserid_ = value;
}

// required int32 toUserId = 2;
inline bool DelMessageRequest::has_touserid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DelMessageRequest::set_has_touserid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DelMessageRequest::clear_has_touserid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DelMessageRequest::clear_touserid() {
  touserid_ = 0;
  clear_has_touserid();
}
inline ::google::protobuf::int32 DelMessageRequest::touserid() const {
  return touserid_;
}
inline void DelMessageRequest::set_touserid(::google::protobuf::int32 value) {
  set_has_touserid();
  touserid_ = value;
}

// -------------------------------------------------------------------

// DelMessageResponse

// required int32 result = 1;
inline bool DelMessageResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DelMessageResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DelMessageResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DelMessageResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 DelMessageResponse::result() const {
  return result_;
}
inline void DelMessageResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// required int32 fromUserId = 2;
inline bool DelMessageResponse::has_fromuserid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DelMessageResponse::set_has_fromuserid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DelMessageResponse::clear_has_fromuserid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DelMessageResponse::clear_fromuserid() {
  fromuserid_ = 0;
  clear_has_fromuserid();
}
inline ::google::protobuf::int32 DelMessageResponse::fromuserid() const {
  return fromuserid_;
}
inline void DelMessageResponse::set_fromuserid(::google::protobuf::int32 value) {
  set_has_fromuserid();
  fromuserid_ = value;
}

// required int32 toUserId = 3;
inline bool DelMessageResponse::has_touserid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DelMessageResponse::set_has_touserid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DelMessageResponse::clear_has_touserid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DelMessageResponse::clear_touserid() {
  touserid_ = 0;
  clear_has_touserid();
}
inline ::google::protobuf::int32 DelMessageResponse::touserid() const {
  return touserid_;
}
inline void DelMessageResponse::set_touserid(::google::protobuf::int32 value) {
  set_has_touserid();
  touserid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace im
}  // namespace huizhi
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DelMessageRequestBuf_2eproto__INCLUDED