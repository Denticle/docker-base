// Code generated by protoc-gen-go. DO NOT EDIT.
// source: udpa/core/v1/context_params.proto

package udpa_core_v1

import (
	fmt "fmt"
	_ "github.com/cncf/udpa/go/udpa/annotations"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type ContextParams struct {
	Params               map[string]string `protobuf:"bytes,1,rep,name=params,proto3" json:"params,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *ContextParams) Reset()         { *m = ContextParams{} }
func (m *ContextParams) String() string { return proto.CompactTextString(m) }
func (*ContextParams) ProtoMessage()    {}
func (*ContextParams) Descriptor() ([]byte, []int) {
	return fileDescriptor_bbf45dc46a790208, []int{0}
}

func (m *ContextParams) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ContextParams.Unmarshal(m, b)
}
func (m *ContextParams) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ContextParams.Marshal(b, m, deterministic)
}
func (m *ContextParams) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ContextParams.Merge(m, src)
}
func (m *ContextParams) XXX_Size() int {
	return xxx_messageInfo_ContextParams.Size(m)
}
func (m *ContextParams) XXX_DiscardUnknown() {
	xxx_messageInfo_ContextParams.DiscardUnknown(m)
}

var xxx_messageInfo_ContextParams proto.InternalMessageInfo

func (m *ContextParams) GetParams() map[string]string {
	if m != nil {
		return m.Params
	}
	return nil
}

func init() {
	proto.RegisterType((*ContextParams)(nil), "udpa.core.v1.ContextParams")
	proto.RegisterMapType((map[string]string)(nil), "udpa.core.v1.ContextParams.ParamsEntry")
}

func init() { proto.RegisterFile("udpa/core/v1/context_params.proto", fileDescriptor_bbf45dc46a790208) }

var fileDescriptor_bbf45dc46a790208 = []byte{
	// 217 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x52, 0x2c, 0x4d, 0x29, 0x48,
	0xd4, 0x4f, 0xce, 0x2f, 0x4a, 0xd5, 0x2f, 0x33, 0xd4, 0x4f, 0xce, 0xcf, 0x2b, 0x49, 0xad, 0x28,
	0x89, 0x2f, 0x48, 0x2c, 0x4a, 0xcc, 0x2d, 0xd6, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0xe2, 0x01,
	0x29, 0xd1, 0x03, 0x29, 0xd1, 0x2b, 0x33, 0x94, 0x92, 0x05, 0x6b, 0x48, 0xcc, 0xcb, 0xcb, 0x2f,
	0x49, 0x2c, 0xc9, 0xcc, 0xcf, 0x2b, 0xd6, 0x2f, 0x2e, 0x49, 0x2c, 0x29, 0x85, 0x2a, 0x56, 0xea,
	0x66, 0xe4, 0xe2, 0x75, 0x86, 0x98, 0x12, 0x00, 0x36, 0x44, 0xc8, 0x9e, 0x8b, 0x0d, 0x62, 0x9c,
	0x04, 0xa3, 0x02, 0xb3, 0x06, 0xb7, 0x91, 0xba, 0x1e, 0xb2, 0x79, 0x7a, 0x28, 0x8a, 0xf5, 0x20,
	0x94, 0x6b, 0x5e, 0x49, 0x51, 0x65, 0x10, 0x54, 0x9b, 0x94, 0x25, 0x17, 0x37, 0x92, 0xb0, 0x90,
	0x00, 0x17, 0x73, 0x76, 0x6a, 0xa5, 0x04, 0xa3, 0x02, 0xa3, 0x06, 0x67, 0x10, 0x88, 0x29, 0x24,
	0xc2, 0xc5, 0x5a, 0x96, 0x98, 0x53, 0x9a, 0x2a, 0xc1, 0x04, 0x16, 0x83, 0x70, 0xac, 0x98, 0x2c,
	0x18, 0x9d, 0x6c, 0x76, 0x35, 0x9c, 0xb8, 0xc8, 0xc6, 0xc4, 0xc1, 0xc8, 0x25, 0x93, 0x9c, 0x9f,
	0xab, 0x97, 0x9e, 0x59, 0x92, 0x51, 0x9a, 0x04, 0xb1, 0x1f, 0xd9, 0x11, 0x4e, 0x42, 0x28, 0xae,
	0x08, 0x00, 0xf9, 0x24, 0x80, 0x31, 0x89, 0x0d, 0xec, 0x25, 0x63, 0x40, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x05, 0x1a, 0x11, 0x52, 0x24, 0x01, 0x00, 0x00,
}
