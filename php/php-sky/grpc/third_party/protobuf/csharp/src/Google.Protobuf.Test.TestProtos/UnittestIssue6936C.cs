// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: unittest_issue6936_c.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace UnitTest.Issues.TestProtos {

  /// <summary>Holder for reflection information generated from unittest_issue6936_c.proto</summary>
  public static partial class UnittestIssue6936CReflection {

    #region Descriptor
    /// <summary>File descriptor for unittest_issue6936_c.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static UnittestIssue6936CReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Chp1bml0dGVzdF9pc3N1ZTY5MzZfYy5wcm90bxIPdW5pdHRlc3RfaXNzdWVz",
            "Ghp1bml0dGVzdF9pc3N1ZTY5MzZfYS5wcm90bxoadW5pdHRlc3RfaXNzdWU2",
            "OTM2X2IucHJvdG8iMQoDQmFyEiEKA2ZvbxgBIAEoCzIULnVuaXR0ZXN0X2lz",
            "c3Vlcy5Gb286B4K1GANiYXJCHaoCGlVuaXRUZXN0Lklzc3Vlcy5UZXN0UHJv",
            "dG9zYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::UnitTest.Issues.TestProtos.UnittestIssue6936AReflection.Descriptor, global::UnitTest.Issues.TestProtos.UnittestIssue6936BReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::UnitTest.Issues.TestProtos.Bar), global::UnitTest.Issues.TestProtos.Bar.Parser, new[]{ "Foo" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Bar : pb::IMessage<Bar>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<Bar> _parser = new pb::MessageParser<Bar>(() => new Bar());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Bar> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::UnitTest.Issues.TestProtos.UnittestIssue6936CReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Bar() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Bar(Bar other) : this() {
      foo_ = other.foo_ != null ? other.foo_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Bar Clone() {
      return new Bar(this);
    }

    /// <summary>Field number for the "foo" field.</summary>
    public const int FooFieldNumber = 1;
    private global::UnitTest.Issues.TestProtos.Foo foo_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::UnitTest.Issues.TestProtos.Foo Foo {
      get { return foo_; }
      set {
        foo_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Bar);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Bar other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Foo, other.Foo)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (foo_ != null) hash ^= Foo.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (foo_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Foo);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (foo_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Foo);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (foo_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Foo);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Bar other) {
      if (other == null) {
        return;
      }
      if (other.foo_ != null) {
        if (foo_ == null) {
          Foo = new global::UnitTest.Issues.TestProtos.Foo();
        }
        Foo.MergeFrom(other.Foo);
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            if (foo_ == null) {
              Foo = new global::UnitTest.Issues.TestProtos.Foo();
            }
            input.ReadMessage(Foo);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            if (foo_ == null) {
              Foo = new global::UnitTest.Issues.TestProtos.Foo();
            }
            input.ReadMessage(Foo);
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
