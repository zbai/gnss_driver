// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ins.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ins.pb.h"

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

namespace gnss_driver {
namespace pb {

namespace {

const ::google::protobuf::Descriptor* Ins_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Ins_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Ins_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_ins_2eproto() {
  protobuf_AddDesc_ins_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ins.proto");
  GOOGLE_CHECK(file != NULL);
  Ins_descriptor_ = file->message_type(0);
  static const int Ins_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, measurement_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, euler_angles_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, linear_velocity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, angular_velocity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, linear_acceleration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, position_covariance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, euler_angles_covariance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, linear_velocity_covariance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, angular_velocity_covariance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, linear_acceleration_covariance_),
  };
  Ins_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Ins_descriptor_,
      Ins::default_instance_,
      Ins_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ins, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Ins));
  Ins_Type_descriptor_ = Ins_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ins_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Ins_descriptor_, &Ins::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ins_2eproto() {
  delete Ins::default_instance_;
  delete Ins_reflection_;
}

void protobuf_AddDesc_ins_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gnss_driver::pb::protobuf_AddDesc_header_2eproto();
  ::gnss_driver::pb::protobuf_AddDesc_geometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tins.proto\022\016gnss_driver.pb\032\014header.prot"
    "o\032\016geometry.proto\"\327\004\n\003Ins\022&\n\006header\030\001 \001("
    "\0132\026.gnss_driver.pb.Header\022\030\n\020measurement"
    "_time\030\002 \001(\001\022&\n\004type\030\003 \001(\0162\030.gnss_driver."
    "pb.Ins.Type\022*\n\010position\030\004 \001(\0132\030.gnss_dri"
    "ver.pb.PointLLH\022-\n\014euler_angles\030\005 \001(\0132\027."
    "gnss_driver.pb.Point3D\0220\n\017linear_velocit"
    "y\030\006 \001(\0132\027.gnss_driver.pb.Point3D\0221\n\020angu"
    "lar_velocity\030\007 \001(\0132\027.gnss_driver.pb.Poin"
    "t3D\0224\n\023linear_acceleration\030\010 \001(\0132\027.gnss_"
    "driver.pb.Point3D\022\037\n\023position_covariance"
    "\030\t \003(\002B\002\020\001\022#\n\027euler_angles_covariance\030\n "
    "\003(\002B\002\020\001\022&\n\032linear_velocity_covariance\030\013 "
    "\003(\002B\002\020\001\022\'\n\033angular_velocity_covariance\030\014"
    " \003(\002B\002\020\001\022*\n\036linear_acceleration_covarian"
    "ce\030\r \003(\002B\002\020\001\"-\n\004Type\022\013\n\007INVALID\020\000\022\016\n\nCON"
    "VERGING\020\001\022\010\n\004GOOD\020\002", 659);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ins.proto", &protobuf_RegisterTypes);
  Ins::default_instance_ = new Ins();
  Ins::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ins_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ins_2eproto {
  StaticDescriptorInitializer_ins_2eproto() {
    protobuf_AddDesc_ins_2eproto();
  }
} static_descriptor_initializer_ins_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Ins_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ins_Type_descriptor_;
}
bool Ins_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Ins_Type Ins::INVALID;
const Ins_Type Ins::CONVERGING;
const Ins_Type Ins::GOOD;
const Ins_Type Ins::Type_MIN;
const Ins_Type Ins::Type_MAX;
const int Ins::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Ins::kHeaderFieldNumber;
const int Ins::kMeasurementTimeFieldNumber;
const int Ins::kTypeFieldNumber;
const int Ins::kPositionFieldNumber;
const int Ins::kEulerAnglesFieldNumber;
const int Ins::kLinearVelocityFieldNumber;
const int Ins::kAngularVelocityFieldNumber;
const int Ins::kLinearAccelerationFieldNumber;
const int Ins::kPositionCovarianceFieldNumber;
const int Ins::kEulerAnglesCovarianceFieldNumber;
const int Ins::kLinearVelocityCovarianceFieldNumber;
const int Ins::kAngularVelocityCovarianceFieldNumber;
const int Ins::kLinearAccelerationCovarianceFieldNumber;
#endif  // !_MSC_VER

Ins::Ins()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gnss_driver.pb.Ins)
}

void Ins::InitAsDefaultInstance() {
  header_ = const_cast< ::gnss_driver::pb::Header*>(&::gnss_driver::pb::Header::default_instance());
  position_ = const_cast< ::gnss_driver::pb::PointLLH*>(&::gnss_driver::pb::PointLLH::default_instance());
  euler_angles_ = const_cast< ::gnss_driver::pb::Point3D*>(&::gnss_driver::pb::Point3D::default_instance());
  linear_velocity_ = const_cast< ::gnss_driver::pb::Point3D*>(&::gnss_driver::pb::Point3D::default_instance());
  angular_velocity_ = const_cast< ::gnss_driver::pb::Point3D*>(&::gnss_driver::pb::Point3D::default_instance());
  linear_acceleration_ = const_cast< ::gnss_driver::pb::Point3D*>(&::gnss_driver::pb::Point3D::default_instance());
}

Ins::Ins(const Ins& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gnss_driver.pb.Ins)
}

void Ins::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  measurement_time_ = 0;
  type_ = 0;
  position_ = NULL;
  euler_angles_ = NULL;
  linear_velocity_ = NULL;
  angular_velocity_ = NULL;
  linear_acceleration_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Ins::~Ins() {
  // @@protoc_insertion_point(destructor:gnss_driver.pb.Ins)
  SharedDtor();
}

void Ins::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
    delete position_;
    delete euler_angles_;
    delete linear_velocity_;
    delete angular_velocity_;
    delete linear_acceleration_;
  }
}

void Ins::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Ins::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ins_descriptor_;
}

const Ins& Ins::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ins_2eproto();
  return *default_instance_;
}

Ins* Ins::default_instance_ = NULL;

Ins* Ins::New() const {
  return new Ins;
}

void Ins::Clear() {
  if (_has_bits_[0 / 32] & 255) {
    if (has_header()) {
      if (header_ != NULL) header_->::gnss_driver::pb::Header::Clear();
    }
    measurement_time_ = 0;
    type_ = 0;
    if (has_position()) {
      if (position_ != NULL) position_->::gnss_driver::pb::PointLLH::Clear();
    }
    if (has_euler_angles()) {
      if (euler_angles_ != NULL) euler_angles_->::gnss_driver::pb::Point3D::Clear();
    }
    if (has_linear_velocity()) {
      if (linear_velocity_ != NULL) linear_velocity_->::gnss_driver::pb::Point3D::Clear();
    }
    if (has_angular_velocity()) {
      if (angular_velocity_ != NULL) angular_velocity_->::gnss_driver::pb::Point3D::Clear();
    }
    if (has_linear_acceleration()) {
      if (linear_acceleration_ != NULL) linear_acceleration_->::gnss_driver::pb::Point3D::Clear();
    }
  }
  position_covariance_.Clear();
  euler_angles_covariance_.Clear();
  linear_velocity_covariance_.Clear();
  angular_velocity_covariance_.Clear();
  linear_acceleration_covariance_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Ins::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gnss_driver.pb.Ins)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .gnss_driver.pb.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_measurement_time;
        break;
      }

      // optional double measurement_time = 2;
      case 2: {
        if (tag == 17) {
         parse_measurement_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &measurement_time_)));
          set_has_measurement_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional .gnss_driver.pb.Ins.Type type = 3;
      case 3: {
        if (tag == 24) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::gnss_driver::pb::Ins_Type_IsValid(value)) {
            set_type(static_cast< ::gnss_driver::pb::Ins_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_position;
        break;
      }

      // optional .gnss_driver.pb.PointLLH position = 4;
      case 4: {
        if (tag == 34) {
         parse_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_euler_angles;
        break;
      }

      // optional .gnss_driver.pb.Point3D euler_angles = 5;
      case 5: {
        if (tag == 42) {
         parse_euler_angles:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_euler_angles()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_linear_velocity;
        break;
      }

      // optional .gnss_driver.pb.Point3D linear_velocity = 6;
      case 6: {
        if (tag == 50) {
         parse_linear_velocity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_linear_velocity()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_angular_velocity;
        break;
      }

      // optional .gnss_driver.pb.Point3D angular_velocity = 7;
      case 7: {
        if (tag == 58) {
         parse_angular_velocity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_angular_velocity()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_linear_acceleration;
        break;
      }

      // optional .gnss_driver.pb.Point3D linear_acceleration = 8;
      case 8: {
        if (tag == 66) {
         parse_linear_acceleration:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_linear_acceleration()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_position_covariance;
        break;
      }

      // repeated float position_covariance = 9 [packed = true];
      case 9: {
        if (tag == 74) {
         parse_position_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_position_covariance())));
        } else if (tag == 77) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 74, input, this->mutable_position_covariance())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_euler_angles_covariance;
        break;
      }

      // repeated float euler_angles_covariance = 10 [packed = true];
      case 10: {
        if (tag == 82) {
         parse_euler_angles_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_euler_angles_covariance())));
        } else if (tag == 85) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 82, input, this->mutable_euler_angles_covariance())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_linear_velocity_covariance;
        break;
      }

      // repeated float linear_velocity_covariance = 11 [packed = true];
      case 11: {
        if (tag == 90) {
         parse_linear_velocity_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_linear_velocity_covariance())));
        } else if (tag == 93) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 90, input, this->mutable_linear_velocity_covariance())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(98)) goto parse_angular_velocity_covariance;
        break;
      }

      // repeated float angular_velocity_covariance = 12 [packed = true];
      case 12: {
        if (tag == 98) {
         parse_angular_velocity_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_angular_velocity_covariance())));
        } else if (tag == 101) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 98, input, this->mutable_angular_velocity_covariance())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(106)) goto parse_linear_acceleration_covariance;
        break;
      }

      // repeated float linear_acceleration_covariance = 13 [packed = true];
      case 13: {
        if (tag == 106) {
         parse_linear_acceleration_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_linear_acceleration_covariance())));
        } else if (tag == 109) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 106, input, this->mutable_linear_acceleration_covariance())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gnss_driver.pb.Ins)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gnss_driver.pb.Ins)
  return false;
#undef DO_
}

void Ins::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gnss_driver.pb.Ins)
  // optional .gnss_driver.pb.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->header(), output);
  }

  // optional double measurement_time = 2;
  if (has_measurement_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->measurement_time(), output);
  }

  // optional .gnss_driver.pb.Ins.Type type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // optional .gnss_driver.pb.PointLLH position = 4;
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->position(), output);
  }

  // optional .gnss_driver.pb.Point3D euler_angles = 5;
  if (has_euler_angles()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->euler_angles(), output);
  }

  // optional .gnss_driver.pb.Point3D linear_velocity = 6;
  if (has_linear_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->linear_velocity(), output);
  }

  // optional .gnss_driver.pb.Point3D angular_velocity = 7;
  if (has_angular_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->angular_velocity(), output);
  }

  // optional .gnss_driver.pb.Point3D linear_acceleration = 8;
  if (has_linear_acceleration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->linear_acceleration(), output);
  }

  // repeated float position_covariance = 9 [packed = true];
  if (this->position_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(9, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_position_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->position_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->position_covariance(i), output);
  }

  // repeated float euler_angles_covariance = 10 [packed = true];
  if (this->euler_angles_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(10, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_euler_angles_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->euler_angles_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->euler_angles_covariance(i), output);
  }

  // repeated float linear_velocity_covariance = 11 [packed = true];
  if (this->linear_velocity_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_linear_velocity_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->linear_velocity_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->linear_velocity_covariance(i), output);
  }

  // repeated float angular_velocity_covariance = 12 [packed = true];
  if (this->angular_velocity_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(12, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_angular_velocity_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->angular_velocity_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->angular_velocity_covariance(i), output);
  }

  // repeated float linear_acceleration_covariance = 13 [packed = true];
  if (this->linear_acceleration_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(13, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_linear_acceleration_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->linear_acceleration_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->linear_acceleration_covariance(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gnss_driver.pb.Ins)
}

::google::protobuf::uint8* Ins::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gnss_driver.pb.Ins)
  // optional .gnss_driver.pb.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->header(), target);
  }

  // optional double measurement_time = 2;
  if (has_measurement_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->measurement_time(), target);
  }

  // optional .gnss_driver.pb.Ins.Type type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->type(), target);
  }

  // optional .gnss_driver.pb.PointLLH position = 4;
  if (has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->position(), target);
  }

  // optional .gnss_driver.pb.Point3D euler_angles = 5;
  if (has_euler_angles()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->euler_angles(), target);
  }

  // optional .gnss_driver.pb.Point3D linear_velocity = 6;
  if (has_linear_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->linear_velocity(), target);
  }

  // optional .gnss_driver.pb.Point3D angular_velocity = 7;
  if (has_angular_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->angular_velocity(), target);
  }

  // optional .gnss_driver.pb.Point3D linear_acceleration = 8;
  if (has_linear_acceleration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->linear_acceleration(), target);
  }

  // repeated float position_covariance = 9 [packed = true];
  if (this->position_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      9,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _position_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->position_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->position_covariance(i), target);
  }

  // repeated float euler_angles_covariance = 10 [packed = true];
  if (this->euler_angles_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      10,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _euler_angles_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->euler_angles_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->euler_angles_covariance(i), target);
  }

  // repeated float linear_velocity_covariance = 11 [packed = true];
  if (this->linear_velocity_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _linear_velocity_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->linear_velocity_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->linear_velocity_covariance(i), target);
  }

  // repeated float angular_velocity_covariance = 12 [packed = true];
  if (this->angular_velocity_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      12,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _angular_velocity_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->angular_velocity_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->angular_velocity_covariance(i), target);
  }

  // repeated float linear_acceleration_covariance = 13 [packed = true];
  if (this->linear_acceleration_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      13,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _linear_acceleration_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->linear_acceleration_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->linear_acceleration_covariance(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gnss_driver.pb.Ins)
  return target;
}

int Ins::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .gnss_driver.pb.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->header());
    }

    // optional double measurement_time = 2;
    if (has_measurement_time()) {
      total_size += 1 + 8;
    }

    // optional .gnss_driver.pb.Ins.Type type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .gnss_driver.pb.PointLLH position = 4;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->position());
    }

    // optional .gnss_driver.pb.Point3D euler_angles = 5;
    if (has_euler_angles()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->euler_angles());
    }

    // optional .gnss_driver.pb.Point3D linear_velocity = 6;
    if (has_linear_velocity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->linear_velocity());
    }

    // optional .gnss_driver.pb.Point3D angular_velocity = 7;
    if (has_angular_velocity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->angular_velocity());
    }

    // optional .gnss_driver.pb.Point3D linear_acceleration = 8;
    if (has_linear_acceleration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->linear_acceleration());
    }

  }
  // repeated float position_covariance = 9 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->position_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _position_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float euler_angles_covariance = 10 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->euler_angles_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _euler_angles_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float linear_velocity_covariance = 11 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->linear_velocity_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _linear_velocity_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float angular_velocity_covariance = 12 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->angular_velocity_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _angular_velocity_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float linear_acceleration_covariance = 13 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->linear_acceleration_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _linear_acceleration_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
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

void Ins::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Ins* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Ins*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Ins::MergeFrom(const Ins& from) {
  GOOGLE_CHECK_NE(&from, this);
  position_covariance_.MergeFrom(from.position_covariance_);
  euler_angles_covariance_.MergeFrom(from.euler_angles_covariance_);
  linear_velocity_covariance_.MergeFrom(from.linear_velocity_covariance_);
  angular_velocity_covariance_.MergeFrom(from.angular_velocity_covariance_);
  linear_acceleration_covariance_.MergeFrom(from.linear_acceleration_covariance_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::gnss_driver::pb::Header::MergeFrom(from.header());
    }
    if (from.has_measurement_time()) {
      set_measurement_time(from.measurement_time());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_position()) {
      mutable_position()->::gnss_driver::pb::PointLLH::MergeFrom(from.position());
    }
    if (from.has_euler_angles()) {
      mutable_euler_angles()->::gnss_driver::pb::Point3D::MergeFrom(from.euler_angles());
    }
    if (from.has_linear_velocity()) {
      mutable_linear_velocity()->::gnss_driver::pb::Point3D::MergeFrom(from.linear_velocity());
    }
    if (from.has_angular_velocity()) {
      mutable_angular_velocity()->::gnss_driver::pb::Point3D::MergeFrom(from.angular_velocity());
    }
    if (from.has_linear_acceleration()) {
      mutable_linear_acceleration()->::gnss_driver::pb::Point3D::MergeFrom(from.linear_acceleration());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Ins::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ins::CopyFrom(const Ins& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ins::IsInitialized() const {

  return true;
}

void Ins::Swap(Ins* other) {
  if (other != this) {
    std::swap(header_, other->header_);
    std::swap(measurement_time_, other->measurement_time_);
    std::swap(type_, other->type_);
    std::swap(position_, other->position_);
    std::swap(euler_angles_, other->euler_angles_);
    std::swap(linear_velocity_, other->linear_velocity_);
    std::swap(angular_velocity_, other->angular_velocity_);
    std::swap(linear_acceleration_, other->linear_acceleration_);
    position_covariance_.Swap(&other->position_covariance_);
    euler_angles_covariance_.Swap(&other->euler_angles_covariance_);
    linear_velocity_covariance_.Swap(&other->linear_velocity_covariance_);
    angular_velocity_covariance_.Swap(&other->angular_velocity_covariance_);
    linear_acceleration_covariance_.Swap(&other->linear_acceleration_covariance_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Ins::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Ins_descriptor_;
  metadata.reflection = Ins_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace gnss_driver

// @@protoc_insertion_point(global_scope)
