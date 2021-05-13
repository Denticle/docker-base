# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: src/proto/grpc/testing/proxy-service.proto for package 'grpc.testing'
# Original file comments:
# Copyright 2017 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

require 'grpc'
require 'src/proto/grpc/testing/proxy-service_pb'

module Grpc
  module Testing
    module ProxyClientService
      class Service

        include GRPC::GenericService

        self.marshal_class_method = :encode
        self.unmarshal_class_method = :decode
        self.service_name = 'grpc.testing.ProxyClientService'

        rpc :GetConfig, Void, ClientConfig
        rpc :ReportTime, stream(ProxyStat), Void
        rpc :ReportHist, stream(HistogramData), Void
      end

      Stub = Service.rpc_stub_class
    end
  end
end
