/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/extension.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/core/v3/extension.upbdefs.h"

extern upb_def_init envoy_config_core_v3_config_source_proto_upbdefinit;
extern upb_def_init google_protobuf_any_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_core_v3_TypedExtensionConfig_msginit;
extern const upb_msglayout envoy_config_core_v3_ExtensionConfigSource_msginit;

static const upb_msglayout *layouts[2] = {
  &envoy_config_core_v3_TypedExtensionConfig_msginit,
  &envoy_config_core_v3_ExtensionConfigSource_msginit,
};

static const char descriptor[666] = {'\n', '$', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'e', 'x', 
't', 'e', 'n', 's', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 
'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '\032', '(', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 
'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 
'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 
'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', 'v', '\n', '\024', 'T', 'y', 'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 
'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '\033', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', 
'\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\004', 'n', 'a', 'm', 'e', '\022', 'A', '\n', '\014', 't', 'y', 'p', 'e', 'd', '_', 'c', 'o', 
'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'b', 'u', 'f', '.', 'A', 'n', 'y', 'B', '\010', '\372', 'B', '\005', '\242', '\001', '\002', '\010', '\001', 'R', '\013', 't', 'y', 'p', 'e', 'd', 'C', 
'o', 'n', 'f', 'i', 'g', '\"', '\236', '\002', '\n', '\025', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 
'S', 'o', 'u', 'r', 'c', 'e', '\022', 'Q', '\n', '\r', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '\030', '\001', 
' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 
'v', '3', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\010', '\372', 'B', '\005', '\242', '\001', '\002', '\010', '\001', 
'R', '\014', 'c', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', '\022', ';', '\n', '\016', 'd', 'e', 'f', 'a', 'u', 'l', 't', 
'_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 
'o', 't', 'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'R', '\r', 'd', 'e', 'f', 'a', 'u', 'l', 't', 'C', 'o', 'n', 'f', 'i', 'g', 
'\022', 'N', '\n', '$', 'a', 'p', 'p', 'l', 'y', '_', 'd', 'e', 'f', 'a', 'u', 'l', 't', '_', 'c', 'o', 'n', 'f', 'i', 'g', '_', 
'w', 'i', 't', 'h', 'o', 'u', 't', '_', 'w', 'a', 'r', 'm', 'i', 'n', 'g', '\030', '\003', ' ', '\001', '(', '\010', 'R', ' ', 'a', 'p', 
'p', 'l', 'y', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'C', 'o', 'n', 'f', 'i', 'g', 'W', 'i', 't', 'h', 'o', 'u', 't', 'W', 'a', 
'r', 'm', 'i', 'n', 'g', '\022', '%', '\n', '\t', 't', 'y', 'p', 'e', '_', 'u', 'r', 'l', 's', '\030', '\004', ' ', '\003', '(', '\t', 'B', 
'\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\010', 't', 'y', 'p', 'e', 'U', 'r', 'l', 's', 'B', '>', '\n', '\"', 'i', 'o', 
'.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'c', 'o', 'r', 'e', '.', 'v', '3', 'B', '\016', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'P', 'r', 'o', 't', 'o', 'P', '\001', 
'\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_config_core_v3_config_source_proto_upbdefinit,
  &google_protobuf_any_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_core_v3_extension_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/core/v3/extension.proto",
  UPB_STRVIEW_INIT(descriptor, 666)
};
