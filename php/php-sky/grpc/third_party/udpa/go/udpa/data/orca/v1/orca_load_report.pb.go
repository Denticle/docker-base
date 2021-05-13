// Code generated by protoc-gen-go. DO NOT EDIT.
// source: udpa/data/orca/v1/orca_load_report.proto

package udpa_data_orca_v1

import (
	fmt "fmt"
	_ "github.com/envoyproxy/protoc-gen-validate/validate"
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

type OrcaLoadReport struct {
	CpuUtilization       float64            `protobuf:"fixed64,1,opt,name=cpu_utilization,json=cpuUtilization,proto3" json:"cpu_utilization,omitempty"`
	MemUtilization       float64            `protobuf:"fixed64,2,opt,name=mem_utilization,json=memUtilization,proto3" json:"mem_utilization,omitempty"`
	Rps                  uint64             `protobuf:"varint,3,opt,name=rps,proto3" json:"rps,omitempty"`
	RequestCost          map[string]float64 `protobuf:"bytes,4,rep,name=request_cost,json=requestCost,proto3" json:"request_cost,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"fixed64,2,opt,name=value,proto3"`
	Utilization          map[string]float64 `protobuf:"bytes,5,rep,name=utilization,proto3" json:"utilization,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"fixed64,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}           `json:"-"`
	XXX_unrecognized     []byte             `json:"-"`
	XXX_sizecache        int32              `json:"-"`
}

func (m *OrcaLoadReport) Reset()         { *m = OrcaLoadReport{} }
func (m *OrcaLoadReport) String() string { return proto.CompactTextString(m) }
func (*OrcaLoadReport) ProtoMessage()    {}
func (*OrcaLoadReport) Descriptor() ([]byte, []int) {
	return fileDescriptor_27edb21f16098bf0, []int{0}
}

func (m *OrcaLoadReport) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OrcaLoadReport.Unmarshal(m, b)
}
func (m *OrcaLoadReport) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OrcaLoadReport.Marshal(b, m, deterministic)
}
func (m *OrcaLoadReport) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OrcaLoadReport.Merge(m, src)
}
func (m *OrcaLoadReport) XXX_Size() int {
	return xxx_messageInfo_OrcaLoadReport.Size(m)
}
func (m *OrcaLoadReport) XXX_DiscardUnknown() {
	xxx_messageInfo_OrcaLoadReport.DiscardUnknown(m)
}

var xxx_messageInfo_OrcaLoadReport proto.InternalMessageInfo

func (m *OrcaLoadReport) GetCpuUtilization() float64 {
	if m != nil {
		return m.CpuUtilization
	}
	return 0
}

func (m *OrcaLoadReport) GetMemUtilization() float64 {
	if m != nil {
		return m.MemUtilization
	}
	return 0
}

func (m *OrcaLoadReport) GetRps() uint64 {
	if m != nil {
		return m.Rps
	}
	return 0
}

func (m *OrcaLoadReport) GetRequestCost() map[string]float64 {
	if m != nil {
		return m.RequestCost
	}
	return nil
}

func (m *OrcaLoadReport) GetUtilization() map[string]float64 {
	if m != nil {
		return m.Utilization
	}
	return nil
}

func init() {
	proto.RegisterType((*OrcaLoadReport)(nil), "udpa.data.orca.v1.OrcaLoadReport")
	proto.RegisterMapType((map[string]float64)(nil), "udpa.data.orca.v1.OrcaLoadReport.RequestCostEntry")
	proto.RegisterMapType((map[string]float64)(nil), "udpa.data.orca.v1.OrcaLoadReport.UtilizationEntry")
}

func init() {
	proto.RegisterFile("udpa/data/orca/v1/orca_load_report.proto", fileDescriptor_27edb21f16098bf0)
}

var fileDescriptor_27edb21f16098bf0 = []byte{
	// 341 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x92, 0x4f, 0x4b, 0xfb, 0x30,
	0x1c, 0xc6, 0x7f, 0xd9, 0x9f, 0x1f, 0x2c, 0xd5, 0x39, 0xab, 0xe0, 0x1c, 0x1e, 0xa6, 0x07, 0xa9,
	0x1e, 0x52, 0x36, 0x2f, 0xb2, 0x83, 0x42, 0x65, 0x37, 0xc1, 0x11, 0xd8, 0xb9, 0x64, 0x6d, 0xd0,
	0x62, 0xbb, 0xc4, 0x34, 0x29, 0x4c, 0xbc, 0xfa, 0x26, 0x7c, 0x95, 0x9e, 0x77, 0x92, 0x24, 0x8e,
	0xb5, 0xdb, 0x65, 0xf6, 0xd2, 0x6f, 0xc2, 0xf3, 0x3c, 0x79, 0x3e, 0x21, 0xd0, 0x53, 0x31, 0x27,
	0x7e, 0x4c, 0x24, 0xf1, 0x99, 0x88, 0x88, 0x5f, 0x0c, 0xcc, 0x3f, 0x4c, 0x19, 0x89, 0x43, 0x41,
	0x39, 0x13, 0x12, 0x71, 0xc1, 0x24, 0x73, 0x0f, 0xb5, 0x12, 0x69, 0x25, 0xd2, 0x0a, 0x54, 0x0c,
	0x7a, 0x27, 0x05, 0x49, 0x93, 0x98, 0x48, 0xea, 0xaf, 0x06, 0xab, 0xbd, 0xf8, 0x6c, 0xc0, 0xf6,
	0x93, 0x88, 0xc8, 0x23, 0x23, 0x31, 0x36, 0x21, 0xee, 0x18, 0x1e, 0x44, 0x5c, 0x85, 0x4a, 0x26,
	0x69, 0xf2, 0x4e, 0x64, 0xc2, 0xe6, 0x5d, 0xd0, 0x07, 0x1e, 0x08, 0xce, 0x96, 0x81, 0xe3, 0xb6,
	0xae, 0xfe, 0xfd, 0x7e, 0x66, 0x75, 0x6a, 0xe7, 0xef, 0x7b, 0xdc, 0x8e, 0xb8, 0x9a, 0xae, 0x3d,
	0x3a, 0x26, 0xa3, 0x59, 0x25, 0xa6, 0xb6, 0x4b, 0x4c, 0x46, 0xb3, 0x72, 0x4c, 0x07, 0xd6, 0x05,
	0xcf, 0xbb, 0xf5, 0x3e, 0xf0, 0x1a, 0x58, 0x8f, 0xee, 0x14, 0xee, 0x09, 0xfa, 0xa6, 0x68, 0x2e,
	0xc3, 0x88, 0xe5, 0xb2, 0xdb, 0xe8, 0xd7, 0x3d, 0x67, 0x38, 0x44, 0x5b, 0xd4, 0xa8, 0x0a, 0x86,
	0xb0, 0x75, 0x3d, 0xb0, 0x5c, 0x8e, 0xe7, 0x52, 0x2c, 0xb0, 0x23, 0xd6, 0x3b, 0xee, 0x07, 0x74,
	0xca, 0x5d, 0x9b, 0xbb, 0xa6, 0x96, 0xca, 0x9a, 0xd4, 0xe0, 0x72, 0x19, 0x74, 0xbe, 0xc0, 0xfe,
	0x75, 0x15, 0x72, 0xb5, 0xb5, 0x26, 0x2d, 0x1f, 0xd7, 0xbb, 0x83, 0x9d, 0xcd, 0x7a, 0x1a, 0xfd,
	0x95, 0x2e, 0xcc, 0xe5, 0xb7, 0xb0, 0x1e, 0xdd, 0x63, 0xd8, 0x2c, 0x48, 0xaa, 0xa8, 0xbd, 0x49,
	0x6c, 0x17, 0xa3, 0xda, 0x2d, 0xd0, 0xfe, 0xcd, 0x22, 0x7f, 0xf1, 0x07, 0x23, 0x78, 0x1e, 0xb1,
	0x0c, 0x3d, 0x27, 0xf2, 0x45, 0xcd, 0x2c, 0xf4, 0x16, 0x79, 0x70, 0x54, 0x45, 0x9f, 0xe8, 0x17,
	0x34, 0x01, 0xb3, 0xff, 0xe6, 0x29, 0xdd, 0xfc, 0x04, 0x00, 0x00, 0xff, 0xff, 0x71, 0x13, 0xd1,
	0xd4, 0xa2, 0x02, 0x00, 0x00,
}
