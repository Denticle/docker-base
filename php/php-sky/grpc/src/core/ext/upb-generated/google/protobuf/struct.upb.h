/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_
#define GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct google_protobuf_Struct;
struct google_protobuf_Struct_FieldsEntry;
struct google_protobuf_Value;
struct google_protobuf_ListValue;
typedef struct google_protobuf_Struct google_protobuf_Struct;
typedef struct google_protobuf_Struct_FieldsEntry google_protobuf_Struct_FieldsEntry;
typedef struct google_protobuf_Value google_protobuf_Value;
typedef struct google_protobuf_ListValue google_protobuf_ListValue;
extern const upb_msglayout google_protobuf_Struct_msginit;
extern const upb_msglayout google_protobuf_Struct_FieldsEntry_msginit;
extern const upb_msglayout google_protobuf_Value_msginit;
extern const upb_msglayout google_protobuf_ListValue_msginit;

typedef enum {
  google_protobuf_NULL_VALUE = 0
} google_protobuf_NullValue;


/* google.protobuf.Struct */

UPB_INLINE google_protobuf_Struct *google_protobuf_Struct_new(upb_arena *arena) {
  return (google_protobuf_Struct *)_upb_msg_new(&google_protobuf_Struct_msginit, arena);
}
UPB_INLINE google_protobuf_Struct *google_protobuf_Struct_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_protobuf_Struct *ret = google_protobuf_Struct_new(arena);
  return (ret && upb_decode(buf, size, ret, &google_protobuf_Struct_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *google_protobuf_Struct_serialize(const google_protobuf_Struct *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_protobuf_Struct_msginit, arena, len);
}

UPB_INLINE bool google_protobuf_Struct_has_fields(const google_protobuf_Struct *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE size_t google_protobuf_Struct_fields_size(const google_protobuf_Struct *msg) {return _upb_msg_map_size(msg, UPB_SIZE(0, 0)); }
UPB_INLINE bool google_protobuf_Struct_fields_get(const google_protobuf_Struct *msg, upb_strview key, google_protobuf_Value* *val) { return _upb_msg_map_get(msg, UPB_SIZE(0, 0), &key, 0, val, sizeof(*val)); }
UPB_INLINE const google_protobuf_Struct_FieldsEntry* google_protobuf_Struct_fields_next(const google_protobuf_Struct *msg, size_t* iter) { return (const google_protobuf_Struct_FieldsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0), iter); }

UPB_INLINE void google_protobuf_Struct_fields_clear(google_protobuf_Struct *msg) { _upb_msg_map_clear(msg, UPB_SIZE(0, 0)); }
UPB_INLINE bool google_protobuf_Struct_fields_set(google_protobuf_Struct *msg, upb_strview key, google_protobuf_Value* val, upb_arena *a) { return _upb_msg_map_set(msg, UPB_SIZE(0, 0), &key, 0, &val, sizeof(val), a); }
UPB_INLINE bool google_protobuf_Struct_fields_delete(google_protobuf_Struct *msg, upb_strview key) { return _upb_msg_map_delete(msg, UPB_SIZE(0, 0), &key, 0); }
UPB_INLINE google_protobuf_Struct_FieldsEntry* google_protobuf_Struct_fields_nextmutable(google_protobuf_Struct *msg, size_t* iter) { return (google_protobuf_Struct_FieldsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0), iter); }

/* google.protobuf.Struct.FieldsEntry */

UPB_INLINE upb_strview google_protobuf_Struct_FieldsEntry_key(const google_protobuf_Struct_FieldsEntry *msg) {
  upb_strview ret;
  _upb_msg_map_key(msg, &ret, 0);
  return ret;
}
UPB_INLINE bool google_protobuf_Struct_FieldsEntry_has_value(const google_protobuf_Struct_FieldsEntry *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const google_protobuf_Value* google_protobuf_Struct_FieldsEntry_value(const google_protobuf_Struct_FieldsEntry *msg) {
  google_protobuf_Value* ret;
  _upb_msg_map_value(msg, &ret, sizeof(ret));
  return ret;
}

UPB_INLINE void google_protobuf_Struct_FieldsEntry_set_value(google_protobuf_Struct_FieldsEntry *msg, google_protobuf_Value* value) {
  _upb_msg_map_set_value(msg, &value, sizeof(google_protobuf_Value*));
}

/* google.protobuf.Value */

UPB_INLINE google_protobuf_Value *google_protobuf_Value_new(upb_arena *arena) {
  return (google_protobuf_Value *)_upb_msg_new(&google_protobuf_Value_msginit, arena);
}
UPB_INLINE google_protobuf_Value *google_protobuf_Value_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_protobuf_Value *ret = google_protobuf_Value_new(arena);
  return (ret && upb_decode(buf, size, ret, &google_protobuf_Value_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *google_protobuf_Value_serialize(const google_protobuf_Value *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_protobuf_Value_msginit, arena, len);
}

typedef enum {
  google_protobuf_Value_kind_null_value = 1,
  google_protobuf_Value_kind_number_value = 2,
  google_protobuf_Value_kind_string_value = 3,
  google_protobuf_Value_kind_bool_value = 4,
  google_protobuf_Value_kind_struct_value = 5,
  google_protobuf_Value_kind_list_value = 6,
  google_protobuf_Value_kind_NOT_SET = 0
} google_protobuf_Value_kind_oneofcases;
UPB_INLINE google_protobuf_Value_kind_oneofcases google_protobuf_Value_kind_case(const google_protobuf_Value* msg) { return (google_protobuf_Value_kind_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(8, 16), int32_t); }

UPB_INLINE bool google_protobuf_Value_has_null_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 1; }
UPB_INLINE int32_t google_protobuf_Value_null_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, int32_t, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 1, 0); }
UPB_INLINE bool google_protobuf_Value_has_number_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 2; }
UPB_INLINE double google_protobuf_Value_number_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, double, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 2, 0); }
UPB_INLINE bool google_protobuf_Value_has_string_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 3; }
UPB_INLINE upb_strview google_protobuf_Value_string_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 3, upb_strview_make("", strlen(""))); }
UPB_INLINE bool google_protobuf_Value_has_bool_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 4; }
UPB_INLINE bool google_protobuf_Value_bool_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, bool, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 4, false); }
UPB_INLINE bool google_protobuf_Value_has_struct_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 5; }
UPB_INLINE const google_protobuf_Struct* google_protobuf_Value_struct_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, const google_protobuf_Struct*, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 5, NULL); }
UPB_INLINE bool google_protobuf_Value_has_list_value(const google_protobuf_Value *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 6; }
UPB_INLINE const google_protobuf_ListValue* google_protobuf_Value_list_value(const google_protobuf_Value *msg) { return UPB_READ_ONEOF(msg, const google_protobuf_ListValue*, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 6, NULL); }

UPB_INLINE void google_protobuf_Value_set_null_value(google_protobuf_Value *msg, int32_t value) {
  UPB_WRITE_ONEOF(msg, int32_t, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 1);
}
UPB_INLINE void google_protobuf_Value_set_number_value(google_protobuf_Value *msg, double value) {
  UPB_WRITE_ONEOF(msg, double, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 2);
}
UPB_INLINE void google_protobuf_Value_set_string_value(google_protobuf_Value *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 3);
}
UPB_INLINE void google_protobuf_Value_set_bool_value(google_protobuf_Value *msg, bool value) {
  UPB_WRITE_ONEOF(msg, bool, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 4);
}
UPB_INLINE void google_protobuf_Value_set_struct_value(google_protobuf_Value *msg, google_protobuf_Struct* value) {
  UPB_WRITE_ONEOF(msg, google_protobuf_Struct*, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 5);
}
UPB_INLINE struct google_protobuf_Struct* google_protobuf_Value_mutable_struct_value(google_protobuf_Value *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)google_protobuf_Value_struct_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)_upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    google_protobuf_Value_set_struct_value(msg, sub);
  }
  return sub;
}
UPB_INLINE void google_protobuf_Value_set_list_value(google_protobuf_Value *msg, google_protobuf_ListValue* value) {
  UPB_WRITE_ONEOF(msg, google_protobuf_ListValue*, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 6);
}
UPB_INLINE struct google_protobuf_ListValue* google_protobuf_Value_mutable_list_value(google_protobuf_Value *msg, upb_arena *arena) {
  struct google_protobuf_ListValue* sub = (struct google_protobuf_ListValue*)google_protobuf_Value_list_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_ListValue*)_upb_msg_new(&google_protobuf_ListValue_msginit, arena);
    if (!sub) return NULL;
    google_protobuf_Value_set_list_value(msg, sub);
  }
  return sub;
}

/* google.protobuf.ListValue */

UPB_INLINE google_protobuf_ListValue *google_protobuf_ListValue_new(upb_arena *arena) {
  return (google_protobuf_ListValue *)_upb_msg_new(&google_protobuf_ListValue_msginit, arena);
}
UPB_INLINE google_protobuf_ListValue *google_protobuf_ListValue_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_protobuf_ListValue *ret = google_protobuf_ListValue_new(arena);
  return (ret && upb_decode(buf, size, ret, &google_protobuf_ListValue_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *google_protobuf_ListValue_serialize(const google_protobuf_ListValue *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_protobuf_ListValue_msginit, arena, len);
}

UPB_INLINE bool google_protobuf_ListValue_has_values(const google_protobuf_ListValue *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const google_protobuf_Value* const* google_protobuf_ListValue_values(const google_protobuf_ListValue *msg, size_t *len) { return (const google_protobuf_Value* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE google_protobuf_Value** google_protobuf_ListValue_mutable_values(google_protobuf_ListValue *msg, size_t *len) {
  return (google_protobuf_Value**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE google_protobuf_Value** google_protobuf_ListValue_resize_values(google_protobuf_ListValue *msg, size_t len, upb_arena *arena) {
  return (google_protobuf_Value**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct google_protobuf_Value* google_protobuf_ListValue_add_values(google_protobuf_ListValue *msg, upb_arena *arena) {
  struct google_protobuf_Value* sub = (struct google_protobuf_Value*)_upb_msg_new(&google_protobuf_Value_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* GOOGLE_PROTOBUF_STRUCT_PROTO_UPB_H_ */
