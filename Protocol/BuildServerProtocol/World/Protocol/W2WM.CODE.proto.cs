//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: W2WM.CODE.proto
namespace Message.World.WorldManager.Protocol.W2WM
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"MSG_W2WM_HEARTBEAT")]
  public partial class MSG_W2WM_HEARTBEAT : global::ProtoBuf.IExtensible
  {
    public MSG_W2WM_HEARTBEAT() {}
    
    private int _GroupId;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"GroupId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int GroupId
    {
      get { return _GroupId; }
      set { _GroupId = value; }
    }
    private int _SubId;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"SubId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int SubId
    {
      get { return _SubId; }
      set { _SubId = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"MSG_W2WM_REGISTER")]
  public partial class MSG_W2WM_REGISTER : global::ProtoBuf.IExtensible
  {
    public MSG_W2WM_REGISTER() {}
    
    private int _GroupId;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"GroupId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int GroupId
    {
      get { return _GroupId; }
      set { _GroupId = value; }
    }
    private int _SubId;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"SubId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int SubId
    {
      get { return _SubId; }
      set { _SubId = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}