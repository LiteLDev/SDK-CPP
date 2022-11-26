/**
 * @file  PacketViolationWarningPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketViolationWarningPacket.
 *
 */
class PacketViolationWarningPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONWARNINGPACKET
public:
    class PacketViolationWarningPacket& operator=(class PacketViolationWarningPacket const &) = delete;
    PacketViolationWarningPacket(class PacketViolationWarningPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1064861807
     */
    virtual ~PacketViolationWarningPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PacketViolationWarningPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1742756121
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PacketViolationWarningPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -739437164
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PacketViolationWarningPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -467308941
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PacketViolationWarningPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1551142221
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PacketViolationWarningPacket@@QEAA@XZ
     * @hash   -1764549229
     */
    MCAPI PacketViolationWarningPacket();
    /**
     * @symbol ??0PacketViolationWarningPacket@@QEAA@W4StreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   575992243
     */
    MCAPI PacketViolationWarningPacket(enum class StreamReadResult, enum class PacketViolationResponse, enum class MinecraftPacketIds, std::string const &);

};