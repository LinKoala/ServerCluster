// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: Test.proto

#pragma warning disable CS1591, CS0612, CS3021, IDE1006
namespace Protocol.TEST
{

    [global::ProtoBuf.ProtoContract(Name = @"MSG_TEST_Test1")]
    public partial class MSGTESTTest1 : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"testint", IsRequired = true)]
        public int Testint { get; set; }

        [global::ProtoBuf.ProtoMember(2, Name = @"teststring", IsRequired = true)]
        public string Teststring { get; set; }

    }

    [global::ProtoBuf.ProtoContract(Name = @"MSG_TEST_Test2")]
    public partial class MSGTESTTest2 : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"testint", IsRequired = true)]
        public int Testint { get; set; }

        [global::ProtoBuf.ProtoMember(2, Name = @"teststring", IsRequired = true)]
        public string Teststring { get; set; }

    }

    [global::ProtoBuf.ProtoContract(Name = @"MSG_TEST_Test3")]
    public partial class MSGTESTTest3 : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"testint", IsRequired = true)]
        public int Testint { get; set; }

        [global::ProtoBuf.ProtoMember(2, Name = @"teststring", IsRequired = true)]
        public string Teststring { get; set; }

    }

}

#pragma warning restore CS1591, CS0612, CS3021, IDE1006
