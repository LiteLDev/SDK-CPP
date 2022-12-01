/**
 * @file  ReadOnlyBinaryStream.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReadOnlyBinaryStream.
 *
 */
class ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    size_t      readPointer{};
    bool        unk;
    std::string ownBuf, *pBuf;

public:
    LIAPI std::string const& getData() const;
    LIAPI size_t getLength() const;
    LIAPI size_t getReadPointer() const;
    LIAPI size_t getUnreadLength() const;
    LIAPI void setReadPointer(std::size_t size);

    template <typename T>
    inline void readType(T&) = delete;
    template <>
    MCAPI void readType(struct CommandOriginData&);
    template <>
    MCAPI void readType(class Experiments&);
    template <>
    MCAPI void readType(struct ItemStackRequestSlotInfo&);
    template <>
    MCAPI void readType(class MoveActorAbsoluteData&);
    template <>
    MCAPI void readType(class NetworkItemStackDescriptor&);
    template <>
    MCAPI void readType(class StructureSettings&);
    template <>
    MCAPI void readType(std::vector<std::unique_ptr<class DataItem>>&);
    template <>
    inline void readType(mce::UUID& uuid)
    {
        dAccess<uint64_t, 0>(&uuid) = getUnsignedInt64();
        dAccess<uint64_t, 8>(&uuid) = getUnsignedInt64();
    }
    //template <>
    //inline void readType(NetworkItemInstanceDescriptor& descriptor)
    //{
    //    descriptor.read(*this);
    //}
    LIAPI std::unique_ptr<class CompoundTag> getCompoundTag();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_READONLYBINARYSTREAM
public:
    class ReadOnlyBinaryStream& operator=(class ReadOnlyBinaryStream const &) = delete;
    ReadOnlyBinaryStream(class ReadOnlyBinaryStream const &) = delete;
    ReadOnlyBinaryStream() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -523625171
     */
    virtual ~ReadOnlyBinaryStream();
    /**
     * @vftbl  1
     * @symbol ?read@ReadOnlyBinaryStream@@EEAA_NPEAX_K@Z
     * @hash   406916814
     */
    virtual bool read(void *, unsigned __int64);
    /**
     * @symbol ??0ReadOnlyBinaryStream@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1935374477
     */
    MCAPI ReadOnlyBinaryStream(std::string const &, bool);
    /**
     * @symbol ??0ReadOnlyBinaryStream@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -713718554
     */
    MCAPI ReadOnlyBinaryStream(std::string &&);
    /**
     * @symbol ?canReadBool@ReadOnlyBinaryStream@@QEBA_NXZ
     * @hash   -1922745222
     */
    MCAPI bool canReadBool() const;
    /**
     * @symbol ?getBool@ReadOnlyBinaryStream@@QEAA_NXZ
     * @hash   1334354298
     */
    MCAPI bool getBool();
    /**
     * @symbol ?getByte@ReadOnlyBinaryStream@@QEAAEXZ
     * @hash   -1467297495
     */
    MCAPI unsigned char getByte();
    /**
     * @symbol ?getDouble@ReadOnlyBinaryStream@@QEAANXZ
     * @hash   -2012416192
     */
    MCAPI double getDouble();
    /**
     * @symbol ?getFloat@ReadOnlyBinaryStream@@QEAAMXZ
     * @hash   644994184
     */
    MCAPI float getFloat();
    /**
     * @symbol ?getReadCompleteResult@ReadOnlyBinaryStream@@QEBA?AW4StreamReadResult@@XZ
     * @hash   -1371143616
     */
    MCAPI enum class StreamReadResult getReadCompleteResult() const;
    /**
     * @symbol ?getSignedBigEndianInt@ReadOnlyBinaryStream@@QEAAHXZ
     * @hash   548827656
     */
    MCAPI int getSignedBigEndianInt();
    /**
     * @symbol ?getSignedInt@ReadOnlyBinaryStream@@QEAAHXZ
     * @hash   437574666
     */
    MCAPI int getSignedInt();
    /**
     * @symbol ?getSignedInt64@ReadOnlyBinaryStream@@QEAA_JXZ
     * @hash   -655337697
     */
    MCAPI __int64 getSignedInt64();
    /**
     * @symbol ?getSignedShort@ReadOnlyBinaryStream@@QEAAFXZ
     * @hash   573908495
     */
    MCAPI short getSignedShort();
    /**
     * @symbol ?getString@ReadOnlyBinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -197295754
     */
    MCAPI std::string getString();
    /**
     * @symbol ?getString@ReadOnlyBinaryStream@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -761969347
     */
    MCAPI bool getString(std::string &);
    /**
     * @symbol ?getUnsignedChar@ReadOnlyBinaryStream@@QEAAEXZ
     * @hash   -1026270135
     */
    MCAPI unsigned char getUnsignedChar();
    /**
     * @symbol ?getUnsignedInt@ReadOnlyBinaryStream@@QEAAIXZ
     * @hash   315307476
     */
    MCAPI unsigned int getUnsignedInt();
    /**
     * @symbol ?getUnsignedInt64@ReadOnlyBinaryStream@@QEAA_KXZ
     * @hash   1059316567
     */
    MCAPI unsigned __int64 getUnsignedInt64();
    /**
     * @symbol ?getUnsignedShort@ReadOnlyBinaryStream@@QEAAGXZ
     * @hash   -989343463
     */
    MCAPI unsigned short getUnsignedShort();
    /**
     * @symbol ?getUnsignedVarInt@ReadOnlyBinaryStream@@QEAAIXZ
     * @hash   1378784210
     */
    MCAPI unsigned int getUnsignedVarInt();
    /**
     * @symbol ?getUnsignedVarInt64@ReadOnlyBinaryStream@@QEAA_KXZ
     * @hash   -27409769
     */
    MCAPI unsigned __int64 getUnsignedVarInt64();
    /**
     * @symbol ?getVarInt@ReadOnlyBinaryStream@@QEAAHXZ
     * @hash   1793223352
     */
    MCAPI int getVarInt();
    /**
     * @symbol ?getVarInt64@ReadOnlyBinaryStream@@QEAA_JXZ
     * @hash   -1306311133
     */
    MCAPI __int64 getVarInt64();

};