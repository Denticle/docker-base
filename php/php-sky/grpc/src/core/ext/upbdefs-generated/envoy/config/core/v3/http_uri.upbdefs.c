/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/http_uri.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/core/v3/http_uri.upbdefs.h"

extern upb_def_init google_protobuf_duration_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_core_v3_HttpUri_msginit;

static const upb_msglayout *layouts[1] = {
  &envoy_config_core_v3_HttpUri_msginit,
};

static const char descriptor[454] = {'\n', '#', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'h', 't', 
't', 'p', '_', 'u', 'r', 'i', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 
'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 
'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 
'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\307', '\001', '\n', '\007', 'H', 't', 't', 'p', 'U', 'r', 'i', '\022', '\031', '\n', '\003', 'u', 'r', 
'i', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\003', 'u', 'r', 'i', '\022', '#', '\n', '\007', 
'c', 'l', 'u', 's', 't', 'e', 'r', '\030', '\002', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'H', '\000', 'R', 
'\007', 'c', 'l', 'u', 's', 't', 'e', 'r', '\022', '?', '\n', '\007', 't', 'i', 'm', 'e', 'o', 'u', 't', '\030', '\003', ' ', '\001', '(', '\013', 
'2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 
'o', 'n', 'B', '\n', '\372', 'B', '\007', '\252', '\001', '\004', '\010', '\001', '2', '\000', 'R', '\007', 't', 'i', 'm', 'e', 'o', 'u', 't', ':', ' ', 
'\232', '\305', '\210', '\036', '\033', '\n', '\031', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 
'H', 't', 't', 'p', 'U', 'r', 'i', 'B', '\031', '\n', '\022', 'h', 't', 't', 'p', '_', 'u', 'p', 's', 't', 'r', 'e', 'a', 'm', '_', 
't', 'y', 'p', 'e', '\022', '\003', '\370', 'B', '\001', 'B', '<', '\n', '\"', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 
'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', 'B', '\014', 'H', 
't', 't', 'p', 'U', 'r', 'i', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 
'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &google_protobuf_duration_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_core_v3_http_uri_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/core/v3/http_uri.proto",
  UPB_STRVIEW_INIT(descriptor, 454)
};
