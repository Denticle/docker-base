/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/resource_name.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "udpa/core/v1/resource_name.upbdefs.h"

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_core_v1_context_params_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout udpa_core_v1_ResourceName_msginit;

static const upb_msglayout *layouts[1] = {
  &udpa_core_v1_ResourceName_msginit,
};

static const char descriptor[382] = {'\n', ' ', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 'n', 
'a', 'm', 'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\014', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '\032', '\035', 
'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 
'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'c', 'o', 'n', 't', 'e', 'x', 
't', '_', 'p', 'a', 'r', 'a', 'm', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 
'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\253', '\001', '\n', '\014', 'R', 'e', 's', 'o', 'u', 'r', 
'c', 'e', 'N', 'a', 'm', 'e', '\022', '\030', '\n', '\002', 'i', 'd', '\030', '\001', ' ', '\003', '(', '\t', 'B', '\010', '\372', 'B', '\005', '\222', '\001', 
'\002', '\010', '\001', 'R', '\002', 'i', 'd', '\022', '\034', '\n', '\t', 'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\030', '\002', ' ', '\001', '(', 
'\t', 'R', '\t', 'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\022', ',', '\n', '\r', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 
't', 'y', 'p', 'e', '\030', '\003', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\014', 'r', 'e', 's', 'o', 
'u', 'r', 'c', 'e', 'T', 'y', 'p', 'e', '\022', '5', '\n', '\007', 'c', 'o', 'n', 't', 'e', 'x', 't', '\030', '\004', ' ', '\001', '(', '\013', 
'2', '\033', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'a', 
'r', 'a', 'm', 's', 'R', '\007', 'c', 'o', 'n', 't', 'e', 'x', 't', 'B', ';', '\n', '\034', 'c', 'o', 'm', '.', 'g', 'i', 't', 'h', 
'u', 'b', '.', 'u', 'd', 'p', 'a', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', 'B', '\021', 'R', 'e', 's', 
'o', 'u', 'r', 'c', 'e', 'N', 'a', 'm', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\010', '\001', 'b', 
'\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_core_v1_context_params_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init udpa_core_v1_resource_name_proto_upbdefinit = {
  deps,
  layouts,
  "udpa/core/v1/resource_name.proto",
  UPB_STRVIEW_INIT(descriptor, 382)
};
