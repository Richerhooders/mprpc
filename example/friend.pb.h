// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_friend_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_friend_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_friend_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_friend_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friend_2eproto;
namespace fixbug {
class GetFriendsListRequest;
struct GetFriendsListRequestDefaultTypeInternal;
extern GetFriendsListRequestDefaultTypeInternal _GetFriendsListRequest_default_instance_;
class GetFriendsListResponse;
struct GetFriendsListResponseDefaultTypeInternal;
extern GetFriendsListResponseDefaultTypeInternal _GetFriendsListResponse_default_instance_;
class Resultcode;
struct ResultcodeDefaultTypeInternal;
extern ResultcodeDefaultTypeInternal _Resultcode_default_instance_;
}  // namespace fixbug
PROTOBUF_NAMESPACE_OPEN
template<> ::fixbug::GetFriendsListRequest* Arena::CreateMaybeMessage<::fixbug::GetFriendsListRequest>(Arena*);
template<> ::fixbug::GetFriendsListResponse* Arena::CreateMaybeMessage<::fixbug::GetFriendsListResponse>(Arena*);
template<> ::fixbug::Resultcode* Arena::CreateMaybeMessage<::fixbug::Resultcode>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace fixbug {

// ===================================================================

class Resultcode final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.Resultcode) */ {
 public:
  inline Resultcode() : Resultcode(nullptr) {}
  ~Resultcode() override;
  explicit PROTOBUF_CONSTEXPR Resultcode(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Resultcode(const Resultcode& from);
  Resultcode(Resultcode&& from) noexcept
    : Resultcode() {
    *this = ::std::move(from);
  }

  inline Resultcode& operator=(const Resultcode& from) {
    CopyFrom(from);
    return *this;
  }
  inline Resultcode& operator=(Resultcode&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Resultcode& default_instance() {
    return *internal_default_instance();
  }
  static inline const Resultcode* internal_default_instance() {
    return reinterpret_cast<const Resultcode*>(
               &_Resultcode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Resultcode& a, Resultcode& b) {
    a.Swap(&b);
  }
  inline void Swap(Resultcode* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Resultcode* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Resultcode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Resultcode>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Resultcode& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Resultcode& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Resultcode* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.Resultcode";
  }
  protected:
  explicit Resultcode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrmsgFieldNumber = 2,
    kErrcodeFieldNumber = 1,
  };
  // bytes errmsg = 2;
  void clear_errmsg();
  const std::string& errmsg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_errmsg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_errmsg();
  PROTOBUF_NODISCARD std::string* release_errmsg();
  void set_allocated_errmsg(std::string* errmsg);
  private:
  const std::string& _internal_errmsg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_errmsg(const std::string& value);
  std::string* _internal_mutable_errmsg();
  public:

  // int32 errcode = 1;
  void clear_errcode();
  int32_t errcode() const;
  void set_errcode(int32_t value);
  private:
  int32_t _internal_errcode() const;
  void _internal_set_errcode(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.Resultcode)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errmsg_;
  int32_t errcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendsListRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendsListRequest) */ {
 public:
  inline GetFriendsListRequest() : GetFriendsListRequest(nullptr) {}
  ~GetFriendsListRequest() override;
  explicit PROTOBUF_CONSTEXPR GetFriendsListRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetFriendsListRequest(const GetFriendsListRequest& from);
  GetFriendsListRequest(GetFriendsListRequest&& from) noexcept
    : GetFriendsListRequest() {
    *this = ::std::move(from);
  }

  inline GetFriendsListRequest& operator=(const GetFriendsListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendsListRequest& operator=(GetFriendsListRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetFriendsListRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetFriendsListRequest* internal_default_instance() {
    return reinterpret_cast<const GetFriendsListRequest*>(
               &_GetFriendsListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetFriendsListRequest& a, GetFriendsListRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendsListRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetFriendsListRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetFriendsListRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetFriendsListRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetFriendsListRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GetFriendsListRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendsListRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendsListRequest";
  }
  protected:
  explicit GetFriendsListRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUseridFieldNumber = 1,
  };
  // uint32 userid = 1;
  void clear_userid();
  uint32_t userid() const;
  void set_userid(uint32_t value);
  private:
  uint32_t _internal_userid() const;
  void _internal_set_userid(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendsListRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  uint32_t userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendsListResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendsListResponse) */ {
 public:
  inline GetFriendsListResponse() : GetFriendsListResponse(nullptr) {}
  ~GetFriendsListResponse() override;
  explicit PROTOBUF_CONSTEXPR GetFriendsListResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetFriendsListResponse(const GetFriendsListResponse& from);
  GetFriendsListResponse(GetFriendsListResponse&& from) noexcept
    : GetFriendsListResponse() {
    *this = ::std::move(from);
  }

  inline GetFriendsListResponse& operator=(const GetFriendsListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendsListResponse& operator=(GetFriendsListResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetFriendsListResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetFriendsListResponse* internal_default_instance() {
    return reinterpret_cast<const GetFriendsListResponse*>(
               &_GetFriendsListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GetFriendsListResponse& a, GetFriendsListResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendsListResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetFriendsListResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetFriendsListResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetFriendsListResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetFriendsListResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GetFriendsListResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendsListResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendsListResponse";
  }
  protected:
  explicit GetFriendsListResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFriendsFieldNumber = 2,
    kResultFieldNumber = 1,
  };
  // repeated bytes friends = 2;
  int friends_size() const;
  private:
  int _internal_friends_size() const;
  public:
  void clear_friends();
  const std::string& friends(int index) const;
  std::string* mutable_friends(int index);
  void set_friends(int index, const std::string& value);
  void set_friends(int index, std::string&& value);
  void set_friends(int index, const char* value);
  void set_friends(int index, const void* value, size_t size);
  std::string* add_friends();
  void add_friends(const std::string& value);
  void add_friends(std::string&& value);
  void add_friends(const char* value);
  void add_friends(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& friends() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_friends();
  private:
  const std::string& _internal_friends(int index) const;
  std::string* _internal_add_friends();
  public:

  // .fixbug.Resultcode result = 1;
  bool has_result() const;
  private:
  bool _internal_has_result() const;
  public:
  void clear_result();
  const ::fixbug::Resultcode& result() const;
  PROTOBUF_NODISCARD ::fixbug::Resultcode* release_result();
  ::fixbug::Resultcode* mutable_result();
  void set_allocated_result(::fixbug::Resultcode* result);
  private:
  const ::fixbug::Resultcode& _internal_result() const;
  ::fixbug::Resultcode* _internal_mutable_result();
  public:
  void unsafe_arena_set_allocated_result(
      ::fixbug::Resultcode* result);
  ::fixbug::Resultcode* unsafe_arena_release_result();

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendsListResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> friends_;
  ::fixbug::Resultcode* result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// ===================================================================

class FriendServiceRpc_Stub;

class FriendServiceRpc : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline FriendServiceRpc() {};
 public:
  virtual ~FriendServiceRpc();

  typedef FriendServiceRpc_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void GetFriendsList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendsListRequest* request,
                       ::fixbug::GetFriendsListResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc);
};

class FriendServiceRpc_Stub : public FriendServiceRpc {
 public:
  FriendServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  FriendServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~FriendServiceRpc_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements FriendServiceRpc ------------------------------------------

  void GetFriendsList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendsListRequest* request,
                       ::fixbug::GetFriendsListResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Resultcode

// int32 errcode = 1;
inline void Resultcode::clear_errcode() {
  errcode_ = 0;
}
inline int32_t Resultcode::_internal_errcode() const {
  return errcode_;
}
inline int32_t Resultcode::errcode() const {
  // @@protoc_insertion_point(field_get:fixbug.Resultcode.errcode)
  return _internal_errcode();
}
inline void Resultcode::_internal_set_errcode(int32_t value) {
  
  errcode_ = value;
}
inline void Resultcode::set_errcode(int32_t value) {
  _internal_set_errcode(value);
  // @@protoc_insertion_point(field_set:fixbug.Resultcode.errcode)
}

// bytes errmsg = 2;
inline void Resultcode::clear_errmsg() {
  errmsg_.ClearToEmpty();
}
inline const std::string& Resultcode::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.Resultcode.errmsg)
  return _internal_errmsg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Resultcode::set_errmsg(ArgT0&& arg0, ArgT... args) {
 
 errmsg_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:fixbug.Resultcode.errmsg)
}
inline std::string* Resultcode::mutable_errmsg() {
  std::string* _s = _internal_mutable_errmsg();
  // @@protoc_insertion_point(field_mutable:fixbug.Resultcode.errmsg)
  return _s;
}
inline const std::string& Resultcode::_internal_errmsg() const {
  return errmsg_.Get();
}
inline void Resultcode::_internal_set_errmsg(const std::string& value) {
  
  errmsg_.Set(value, GetArenaForAllocation());
}
inline std::string* Resultcode::_internal_mutable_errmsg() {
  
  return errmsg_.Mutable(GetArenaForAllocation());
}
inline std::string* Resultcode::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.Resultcode.errmsg)
  return errmsg_.Release();
}
inline void Resultcode::set_allocated_errmsg(std::string* errmsg) {
  if (errmsg != nullptr) {
    
  } else {
    
  }
  errmsg_.SetAllocated(errmsg, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (errmsg_.IsDefault()) {
    errmsg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:fixbug.Resultcode.errmsg)
}

// -------------------------------------------------------------------

// GetFriendsListRequest

// uint32 userid = 1;
inline void GetFriendsListRequest::clear_userid() {
  userid_ = 0u;
}
inline uint32_t GetFriendsListRequest::_internal_userid() const {
  return userid_;
}
inline uint32_t GetFriendsListRequest::userid() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListRequest.userid)
  return _internal_userid();
}
inline void GetFriendsListRequest::_internal_set_userid(uint32_t value) {
  
  userid_ = value;
}
inline void GetFriendsListRequest::set_userid(uint32_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListRequest.userid)
}

// -------------------------------------------------------------------

// GetFriendsListResponse

// .fixbug.Resultcode result = 1;
inline bool GetFriendsListResponse::_internal_has_result() const {
  return this != internal_default_instance() && result_ != nullptr;
}
inline bool GetFriendsListResponse::has_result() const {
  return _internal_has_result();
}
inline void GetFriendsListResponse::clear_result() {
  if (GetArenaForAllocation() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
}
inline const ::fixbug::Resultcode& GetFriendsListResponse::_internal_result() const {
  const ::fixbug::Resultcode* p = result_;
  return p != nullptr ? *p : reinterpret_cast<const ::fixbug::Resultcode&>(
      ::fixbug::_Resultcode_default_instance_);
}
inline const ::fixbug::Resultcode& GetFriendsListResponse::result() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.result)
  return _internal_result();
}
inline void GetFriendsListResponse::unsafe_arena_set_allocated_result(
    ::fixbug::Resultcode* result) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(result_);
  }
  result_ = result;
  if (result) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:fixbug.GetFriendsListResponse.result)
}
inline ::fixbug::Resultcode* GetFriendsListResponse::release_result() {
  
  ::fixbug::Resultcode* temp = result_;
  result_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::fixbug::Resultcode* GetFriendsListResponse::unsafe_arena_release_result() {
  // @@protoc_insertion_point(field_release:fixbug.GetFriendsListResponse.result)
  
  ::fixbug::Resultcode* temp = result_;
  result_ = nullptr;
  return temp;
}
inline ::fixbug::Resultcode* GetFriendsListResponse::_internal_mutable_result() {
  
  if (result_ == nullptr) {
    auto* p = CreateMaybeMessage<::fixbug::Resultcode>(GetArenaForAllocation());
    result_ = p;
  }
  return result_;
}
inline ::fixbug::Resultcode* GetFriendsListResponse::mutable_result() {
  ::fixbug::Resultcode* _msg = _internal_mutable_result();
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.result)
  return _msg;
}
inline void GetFriendsListResponse::set_allocated_result(::fixbug::Resultcode* result) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete result_;
  }
  if (result) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(result);
    if (message_arena != submessage_arena) {
      result = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, result, submessage_arena);
    }
    
  } else {
    
  }
  result_ = result;
  // @@protoc_insertion_point(field_set_allocated:fixbug.GetFriendsListResponse.result)
}

// repeated bytes friends = 2;
inline int GetFriendsListResponse::_internal_friends_size() const {
  return friends_.size();
}
inline int GetFriendsListResponse::friends_size() const {
  return _internal_friends_size();
}
inline void GetFriendsListResponse::clear_friends() {
  friends_.Clear();
}
inline std::string* GetFriendsListResponse::add_friends() {
  std::string* _s = _internal_add_friends();
  // @@protoc_insertion_point(field_add_mutable:fixbug.GetFriendsListResponse.friends)
  return _s;
}
inline const std::string& GetFriendsListResponse::_internal_friends(int index) const {
  return friends_.Get(index);
}
inline const std::string& GetFriendsListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.friends)
  return _internal_friends(index);
}
inline std::string* GetFriendsListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.friends)
  return friends_.Mutable(index);
}
inline void GetFriendsListResponse::set_friends(int index, const std::string& value) {
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::set_friends(int index, std::string&& value) {
  friends_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::set_friends(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::set_friends(int index, const void* value, size_t size) {
  friends_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fixbug.GetFriendsListResponse.friends)
}
inline std::string* GetFriendsListResponse::_internal_add_friends() {
  return friends_.Add();
}
inline void GetFriendsListResponse::add_friends(const std::string& value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::add_friends(std::string&& value) {
  friends_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::add_friends(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fixbug.GetFriendsListResponse.friends)
}
inline void GetFriendsListResponse::add_friends(const void* value, size_t size) {
  friends_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fixbug.GetFriendsListResponse.friends)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
GetFriendsListResponse::friends() const {
  // @@protoc_insertion_point(field_list:fixbug.GetFriendsListResponse.friends)
  return friends_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
GetFriendsListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:fixbug.GetFriendsListResponse.friends)
  return &friends_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_friend_2eproto
