// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: imu.proto

#ifndef PROTOBUF_imu_2eproto__INCLUDED
#define PROTOBUF_imu_2eproto__INCLUDED

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
#include "header.pb.h"
#include "geometry.pb.h"
// @@protoc_insertion_point(includes)

namespace gnss_driver {
namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_imu_2eproto();
void protobuf_AssignDesc_imu_2eproto();
void protobuf_ShutdownFile_imu_2eproto();

class Imu;

// ===================================================================

class Imu : public ::google::protobuf::Message {
 public:
  Imu();
  virtual ~Imu();

  Imu(const Imu& from);

  inline Imu& operator=(const Imu& from) {
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
  static const Imu& default_instance();

  void Swap(Imu* other);

  // implements Message ----------------------------------------------

  Imu* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Imu& from);
  void MergeFrom(const Imu& from);
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

  // optional .gnss_driver.pb.Header header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::gnss_driver::pb::Header& header() const;
  inline ::gnss_driver::pb::Header* mutable_header();
  inline ::gnss_driver::pb::Header* release_header();
  inline void set_allocated_header(::gnss_driver::pb::Header* header);

  // optional double measurement_time = 2;
  inline bool has_measurement_time() const;
  inline void clear_measurement_time();
  static const int kMeasurementTimeFieldNumber = 2;
  inline double measurement_time() const;
  inline void set_measurement_time(double value);

  // optional float measurement_span = 3 [default = 0];
  inline bool has_measurement_span() const;
  inline void clear_measurement_span();
  static const int kMeasurementSpanFieldNumber = 3;
  inline float measurement_span() const;
  inline void set_measurement_span(float value);

  // optional .gnss_driver.pb.Point3D linear_acceleration = 4;
  inline bool has_linear_acceleration() const;
  inline void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 4;
  inline const ::gnss_driver::pb::Point3D& linear_acceleration() const;
  inline ::gnss_driver::pb::Point3D* mutable_linear_acceleration();
  inline ::gnss_driver::pb::Point3D* release_linear_acceleration();
  inline void set_allocated_linear_acceleration(::gnss_driver::pb::Point3D* linear_acceleration);

  // optional .gnss_driver.pb.Point3D angular_velocity = 5;
  inline bool has_angular_velocity() const;
  inline void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 5;
  inline const ::gnss_driver::pb::Point3D& angular_velocity() const;
  inline ::gnss_driver::pb::Point3D* mutable_angular_velocity();
  inline ::gnss_driver::pb::Point3D* release_angular_velocity();
  inline void set_allocated_angular_velocity(::gnss_driver::pb::Point3D* angular_velocity);

  // @@protoc_insertion_point(class_scope:gnss_driver.pb.Imu)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_measurement_time();
  inline void clear_has_measurement_time();
  inline void set_has_measurement_span();
  inline void clear_has_measurement_span();
  inline void set_has_linear_acceleration();
  inline void clear_has_linear_acceleration();
  inline void set_has_angular_velocity();
  inline void clear_has_angular_velocity();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gnss_driver::pb::Header* header_;
  double measurement_time_;
  ::gnss_driver::pb::Point3D* linear_acceleration_;
  ::gnss_driver::pb::Point3D* angular_velocity_;
  float measurement_span_;
  friend void  protobuf_AddDesc_imu_2eproto();
  friend void protobuf_AssignDesc_imu_2eproto();
  friend void protobuf_ShutdownFile_imu_2eproto();

  void InitAsDefaultInstance();
  static Imu* default_instance_;
};
// ===================================================================


// ===================================================================

// Imu

// optional .gnss_driver.pb.Header header = 1;
inline bool Imu::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Imu::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Imu::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Imu::clear_header() {
  if (header_ != NULL) header_->::gnss_driver::pb::Header::Clear();
  clear_has_header();
}
inline const ::gnss_driver::pb::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.Imu.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gnss_driver::pb::Header* Imu::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::gnss_driver::pb::Header;
  // @@protoc_insertion_point(field_mutable:gnss_driver.pb.Imu.header)
  return header_;
}
inline ::gnss_driver::pb::Header* Imu::release_header() {
  clear_has_header();
  ::gnss_driver::pb::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Imu::set_allocated_header(::gnss_driver::pb::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gnss_driver.pb.Imu.header)
}

// optional double measurement_time = 2;
inline bool Imu::has_measurement_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Imu::set_has_measurement_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Imu::clear_has_measurement_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Imu::clear_measurement_time() {
  measurement_time_ = 0;
  clear_has_measurement_time();
}
inline double Imu::measurement_time() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.Imu.measurement_time)
  return measurement_time_;
}
inline void Imu::set_measurement_time(double value) {
  set_has_measurement_time();
  measurement_time_ = value;
  // @@protoc_insertion_point(field_set:gnss_driver.pb.Imu.measurement_time)
}

// optional float measurement_span = 3 [default = 0];
inline bool Imu::has_measurement_span() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Imu::set_has_measurement_span() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Imu::clear_has_measurement_span() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Imu::clear_measurement_span() {
  measurement_span_ = 0;
  clear_has_measurement_span();
}
inline float Imu::measurement_span() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.Imu.measurement_span)
  return measurement_span_;
}
inline void Imu::set_measurement_span(float value) {
  set_has_measurement_span();
  measurement_span_ = value;
  // @@protoc_insertion_point(field_set:gnss_driver.pb.Imu.measurement_span)
}

// optional .gnss_driver.pb.Point3D linear_acceleration = 4;
inline bool Imu::has_linear_acceleration() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Imu::set_has_linear_acceleration() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Imu::clear_has_linear_acceleration() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Imu::clear_linear_acceleration() {
  if (linear_acceleration_ != NULL) linear_acceleration_->::gnss_driver::pb::Point3D::Clear();
  clear_has_linear_acceleration();
}
inline const ::gnss_driver::pb::Point3D& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.Imu.linear_acceleration)
  return linear_acceleration_ != NULL ? *linear_acceleration_ : *default_instance_->linear_acceleration_;
}
inline ::gnss_driver::pb::Point3D* Imu::mutable_linear_acceleration() {
  set_has_linear_acceleration();
  if (linear_acceleration_ == NULL) linear_acceleration_ = new ::gnss_driver::pb::Point3D;
  // @@protoc_insertion_point(field_mutable:gnss_driver.pb.Imu.linear_acceleration)
  return linear_acceleration_;
}
inline ::gnss_driver::pb::Point3D* Imu::release_linear_acceleration() {
  clear_has_linear_acceleration();
  ::gnss_driver::pb::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = NULL;
  return temp;
}
inline void Imu::set_allocated_linear_acceleration(::gnss_driver::pb::Point3D* linear_acceleration) {
  delete linear_acceleration_;
  linear_acceleration_ = linear_acceleration;
  if (linear_acceleration) {
    set_has_linear_acceleration();
  } else {
    clear_has_linear_acceleration();
  }
  // @@protoc_insertion_point(field_set_allocated:gnss_driver.pb.Imu.linear_acceleration)
}

// optional .gnss_driver.pb.Point3D angular_velocity = 5;
inline bool Imu::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Imu::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Imu::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Imu::clear_angular_velocity() {
  if (angular_velocity_ != NULL) angular_velocity_->::gnss_driver::pb::Point3D::Clear();
  clear_has_angular_velocity();
}
inline const ::gnss_driver::pb::Point3D& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:gnss_driver.pb.Imu.angular_velocity)
  return angular_velocity_ != NULL ? *angular_velocity_ : *default_instance_->angular_velocity_;
}
inline ::gnss_driver::pb::Point3D* Imu::mutable_angular_velocity() {
  set_has_angular_velocity();
  if (angular_velocity_ == NULL) angular_velocity_ = new ::gnss_driver::pb::Point3D;
  // @@protoc_insertion_point(field_mutable:gnss_driver.pb.Imu.angular_velocity)
  return angular_velocity_;
}
inline ::gnss_driver::pb::Point3D* Imu::release_angular_velocity() {
  clear_has_angular_velocity();
  ::gnss_driver::pb::Point3D* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline void Imu::set_allocated_angular_velocity(::gnss_driver::pb::Point3D* angular_velocity) {
  delete angular_velocity_;
  angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    set_has_angular_velocity();
  } else {
    clear_has_angular_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:gnss_driver.pb.Imu.angular_velocity)
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

#endif  // PROTOBUF_imu_2eproto__INCLUDED
