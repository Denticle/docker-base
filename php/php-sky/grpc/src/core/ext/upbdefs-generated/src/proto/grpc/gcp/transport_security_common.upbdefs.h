/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/gcp/transport_security_common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPBDEFS_H_
#define SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init src_proto_grpc_gcp_transport_security_common_proto_upbdefinit;

UPB_INLINE const upb_msgdef *grpc_gcp_RpcProtocolVersions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_gcp_transport_security_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.gcp.RpcProtocolVersions");
}

UPB_INLINE const upb_msgdef *grpc_gcp_RpcProtocolVersions_Version_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_gcp_transport_security_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.gcp.RpcProtocolVersions.Version");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPBDEFS_H_ */
