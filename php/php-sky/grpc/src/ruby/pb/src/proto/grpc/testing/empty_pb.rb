# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/empty.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("src/proto/grpc/testing/empty.proto", :syntax => :proto3) do
    add_message "grpc.testing.Empty" do
    end
  end
end

module Grpc
  module Testing
    Empty = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("grpc.testing.Empty").msgclass
  end
end
