/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/data/orca/v1/orca_load_report.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_DATA_ORCA_V1_ORCA_LOAD_REPORT_PROTO_UPBDEFS_H_
#define UDPA_DATA_ORCA_V1_ORCA_LOAD_REPORT_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init udpa_data_orca_v1_orca_load_report_proto_upbdefinit;

UPB_INLINE const upb_msgdef *udpa_data_orca_v1_OrcaLoadReport_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &udpa_data_orca_v1_orca_load_report_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "udpa.data.orca.v1.OrcaLoadReport");
}

UPB_INLINE const upb_msgdef *udpa_data_orca_v1_OrcaLoadReport_RequestCostEntry_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &udpa_data_orca_v1_orca_load_report_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "udpa.data.orca.v1.OrcaLoadReport.RequestCostEntry");
}

UPB_INLINE const upb_msgdef *udpa_data_orca_v1_OrcaLoadReport_UtilizationEntry_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &udpa_data_orca_v1_orca_load_report_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "udpa.data.orca.v1.OrcaLoadReport.UtilizationEntry");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_DATA_ORCA_V1_ORCA_LOAD_REPORT_PROTO_UPBDEFS_H_ */
