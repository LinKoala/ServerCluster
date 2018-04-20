// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: World/Protocol/W2CM.CODE.proto

#include "World/Protocol/W2CM.CODE.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace Protocol {
namespace World {
namespace W2CM {
class MSG_W2CM_HeartbeatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MSG_W2CM_Heartbeat>
      _instance;
} _MSG_W2CM_Heartbeat_default_instance_;
class MSG_W2CM_RegisterDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MSG_W2CM_Register>
      _instance;
} _MSG_W2CM_Register_default_instance_;
}  // namespace W2CM
}  // namespace World
}  // namespace Protocol
namespace protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto {
void InitDefaultsMSG_W2CM_HeartbeatImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::Protocol::World::W2CM::_MSG_W2CM_Heartbeat_default_instance_;
    new (ptr) ::Protocol::World::W2CM::MSG_W2CM_Heartbeat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Protocol::World::W2CM::MSG_W2CM_Heartbeat::InitAsDefaultInstance();
}

void InitDefaultsMSG_W2CM_Heartbeat() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMSG_W2CM_HeartbeatImpl);
}

void InitDefaultsMSG_W2CM_RegisterImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::Protocol::World::W2CM::_MSG_W2CM_Register_default_instance_;
    new (ptr) ::Protocol::World::W2CM::MSG_W2CM_Register();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Protocol::World::W2CM::MSG_W2CM_Register::InitAsDefaultInstance();
}

void InitDefaultsMSG_W2CM_Register() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMSG_W2CM_RegisterImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Heartbeat, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Heartbeat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Heartbeat, groupid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Heartbeat, subid_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Register, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Register, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Register, groupid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Protocol::World::W2CM::MSG_W2CM_Register, subid_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::Protocol::World::W2CM::MSG_W2CM_Heartbeat)},
  { 9, 16, sizeof(::Protocol::World::W2CM::MSG_W2CM_Register)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Protocol::World::W2CM::_MSG_W2CM_Heartbeat_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::Protocol::World::W2CM::_MSG_W2CM_Register_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "World/Protocol/W2CM.CODE.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036World/Protocol/W2CM.CODE.proto\022\023Protoc"
      "ol.World.W2CM\"4\n\022MSG_W2CM_Heartbeat\022\017\n\007G"
      "roupId\030\001 \002(\005\022\r\n\005SubId\030\002 \002(\005\"3\n\021MSG_W2CM_"
      "Register\022\017\n\007GroupId\030\001 \002(\005\022\r\n\005SubId\030\002 \002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 160);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "World/Protocol/W2CM.CODE.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto
namespace Protocol {
namespace World {
namespace W2CM {

// ===================================================================

void MSG_W2CM_Heartbeat::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MSG_W2CM_Heartbeat::kGroupIdFieldNumber;
const int MSG_W2CM_Heartbeat::kSubIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MSG_W2CM_Heartbeat::MSG_W2CM_Heartbeat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_Heartbeat();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
}
MSG_W2CM_Heartbeat::MSG_W2CM_Heartbeat(const MSG_W2CM_Heartbeat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&groupid_, &from.groupid_,
    static_cast<size_t>(reinterpret_cast<char*>(&subid_) -
    reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
  // @@protoc_insertion_point(copy_constructor:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
}

void MSG_W2CM_Heartbeat::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&groupid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&subid_) -
      reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
}

MSG_W2CM_Heartbeat::~MSG_W2CM_Heartbeat() {
  // @@protoc_insertion_point(destructor:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  SharedDtor();
}

void MSG_W2CM_Heartbeat::SharedDtor() {
}

void MSG_W2CM_Heartbeat::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_W2CM_Heartbeat::descriptor() {
  ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MSG_W2CM_Heartbeat& MSG_W2CM_Heartbeat::default_instance() {
  ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_Heartbeat();
  return *internal_default_instance();
}

MSG_W2CM_Heartbeat* MSG_W2CM_Heartbeat::New(::google::protobuf::Arena* arena) const {
  MSG_W2CM_Heartbeat* n = new MSG_W2CM_Heartbeat;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MSG_W2CM_Heartbeat::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&groupid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&subid_) -
        reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MSG_W2CM_Heartbeat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 GroupId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_groupid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &groupid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 SubId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_subid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &subid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  return false;
#undef DO_
}

void MSG_W2CM_Heartbeat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 GroupId = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->groupid(), output);
  }

  // required int32 SubId = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->subid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
}

::google::protobuf::uint8* MSG_W2CM_Heartbeat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 GroupId = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->groupid(), target);
  }

  // required int32 SubId = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->subid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  return target;
}

size_t MSG_W2CM_Heartbeat::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  size_t total_size = 0;

  if (has_groupid()) {
    // required int32 GroupId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->groupid());
  }

  if (has_subid()) {
    // required int32 SubId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->subid());
  }

  return total_size;
}
size_t MSG_W2CM_Heartbeat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 GroupId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->groupid());

    // required int32 SubId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->subid());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MSG_W2CM_Heartbeat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  GOOGLE_DCHECK_NE(&from, this);
  const MSG_W2CM_Heartbeat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MSG_W2CM_Heartbeat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
    MergeFrom(*source);
  }
}

void MSG_W2CM_Heartbeat::MergeFrom(const MSG_W2CM_Heartbeat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      groupid_ = from.groupid_;
    }
    if (cached_has_bits & 0x00000002u) {
      subid_ = from.subid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MSG_W2CM_Heartbeat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_W2CM_Heartbeat::CopyFrom(const MSG_W2CM_Heartbeat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.World.W2CM.MSG_W2CM_Heartbeat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_W2CM_Heartbeat::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void MSG_W2CM_Heartbeat::Swap(MSG_W2CM_Heartbeat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MSG_W2CM_Heartbeat::InternalSwap(MSG_W2CM_Heartbeat* other) {
  using std::swap;
  swap(groupid_, other->groupid_);
  swap(subid_, other->subid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MSG_W2CM_Heartbeat::GetMetadata() const {
  protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void MSG_W2CM_Register::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MSG_W2CM_Register::kGroupIdFieldNumber;
const int MSG_W2CM_Register::kSubIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MSG_W2CM_Register::MSG_W2CM_Register()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_Register();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.World.W2CM.MSG_W2CM_Register)
}
MSG_W2CM_Register::MSG_W2CM_Register(const MSG_W2CM_Register& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&groupid_, &from.groupid_,
    static_cast<size_t>(reinterpret_cast<char*>(&subid_) -
    reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
  // @@protoc_insertion_point(copy_constructor:Protocol.World.W2CM.MSG_W2CM_Register)
}

void MSG_W2CM_Register::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&groupid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&subid_) -
      reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
}

MSG_W2CM_Register::~MSG_W2CM_Register() {
  // @@protoc_insertion_point(destructor:Protocol.World.W2CM.MSG_W2CM_Register)
  SharedDtor();
}

void MSG_W2CM_Register::SharedDtor() {
}

void MSG_W2CM_Register::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_W2CM_Register::descriptor() {
  ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MSG_W2CM_Register& MSG_W2CM_Register::default_instance() {
  ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::InitDefaultsMSG_W2CM_Register();
  return *internal_default_instance();
}

MSG_W2CM_Register* MSG_W2CM_Register::New(::google::protobuf::Arena* arena) const {
  MSG_W2CM_Register* n = new MSG_W2CM_Register;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MSG_W2CM_Register::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.World.W2CM.MSG_W2CM_Register)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&groupid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&subid_) -
        reinterpret_cast<char*>(&groupid_)) + sizeof(subid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MSG_W2CM_Register::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Protocol.World.W2CM.MSG_W2CM_Register)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 GroupId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_groupid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &groupid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 SubId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_subid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &subid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Protocol.World.W2CM.MSG_W2CM_Register)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Protocol.World.W2CM.MSG_W2CM_Register)
  return false;
#undef DO_
}

void MSG_W2CM_Register::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Protocol.World.W2CM.MSG_W2CM_Register)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 GroupId = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->groupid(), output);
  }

  // required int32 SubId = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->subid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Protocol.World.W2CM.MSG_W2CM_Register)
}

::google::protobuf::uint8* MSG_W2CM_Register::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.World.W2CM.MSG_W2CM_Register)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 GroupId = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->groupid(), target);
  }

  // required int32 SubId = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->subid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.World.W2CM.MSG_W2CM_Register)
  return target;
}

size_t MSG_W2CM_Register::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Protocol.World.W2CM.MSG_W2CM_Register)
  size_t total_size = 0;

  if (has_groupid()) {
    // required int32 GroupId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->groupid());
  }

  if (has_subid()) {
    // required int32 SubId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->subid());
  }

  return total_size;
}
size_t MSG_W2CM_Register::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.World.W2CM.MSG_W2CM_Register)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 GroupId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->groupid());

    // required int32 SubId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->subid());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MSG_W2CM_Register::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.World.W2CM.MSG_W2CM_Register)
  GOOGLE_DCHECK_NE(&from, this);
  const MSG_W2CM_Register* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MSG_W2CM_Register>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.World.W2CM.MSG_W2CM_Register)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.World.W2CM.MSG_W2CM_Register)
    MergeFrom(*source);
  }
}

void MSG_W2CM_Register::MergeFrom(const MSG_W2CM_Register& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.World.W2CM.MSG_W2CM_Register)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      groupid_ = from.groupid_;
    }
    if (cached_has_bits & 0x00000002u) {
      subid_ = from.subid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MSG_W2CM_Register::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.World.W2CM.MSG_W2CM_Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_W2CM_Register::CopyFrom(const MSG_W2CM_Register& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.World.W2CM.MSG_W2CM_Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_W2CM_Register::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void MSG_W2CM_Register::Swap(MSG_W2CM_Register* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MSG_W2CM_Register::InternalSwap(MSG_W2CM_Register* other) {
  using std::swap;
  swap(groupid_, other->groupid_);
  swap(subid_, other->subid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MSG_W2CM_Register::GetMetadata() const {
  protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_World_2fProtocol_2fW2CM_2eCODE_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace W2CM
}  // namespace World
}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
