// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: World/Protocol/W2CM.CODE.proto

#ifndef PROTOBUF_World_2fProtocol_2fW2CM_2eCODE_2eproto__INCLUDED
#define PROTOBUF_World_2fProtocol_2fW2CM_2eCODE_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMSG_W2CM_HeartbeatImpl();
void InitDefaultsMSG_W2CM_Heartbeat();
void InitDefaultsMSG_W2CM_RegisterImpl();
void InitDefaultsMSG_W2CM_Register();
inline void InitDefaults() {
  InitDefaultsMSG_W2CM_Heartbeat();
  InitDefaultsMSG_W2CM_Register();
}
}  // namespace protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto
namespace Protocol {
namespace World {
namespace W2CM {
class MSG_W2CM_Heartbeat;
class MSG_W2CM_HeartbeatDefaultTypeInternal;
extern MSG_W2CM_HeartbeatDefaultTypeInternal _MSG_W2CM_Heartbeat_default_instance_;
class MSG_W2CM_Register;
class MSG_W2CM_RegisterDefaultTypeInternal;
extern MSG_W2CM_RegisterDefaultTypeInternal _MSG_W2CM_Register_default_instance_;
}  // namespace W2CM
}  // namespace World
}  // namespace Protocol
namespace Protocol {
namespace World {
namespace W2CM {

// ===================================================================

class MSG_W2CM_Heartbeat : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Protocol.World.W2CM.MSG_W2CM_Heartbeat) */ {
 public:
  MSG_W2CM_Heartbeat();
  virtual ~MSG_W2CM_Heartbeat();

  MSG_W2CM_Heartbeat(const MSG_W2CM_Heartbeat& from);

  inline MSG_W2CM_Heartbeat& operator=(const MSG_W2CM_Heartbeat& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MSG_W2CM_Heartbeat(MSG_W2CM_Heartbeat&& from) noexcept
    : MSG_W2CM_Heartbeat() {
    *this = ::std::move(from);
  }

  inline MSG_W2CM_Heartbeat& operator=(MSG_W2CM_Heartbeat&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MSG_W2CM_Heartbeat& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MSG_W2CM_Heartbeat* internal_default_instance() {
    return reinterpret_cast<const MSG_W2CM_Heartbeat*>(
               &_MSG_W2CM_Heartbeat_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MSG_W2CM_Heartbeat* other);
  friend void swap(MSG_W2CM_Heartbeat& a, MSG_W2CM_Heartbeat& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MSG_W2CM_Heartbeat* New() const PROTOBUF_FINAL { return New(NULL); }

  MSG_W2CM_Heartbeat* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MSG_W2CM_Heartbeat& from);
  void MergeFrom(const MSG_W2CM_Heartbeat& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MSG_W2CM_Heartbeat* other);
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

  // required int32 GroupId = 1;
  bool has_groupid() const;
  void clear_groupid();
  static const int kGroupIdFieldNumber = 1;
  ::google::protobuf::int32 groupid() const;
  void set_groupid(::google::protobuf::int32 value);

  // required int32 SubId = 2;
  bool has_subid() const;
  void clear_subid();
  static const int kSubIdFieldNumber = 2;
  ::google::protobuf::int32 subid() const;
  void set_subid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
 private:
  void set_has_groupid();
  void clear_has_groupid();
  void set_has_subid();
  void clear_has_subid();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 groupid_;
  ::google::protobuf::int32 subid_;
  friend struct ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::TableStruct;
  friend void ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_HeartbeatImpl();
};
// -------------------------------------------------------------------

class MSG_W2CM_Register : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Protocol.World.W2CM.MSG_W2CM_Register) */ {
 public:
  MSG_W2CM_Register();
  virtual ~MSG_W2CM_Register();

  MSG_W2CM_Register(const MSG_W2CM_Register& from);

  inline MSG_W2CM_Register& operator=(const MSG_W2CM_Register& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MSG_W2CM_Register(MSG_W2CM_Register&& from) noexcept
    : MSG_W2CM_Register() {
    *this = ::std::move(from);
  }

  inline MSG_W2CM_Register& operator=(MSG_W2CM_Register&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MSG_W2CM_Register& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MSG_W2CM_Register* internal_default_instance() {
    return reinterpret_cast<const MSG_W2CM_Register*>(
               &_MSG_W2CM_Register_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(MSG_W2CM_Register* other);
  friend void swap(MSG_W2CM_Register& a, MSG_W2CM_Register& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MSG_W2CM_Register* New() const PROTOBUF_FINAL { return New(NULL); }

  MSG_W2CM_Register* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MSG_W2CM_Register& from);
  void MergeFrom(const MSG_W2CM_Register& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MSG_W2CM_Register* other);
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

  // required int32 GroupId = 1;
  bool has_groupid() const;
  void clear_groupid();
  static const int kGroupIdFieldNumber = 1;
  ::google::protobuf::int32 groupid() const;
  void set_groupid(::google::protobuf::int32 value);

  // required int32 SubId = 2;
  bool has_subid() const;
  void clear_subid();
  static const int kSubIdFieldNumber = 2;
  ::google::protobuf::int32 subid() const;
  void set_subid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.World.W2CM.MSG_W2CM_Register)
 private:
  void set_has_groupid();
  void clear_has_groupid();
  void set_has_subid();
  void clear_has_subid();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 groupid_;
  ::google::protobuf::int32 subid_;
  friend struct ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::TableStruct;
  friend void ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_RegisterImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MSG_W2CM_Heartbeat

// required int32 GroupId = 1;
inline bool MSG_W2CM_Heartbeat::has_groupid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_W2CM_Heartbeat::set_has_groupid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_W2CM_Heartbeat::clear_has_groupid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_W2CM_Heartbeat::clear_groupid() {
  groupid_ = 0;
  clear_has_groupid();
}
inline ::google::protobuf::int32 MSG_W2CM_Heartbeat::groupid() const {
  // @@protoc_insertion_point(field_get:Protocol.World.W2CM.MSG_W2CM_Heartbeat.GroupId)
  return groupid_;
}
inline void MSG_W2CM_Heartbeat::set_groupid(::google::protobuf::int32 value) {
  set_has_groupid();
  groupid_ = value;
  // @@protoc_insertion_point(field_set:Protocol.World.W2CM.MSG_W2CM_Heartbeat.GroupId)
}

// required int32 SubId = 2;
inline bool MSG_W2CM_Heartbeat::has_subid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_W2CM_Heartbeat::set_has_subid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_W2CM_Heartbeat::clear_has_subid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_W2CM_Heartbeat::clear_subid() {
  subid_ = 0;
  clear_has_subid();
}
inline ::google::protobuf::int32 MSG_W2CM_Heartbeat::subid() const {
  // @@protoc_insertion_point(field_get:Protocol.World.W2CM.MSG_W2CM_Heartbeat.SubId)
  return subid_;
}
inline void MSG_W2CM_Heartbeat::set_subid(::google::protobuf::int32 value) {
  set_has_subid();
  subid_ = value;
  // @@protoc_insertion_point(field_set:Protocol.World.W2CM.MSG_W2CM_Heartbeat.SubId)
}

// -------------------------------------------------------------------

// MSG_W2CM_Register

// required int32 GroupId = 1;
inline bool MSG_W2CM_Register::has_groupid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_W2CM_Register::set_has_groupid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_W2CM_Register::clear_has_groupid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_W2CM_Register::clear_groupid() {
  groupid_ = 0;
  clear_has_groupid();
}
inline ::google::protobuf::int32 MSG_W2CM_Register::groupid() const {
  // @@protoc_insertion_point(field_get:Protocol.World.W2CM.MSG_W2CM_Register.GroupId)
  return groupid_;
}
inline void MSG_W2CM_Register::set_groupid(::google::protobuf::int32 value) {
  set_has_groupid();
  groupid_ = value;
  // @@protoc_insertion_point(field_set:Protocol.World.W2CM.MSG_W2CM_Register.GroupId)
}

// required int32 SubId = 2;
inline bool MSG_W2CM_Register::has_subid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_W2CM_Register::set_has_subid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_W2CM_Register::clear_has_subid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_W2CM_Register::clear_subid() {
  subid_ = 0;
  clear_has_subid();
}
inline ::google::protobuf::int32 MSG_W2CM_Register::subid() const {
  // @@protoc_insertion_point(field_get:Protocol.World.W2CM.MSG_W2CM_Register.SubId)
  return subid_;
}
inline void MSG_W2CM_Register::set_subid(::google::protobuf::int32 value) {
  set_has_subid();
  subid_ = value;
  // @@protoc_insertion_point(field_set:Protocol.World.W2CM.MSG_W2CM_Register.SubId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace W2CM
}  // namespace World
}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_World_2fProtocol_2fW2CM_2eCODE_2eproto__INCLUDED
