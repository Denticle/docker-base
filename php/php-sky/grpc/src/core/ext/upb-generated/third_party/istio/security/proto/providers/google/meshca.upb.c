/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     third_party/istio/security/proto/providers/google/meshca.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "third_party/istio/security/proto/providers/google/meshca.upb.h"
#include "google/protobuf/duration.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const google_security_meshca_v1_MeshCertificateRequest_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field google_security_meshca_v1_MeshCertificateRequest__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 9, 1},
  {3, UPB_SIZE(16, 32), 0, 0, 11, 1},
};

const upb_msglayout google_security_meshca_v1_MeshCertificateRequest_msginit = {
  &google_security_meshca_v1_MeshCertificateRequest_submsgs[0],
  &google_security_meshca_v1_MeshCertificateRequest__fields[0],
  UPB_SIZE(24, 48), 3, false,
};

static const upb_msglayout_field google_security_meshca_v1_MeshCertificateResponse__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 3},
};

const upb_msglayout google_security_meshca_v1_MeshCertificateResponse_msginit = {
  NULL,
  &google_security_meshca_v1_MeshCertificateResponse__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

#include "upb/port_undef.inc"

