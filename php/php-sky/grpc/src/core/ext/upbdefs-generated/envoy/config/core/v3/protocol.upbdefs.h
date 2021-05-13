/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_CORE_V3_PROTOCOL_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_CORE_V3_PROTOCOL_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_core_v3_protocol_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_core_v3_TcpProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.TcpProtocolOptions");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_UpstreamHttpProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.UpstreamHttpProtocolOptions");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_HttpProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.HttpProtocolOptions");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_Http1ProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.Http1ProtocolOptions");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_Http1ProtocolOptions_HeaderKeyFormat_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.Http1ProtocolOptions.HeaderKeyFormat");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_Http1ProtocolOptions_HeaderKeyFormat_ProperCaseWords_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.Http1ProtocolOptions.HeaderKeyFormat.ProperCaseWords");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_KeepaliveSettings_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.KeepaliveSettings");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_Http2ProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.Http2ProtocolOptions");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_Http2ProtocolOptions_SettingsParameter_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.Http2ProtocolOptions.SettingsParameter");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_GrpcProtocolOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_protocol_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.GrpcProtocolOptions");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_CORE_V3_PROTOCOL_PROTO_UPBDEFS_H_ */
