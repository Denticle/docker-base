/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/matcher/v3/metadata.upbdefs.h"

extern upb_def_init envoy_type_matcher_v3_value_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_type_matcher_v3_MetadataMatcher_msginit;
extern const upb_msglayout envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit;

static const upb_msglayout *layouts[2] = {
  &envoy_type_matcher_v3_MetadataMatcher_msginit,
  &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit,
};

static const char descriptor[621] = {'\n', '$', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', '3', '/', 'm', 
'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', 
'.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', '3', '\032', '!', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 
'a', 't', 'c', 'h', 'e', 'r', '/', 'v', '3', '/', 'v', 'a', 'l', 'u', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 
'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 
'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 
'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\347', '\002', '\n', '\017', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 
'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', '\037', '\n', '\006', 'f', 'i', 'l', 't', 'e', 'r', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', 
'\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\006', 'f', 'i', 'l', 't', 'e', 'r', '\022', 'P', '\n', '\004', 'p', 'a', 't', 'h', '\030', '\002', 
' ', '\003', '(', '\013', '2', '2', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', 
'.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'M', 'a', 't', 'c', 'h', 'e', 'r', '.', 'P', 'a', 't', 'h', 'S', 
'e', 'g', 'm', 'e', 'n', 't', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\004', 'p', 'a', 't', 'h', '\022', 'C', '\n', 
'\005', 'v', 'a', 'l', 'u', 'e', '\030', '\003', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', 
'.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', '3', '.', 'V', 'a', 'l', 'u', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'B', 
'\010', '\372', 'B', '\005', '\212', '\001', '\002', '\020', '\001', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\032', 'q', '\n', '\013', 'P', 'a', 't', 'h', 'S', 
'e', 'g', 'm', 'e', 'n', 't', '\022', '\033', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', 
'\002', '\020', '\001', 'H', '\000', 'R', '\003', 'k', 'e', 'y', ':', '5', '\232', '\305', '\210', '\036', '0', '\n', '.', 'e', 'n', 'v', 'o', 'y', '.', 
't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'M', 'a', 't', 'c', 
'h', 'e', 'r', '.', 'P', 'a', 't', 'h', 'S', 'e', 'g', 'm', 'e', 'n', 't', 'B', '\016', '\n', '\007', 's', 'e', 'g', 'm', 'e', 'n', 
't', '\022', '\003', '\370', 'B', '\001', ':', ')', '\232', '\305', '\210', '\036', '$', '\n', '\"', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', 
'.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'B', 
'>', '\n', '#', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 
'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', '3', 'B', '\r', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'P', 'r', 
'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &envoy_type_matcher_v3_value_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_type_matcher_v3_metadata_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/type/matcher/v3/metadata.proto",
  UPB_STRVIEW_INIT(descriptor, 621)
};
