/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/health/v1/health.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "src/proto/grpc/health/v1/health.upbdefs.h"

extern const upb_msglayout grpc_health_v1_HealthCheckRequest_msginit;
extern const upb_msglayout grpc_health_v1_HealthCheckResponse_msginit;

static const upb_msglayout *layouts[2] = {
  &grpc_health_v1_HealthCheckRequest_msginit,
  &grpc_health_v1_HealthCheckResponse_msginit,
};

static const char descriptor[567] = {'\n', '%', 's', 'r', 'c', '/', 'p', 'r', 'o', 't', 'o', '/', 'g', 'r', 'p', 'c', '/', 'h', 'e', 'a', 'l', 't', 'h', '/', 'v', 
'1', '/', 'h', 'e', 'a', 'l', 't', 'h', '.', 'p', 'r', 'o', 't', 'o', '\022', '\016', 'g', 'r', 'p', 'c', '.', 'h', 'e', 'a', 'l', 
't', 'h', '.', 'v', '1', '\"', '.', '\n', '\022', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 'q', 'u', 'e', 
's', 't', '\022', '\030', '\n', '\007', 's', 'e', 'r', 'v', 'i', 'c', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\007', 's', 'e', 'r', 'v', 
'i', 'c', 'e', '\"', '\261', '\001', '\n', '\023', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 's', 'p', 'o', 'n', 
's', 'e', '\022', 'I', '\n', '\006', 's', 't', 'a', 't', 'u', 's', '\030', '\001', ' ', '\001', '(', '\016', '2', '1', '.', 'g', 'r', 'p', 'c', 
'.', 'h', 'e', 'a', 'l', 't', 'h', '.', 'v', '1', '.', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 's', 
'p', 'o', 'n', 's', 'e', '.', 'S', 'e', 'r', 'v', 'i', 'n', 'g', 'S', 't', 'a', 't', 'u', 's', 'R', '\006', 's', 't', 'a', 't', 
'u', 's', '\"', 'O', '\n', '\r', 'S', 'e', 'r', 'v', 'i', 'n', 'g', 'S', 't', 'a', 't', 'u', 's', '\022', '\013', '\n', '\007', 'U', 'N', 
'K', 'N', 'O', 'W', 'N', '\020', '\000', '\022', '\013', '\n', '\007', 'S', 'E', 'R', 'V', 'I', 'N', 'G', '\020', '\001', '\022', '\017', '\n', '\013', 'N', 
'O', 'T', '_', 'S', 'E', 'R', 'V', 'I', 'N', 'G', '\020', '\002', '\022', '\023', '\n', '\017', 'S', 'E', 'R', 'V', 'I', 'C', 'E', '_', 'U', 
'N', 'K', 'N', 'O', 'W', 'N', '\020', '\003', '2', '\256', '\001', '\n', '\006', 'H', 'e', 'a', 'l', 't', 'h', '\022', 'P', '\n', '\005', 'C', 'h', 
'e', 'c', 'k', '\022', '\"', '.', 'g', 'r', 'p', 'c', '.', 'h', 'e', 'a', 'l', 't', 'h', '.', 'v', '1', '.', 'H', 'e', 'a', 'l', 
't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '#', '.', 'g', 'r', 'p', 'c', '.', 'h', 'e', 'a', 
'l', 't', 'h', '.', 'v', '1', '.', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 's', 'p', 'o', 'n', 's', 
'e', '\022', 'R', '\n', '\005', 'W', 'a', 't', 'c', 'h', '\022', '\"', '.', 'g', 'r', 'p', 'c', '.', 'h', 'e', 'a', 'l', 't', 'h', '.', 
'v', '1', '.', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '#', '.', 'g', 
'r', 'p', 'c', '.', 'h', 'e', 'a', 'l', 't', 'h', '.', 'v', '1', '.', 'H', 'e', 'a', 'l', 't', 'h', 'C', 'h', 'e', 'c', 'k', 
'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '0', '\001', 'B', 'a', '\n', '\021', 'i', 'o', '.', 'g', 'r', 'p', 'c', '.', 'h', 'e', 'a', 
'l', 't', 'h', '.', 'v', '1', 'B', '\013', 'H', 'e', 'a', 'l', 't', 'h', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', ',', 'g', 'o', 
'o', 'g', 'l', 'e', '.', 'g', 'o', 'l', 'a', 'n', 'g', '.', 'o', 'r', 'g', '/', 'g', 'r', 'p', 'c', '/', 'h', 'e', 'a', 'l', 
't', 'h', '/', 'g', 'r', 'p', 'c', '_', 'h', 'e', 'a', 'l', 't', 'h', '_', 'v', '1', '\252', '\002', '\016', 'G', 'r', 'p', 'c', '.', 
'H', 'e', 'a', 'l', 't', 'h', '.', 'V', '1', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[1] = {
  NULL
};

upb_def_init src_proto_grpc_health_v1_health_proto_upbdefinit = {
  deps,
  layouts,
  "src/proto/grpc/health/v1/health.proto",
  UPB_STRVIEW_INIT(descriptor, 567)
};
