// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: benchmarks.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Benchmarks {

  /// <summary>Holder for reflection information generated from benchmarks.proto</summary>
  public static partial class BenchmarksReflection {

    #region Descriptor
    /// <summary>File descriptor for benchmarks.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static BenchmarksReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChBiZW5jaG1hcmtzLnByb3RvEgpiZW5jaG1hcmtzIkcKEEJlbmNobWFya0Rh",
            "dGFzZXQSDAoEbmFtZRgBIAEoCRIUCgxtZXNzYWdlX25hbWUYAiABKAkSDwoH",
            "cGF5bG9hZBgDIAMoDEIgCh5jb20uZ29vZ2xlLnByb3RvYnVmLmJlbmNobWFy",
            "a3NiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Benchmarks.BenchmarkDataset), global::Benchmarks.BenchmarkDataset.Parser, new[]{ "Name", "MessageName", "Payload" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class BenchmarkDataset : pb::IMessage<BenchmarkDataset>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<BenchmarkDataset> _parser = new pb::MessageParser<BenchmarkDataset>(() => new BenchmarkDataset());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<BenchmarkDataset> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Benchmarks.BenchmarksReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public BenchmarkDataset() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public BenchmarkDataset(BenchmarkDataset other) : this() {
      name_ = other.name_;
      messageName_ = other.messageName_;
      payload_ = other.payload_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public BenchmarkDataset Clone() {
      return new BenchmarkDataset(this);
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 1;
    private string name_ = "";
    /// <summary>
    /// Name of the benchmark dataset.  This should be unique across all datasets.
    /// Should only contain word characters: [a-zA-Z0-9_]
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "message_name" field.</summary>
    public const int MessageNameFieldNumber = 2;
    private string messageName_ = "";
    /// <summary>
    /// Fully-qualified name of the protobuf message for this dataset.
    /// It will be one of the messages defined benchmark_messages_proto2.proto
    /// or benchmark_messages_proto3.proto.
    ///
    /// Implementations that do not support reflection can implement this with
    /// an explicit "if/else" chain that lists every known message defined
    /// in those files.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string MessageName {
      get { return messageName_; }
      set {
        messageName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "payload" field.</summary>
    public const int PayloadFieldNumber = 3;
    private static readonly pb::FieldCodec<pb::ByteString> _repeated_payload_codec
        = pb::FieldCodec.ForBytes(26);
    private readonly pbc::RepeatedField<pb::ByteString> payload_ = new pbc::RepeatedField<pb::ByteString>();
    /// <summary>
    /// The payload(s) for this dataset.  They should be parsed or serialized
    /// in sequence, in a loop, ie.
    ///
    ///  while (!benchmarkDone) {  // Benchmark runner decides when to exit.
    ///    for (i = 0; i &lt; benchmark.payload.length; i++) {
    ///      parse(benchmark.payload[i])
    ///    }
    ///  }
    ///
    /// This is intended to let datasets include a variety of data to provide
    /// potentially more realistic results than just parsing the same message
    /// over and over.  A single message parsed repeatedly could yield unusually
    /// good branch prediction performance.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<pb::ByteString> Payload {
      get { return payload_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as BenchmarkDataset);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(BenchmarkDataset other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Name != other.Name) return false;
      if (MessageName != other.MessageName) return false;
      if(!payload_.Equals(other.payload_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (MessageName.Length != 0) hash ^= MessageName.GetHashCode();
      hash ^= payload_.GetHashCode();
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
      if (Name.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Name);
      }
      if (MessageName.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(MessageName);
      }
      payload_.WriteTo(output, _repeated_payload_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Name.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Name);
      }
      if (MessageName.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(MessageName);
      }
      payload_.WriteTo(ref output, _repeated_payload_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (MessageName.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(MessageName);
      }
      size += payload_.CalculateSize(_repeated_payload_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(BenchmarkDataset other) {
      if (other == null) {
        return;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      if (other.MessageName.Length != 0) {
        MessageName = other.MessageName;
      }
      payload_.Add(other.payload_);
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
            Name = input.ReadString();
            break;
          }
          case 18: {
            MessageName = input.ReadString();
            break;
          }
          case 26: {
            payload_.AddEntriesFrom(input, _repeated_payload_codec);
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
            Name = input.ReadString();
            break;
          }
          case 18: {
            MessageName = input.ReadString();
            break;
          }
          case 26: {
            payload_.AddEntriesFrom(ref input, _repeated_payload_codec);
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
