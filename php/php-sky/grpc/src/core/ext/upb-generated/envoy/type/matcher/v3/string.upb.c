/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/string.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "envoy/type/matcher/v3/regex.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_matcher_v3_StringMatcher_submsgs[1] = {
  &envoy_type_matcher_v3_RegexMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_StringMatcher__fields[6] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, 1},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, 1},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, 1},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 11, 1},
  {6, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {7, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, 1},
};

const upb_msglayout envoy_type_matcher_v3_StringMatcher_msginit = {
  &envoy_type_matcher_v3_StringMatcher_submsgs[0],
  &envoy_type_matcher_v3_StringMatcher__fields[0],
  UPB_SIZE(16, 32), 6, false,
};

static const upb_msglayout *const envoy_type_matcher_v3_ListStringMatcher_submsgs[1] = {
  &envoy_type_matcher_v3_StringMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_ListStringMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_type_matcher_v3_ListStringMatcher_msginit = {
  &envoy_type_matcher_v3_ListStringMatcher_submsgs[0],
  &envoy_type_matcher_v3_ListStringMatcher__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

#include "upb/port_undef.inc"

