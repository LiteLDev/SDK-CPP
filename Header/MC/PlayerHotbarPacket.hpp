/**
 * @file  PlayerHotbarPacket.hpp
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
 * @brief MC class PlayerHotbarPacket.
 *
 */
class PlayerHotbarPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERHOTBARPACKET
public:
    class PlayerHotbarPacket& operator=(class PlayerHotbarPacket const &) = delete;
    PlayerHotbarPacket(class PlayerHotbarPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1308261735
     */
    virtual ~PlayerHotbarPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerHotbarPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1874129553
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerHotbarPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   546831388
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerHotbarPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1311773941
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerHotbarPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1234480539
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerHotbarPacket@@QEAA@XZ
     * @hash   1146385739
     */
    MCAPI PlayerHotbarPacket();
    /**
     * @symbol ??0PlayerHotbarPacket@@QEAA@IW4ContainerID@@_N@Z
     * @hash   1068557754
     */
    MCAPI PlayerHotbarPacket(unsigned int, enum ContainerID, bool);

};