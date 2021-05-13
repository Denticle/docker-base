// Code generated by protoc-gen-go. DO NOT EDIT.
// source: udpa/annotations/migrate.proto

package udpa_annotations

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	descriptor "github.com/golang/protobuf/protoc-gen-go/descriptor"
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

type MigrateAnnotation struct {
	Rename               string   `protobuf:"bytes,1,opt,name=rename,proto3" json:"rename,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *MigrateAnnotation) Reset()         { *m = MigrateAnnotation{} }
func (m *MigrateAnnotation) String() string { return proto.CompactTextString(m) }
func (*MigrateAnnotation) ProtoMessage()    {}
func (*MigrateAnnotation) Descriptor() ([]byte, []int) {
	return fileDescriptor_ba8191732d0e246d, []int{0}
}

func (m *MigrateAnnotation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_MigrateAnnotation.Unmarshal(m, b)
}
func (m *MigrateAnnotation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_MigrateAnnotation.Marshal(b, m, deterministic)
}
func (m *MigrateAnnotation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MigrateAnnotation.Merge(m, src)
}
func (m *MigrateAnnotation) XXX_Size() int {
	return xxx_messageInfo_MigrateAnnotation.Size(m)
}
func (m *MigrateAnnotation) XXX_DiscardUnknown() {
	xxx_messageInfo_MigrateAnnotation.DiscardUnknown(m)
}

var xxx_messageInfo_MigrateAnnotation proto.InternalMessageInfo

func (m *MigrateAnnotation) GetRename() string {
	if m != nil {
		return m.Rename
	}
	return ""
}

type FieldMigrateAnnotation struct {
	Rename               string   `protobuf:"bytes,1,opt,name=rename,proto3" json:"rename,omitempty"`
	OneofPromotion       string   `protobuf:"bytes,2,opt,name=oneof_promotion,json=oneofPromotion,proto3" json:"oneof_promotion,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *FieldMigrateAnnotation) Reset()         { *m = FieldMigrateAnnotation{} }
func (m *FieldMigrateAnnotation) String() string { return proto.CompactTextString(m) }
func (*FieldMigrateAnnotation) ProtoMessage()    {}
func (*FieldMigrateAnnotation) Descriptor() ([]byte, []int) {
	return fileDescriptor_ba8191732d0e246d, []int{1}
}

func (m *FieldMigrateAnnotation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FieldMigrateAnnotation.Unmarshal(m, b)
}
func (m *FieldMigrateAnnotation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FieldMigrateAnnotation.Marshal(b, m, deterministic)
}
func (m *FieldMigrateAnnotation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FieldMigrateAnnotation.Merge(m, src)
}
func (m *FieldMigrateAnnotation) XXX_Size() int {
	return xxx_messageInfo_FieldMigrateAnnotation.Size(m)
}
func (m *FieldMigrateAnnotation) XXX_DiscardUnknown() {
	xxx_messageInfo_FieldMigrateAnnotation.DiscardUnknown(m)
}

var xxx_messageInfo_FieldMigrateAnnotation proto.InternalMessageInfo

func (m *FieldMigrateAnnotation) GetRename() string {
	if m != nil {
		return m.Rename
	}
	return ""
}

func (m *FieldMigrateAnnotation) GetOneofPromotion() string {
	if m != nil {
		return m.OneofPromotion
	}
	return ""
}

type FileMigrateAnnotation struct {
	MoveToPackage        string   `protobuf:"bytes,2,opt,name=move_to_package,json=moveToPackage,proto3" json:"move_to_package,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *FileMigrateAnnotation) Reset()         { *m = FileMigrateAnnotation{} }
func (m *FileMigrateAnnotation) String() string { return proto.CompactTextString(m) }
func (*FileMigrateAnnotation) ProtoMessage()    {}
func (*FileMigrateAnnotation) Descriptor() ([]byte, []int) {
	return fileDescriptor_ba8191732d0e246d, []int{2}
}

func (m *FileMigrateAnnotation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FileMigrateAnnotation.Unmarshal(m, b)
}
func (m *FileMigrateAnnotation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FileMigrateAnnotation.Marshal(b, m, deterministic)
}
func (m *FileMigrateAnnotation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FileMigrateAnnotation.Merge(m, src)
}
func (m *FileMigrateAnnotation) XXX_Size() int {
	return xxx_messageInfo_FileMigrateAnnotation.Size(m)
}
func (m *FileMigrateAnnotation) XXX_DiscardUnknown() {
	xxx_messageInfo_FileMigrateAnnotation.DiscardUnknown(m)
}

var xxx_messageInfo_FileMigrateAnnotation proto.InternalMessageInfo

func (m *FileMigrateAnnotation) GetMoveToPackage() string {
	if m != nil {
		return m.MoveToPackage
	}
	return ""
}

var E_MessageMigrate = &proto.ExtensionDesc{
	ExtendedType:  (*descriptor.MessageOptions)(nil),
	ExtensionType: (*MigrateAnnotation)(nil),
	Field:         171962766,
	Name:          "udpa.annotations.message_migrate",
	Tag:           "bytes,171962766,opt,name=message_migrate",
	Filename:      "udpa/annotations/migrate.proto",
}

var E_FieldMigrate = &proto.ExtensionDesc{
	ExtendedType:  (*descriptor.FieldOptions)(nil),
	ExtensionType: (*FieldMigrateAnnotation)(nil),
	Field:         171962766,
	Name:          "udpa.annotations.field_migrate",
	Tag:           "bytes,171962766,opt,name=field_migrate",
	Filename:      "udpa/annotations/migrate.proto",
}

var E_EnumMigrate = &proto.ExtensionDesc{
	ExtendedType:  (*descriptor.EnumOptions)(nil),
	ExtensionType: (*MigrateAnnotation)(nil),
	Field:         171962766,
	Name:          "udpa.annotations.enum_migrate",
	Tag:           "bytes,171962766,opt,name=enum_migrate",
	Filename:      "udpa/annotations/migrate.proto",
}

var E_EnumValueMigrate = &proto.ExtensionDesc{
	ExtendedType:  (*descriptor.EnumValueOptions)(nil),
	ExtensionType: (*MigrateAnnotation)(nil),
	Field:         171962766,
	Name:          "udpa.annotations.enum_value_migrate",
	Tag:           "bytes,171962766,opt,name=enum_value_migrate",
	Filename:      "udpa/annotations/migrate.proto",
}

var E_FileMigrate = &proto.ExtensionDesc{
	ExtendedType:  (*descriptor.FileOptions)(nil),
	ExtensionType: (*FileMigrateAnnotation)(nil),
	Field:         171962766,
	Name:          "udpa.annotations.file_migrate",
	Tag:           "bytes,171962766,opt,name=file_migrate",
	Filename:      "udpa/annotations/migrate.proto",
}

func init() {
	proto.RegisterType((*MigrateAnnotation)(nil), "udpa.annotations.MigrateAnnotation")
	proto.RegisterType((*FieldMigrateAnnotation)(nil), "udpa.annotations.FieldMigrateAnnotation")
	proto.RegisterType((*FileMigrateAnnotation)(nil), "udpa.annotations.FileMigrateAnnotation")
	proto.RegisterExtension(E_MessageMigrate)
	proto.RegisterExtension(E_FieldMigrate)
	proto.RegisterExtension(E_EnumMigrate)
	proto.RegisterExtension(E_EnumValueMigrate)
	proto.RegisterExtension(E_FileMigrate)
}

func init() { proto.RegisterFile("udpa/annotations/migrate.proto", fileDescriptor_ba8191732d0e246d) }

var fileDescriptor_ba8191732d0e246d = []byte{
	// 349 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x9c, 0x92, 0xcd, 0x4a, 0xfb, 0x40,
	0x14, 0xc5, 0xe9, 0x7f, 0x51, 0xf8, 0x4f, 0x3f, 0x0d, 0x58, 0x8a, 0xf8, 0x51, 0x2b, 0xd8, 0x82,
	0x30, 0x01, 0xdd, 0x75, 0x23, 0x2e, 0xec, 0xae, 0x58, 0x83, 0x08, 0xae, 0xc2, 0xb4, 0xbd, 0x09,
	0xa1, 0x99, 0xb9, 0x43, 0x32, 0xa9, 0x6f, 0xe1, 0x4b, 0xfa, 0x20, 0xca, 0x4c, 0x92, 0xb6, 0x38,
	0x41, 0xa4, 0xcb, 0x9c, 0x7b, 0xef, 0xf9, 0xe5, 0x1c, 0x86, 0x9c, 0x67, 0x2b, 0xc9, 0x5c, 0x26,
	0x04, 0x2a, 0xa6, 0x22, 0x14, 0xa9, 0xcb, 0xa3, 0x30, 0x61, 0x0a, 0xa8, 0x4c, 0x50, 0xa1, 0xd3,
	0xd5, 0x73, 0xba, 0x37, 0x3f, 0x19, 0x84, 0x88, 0x61, 0x0c, 0xae, 0x99, 0x2f, 0xb2, 0xc0, 0x5d,
	0x41, 0xba, 0x4c, 0x22, 0xa9, 0x30, 0xc9, 0x6f, 0x86, 0x37, 0xe4, 0x68, 0x96, 0x9b, 0x3c, 0x6c,
	0xef, 0x9c, 0x1e, 0xa9, 0x27, 0x20, 0x18, 0x87, 0x7e, 0x6d, 0x50, 0x1b, 0xff, 0xf7, 0x8a, 0xaf,
	0xe1, 0x1b, 0xe9, 0x4d, 0x23, 0x88, 0x57, 0x7f, 0xbe, 0x70, 0x46, 0xa4, 0x83, 0x02, 0x30, 0xf0,
	0x65, 0x82, 0x1c, 0xf5, 0x6a, 0xff, 0x9f, 0x59, 0x68, 0x1b, 0x79, 0x5e, 0xaa, 0xc3, 0x7b, 0x72,
	0x3c, 0x8d, 0x62, 0xb0, 0x9d, 0xaf, 0x49, 0x87, 0xe3, 0x06, 0x7c, 0x85, 0xbe, 0x64, 0xcb, 0x35,
	0x0b, 0xa1, 0x70, 0x68, 0x69, 0xf9, 0x05, 0xe7, 0xb9, 0x38, 0x91, 0xa4, 0xc3, 0x21, 0x4d, 0x59,
	0x08, 0x7e, 0xd1, 0x8a, 0x73, 0x41, 0xf3, 0xf8, 0xb4, 0x8c, 0x4f, 0x67, 0xf9, 0xc6, 0x93, 0x34,
	0xf5, 0xf4, 0x3f, 0x3e, 0xbf, 0x9e, 0x07, 0xb5, 0x71, 0xe3, 0xf6, 0x8a, 0xfe, 0xac, 0x8e, 0x5a,
	0x7f, 0xe2, 0xb5, 0x0b, 0xff, 0x62, 0x32, 0x41, 0xd2, 0x0a, 0x74, 0x1b, 0x5b, 0xde, 0x99, 0xc5,
	0x33, 0x6d, 0x59, 0xb4, 0xb1, 0x4d, 0xab, 0xae, 0xd5, 0x6b, 0x06, 0x7b, 0xfa, 0x24, 0x24, 0x4d,
	0x10, 0x19, 0xdf, 0xf2, 0x4e, 0x2d, 0xde, 0xa3, 0xc8, 0xf8, 0x61, 0xe1, 0x1a, 0xda, 0xb9, 0x04,
	0xbd, 0x13, 0xc7, 0x80, 0x36, 0x2c, 0xce, 0x76, 0x75, 0x5e, 0x56, 0xe2, 0x5e, 0xf5, 0xce, 0x61,
	0xcc, 0x2e, 0x94, 0xf7, 0x25, 0x78, 0x4d, 0x9a, 0x41, 0x14, 0xc3, 0x2f, 0x09, 0xf5, 0x23, 0xb1,
	0x68, 0xa3, 0xaa, 0x42, 0x2b, 0x1e, 0x93, 0xd7, 0x08, 0x76, 0xf2, 0xa2, 0x6e, 0x4c, 0xef, 0xbe,
	0x03, 0x00, 0x00, 0xff, 0xff, 0x62, 0x65, 0xc8, 0x45, 0x57, 0x03, 0x00, 0x00,
}
