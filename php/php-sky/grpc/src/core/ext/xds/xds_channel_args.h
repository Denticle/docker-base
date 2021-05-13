//
// Copyright 2019 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef GRPC_CORE_EXT_XDS_XDS_CHANNEL_ARGS_H
#define GRPC_CORE_EXT_XDS_XDS_CHANNEL_ARGS_H

// Pointer channel arg containing a ref to the XdsClient object.
#define GRPC_ARG_XDS_CLIENT "grpc.xds_client"

// Timeout in milliseconds to wait for a resource to be returned from
// the xds server before assuming that it does not exist.
// The default is 15 seconds.
#define GRPC_ARG_XDS_RESOURCE_DOES_NOT_EXIST_TIMEOUT_MS \
  "grpc.xds_resource_does_not_exist_timeout_ms"

#endif /* GRPC_CORE_EXT_XDS_XDS_CHANNEL_ARGS_H */
