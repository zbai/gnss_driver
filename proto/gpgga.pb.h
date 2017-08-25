// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gpgga.proto

#ifndef PROTOBUF_gpgga_2eproto__INCLUDED
#define PROTOBUF_gpgga_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace gnss_driver {
namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_gpgga_2eproto();
void protobuf_AssignDesc_gpgga_2eproto();
void protobuf_ShutdownFile_gpgga_2eproto();

class GPGGA;

// ===================================================================

class GPGGA : public ::google::protobuf::Message {
 public:
  GPGGA();
  virtual ~GPGGA();

  GPGGA(const GPGGA& from);

  inline GPGGA& operator=(const GPGGA& from) {
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
  static const GPGGA& default_instance();

  void Swap(GPGGA* other);

  // implements Message ----------------------------------------------

  GPGGA* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GPGGA& from);
  void MergeFrom(const GPGGA& from);
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

  // required string gpgga = 1;
  inline bool has_gpgga() const;
  inline void clear_gpgga();
  static const int kGpggaFieldNumber = 1;
  inline const ::std::string& gpgga() const;
  inline void set_gpgga(const ::std::string& value);
  inline void set_gpgga(const char* value);
  inline void set_gpgga(const char* value, size_t size);
  inline ::std::string* mutable_gpgga();
  inline ::std::string* release_gpgga();
  inline void set_allocated_gpgga(::std::string* gpgga);

  // @@protoc_insertion_point(class_scope:gnss_driver.pb.GPGGA)
 private:
  inline void set_has_gpgga();
  inline void clear_has_gpgga();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* gpgga_;
  friend void  protobuf_AddDesc_gpgga_2eproto();
  friend void protobuf_AssignDesc_gpgga_2eproto();
  friend void protobuf_ShutdownFile_gpgga_2eproto();

  void InitAsDefaultInstance();
  static GPGGA* default_instance_;
};
// ===================================================================


// ===================================================================

// GPGGA

// required string gpgga = 1;
inline bool GPGGA::has_gpgga() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GPGGA::set_has_gpgga() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GPGGA::clear_has_gpgga() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GPGGA::clear_gpgga() {
  if (gpgga_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    gpgga_->clear();
  }
  clear_has_gpgga();
}
inline const ::std::string& GPGGA::gpgga() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.GPGGA.gpgga)
  return *gpgga_;
}
inline void GPGGA::set_gpgga(const ::std::string& value) {
  set_has_gpgga();
  if (gpgga_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    gpgga_ = new ::std::string;
  }
  gpgga_->assign(value);
  // @@protoc_insertion_point(field_set:gnss_driver.pb.GPGGA.gpgga)
}
inline void GPGGA::set_gpgga(const char* value) {
  set_has_gpgga();
  if (gpgga_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    gpgga_ = new ::std::string;
  }
  gpgga_->assign(value);
  // @@protoc_insertion_point(field_set_char:gnss_driver.pb.GPGGA.gpgga)
}
inline void GPGGA::set_gpgga(const char* value, size_t size) {
  set_has_gpgga();
  if (gpgga_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    gpgga_ = new ::std::string;
  }
  gpgga_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gnss_driver.pb.GPGGA.gpgga)
}
inline ::std::string* GPGGA::mutable_gpgga() {
  set_has_gpgga();
  if (gpgga_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    gpgga_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gnss_driver.pb.GPGGA.gpgga)
  return gpgga_;
}
inline ::std::string* GPGGA::release_gpgga() {
  clear_has_gpgga();
  if (gpgga_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = gpgga_;
    gpgga_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void GPGGA::set_allocated_gpgga(::std::string* gpgga) {
  if (gpgga_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete gpgga_;
  }
  if (gpgga) {
    set_has_gpgga();
    gpgga_ = gpgga;
  } else {
    clear_has_gpgga();
    gpgga_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gnss_driver.pb.GPGGA.gpgga)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace gnss_driver

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gpgga_2eproto__INCLUDED
