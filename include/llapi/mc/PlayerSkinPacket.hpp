/**
 * @file  PlayerSkinPacket.hpp
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
 * @brief MC class PlayerSkinPacket.
 *
 */
class PlayerSkinPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSKINPACKET
public:
    class PlayerSkinPacket& operator=(class PlayerSkinPacket const &) = delete;
    PlayerSkinPacket(class PlayerSkinPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   530668144
     */
    virtual ~PlayerSkinPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerSkinPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1889952632
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerSkinPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   64057893
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerSkinPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1417748078
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  4
     * @symbol ?readExtended@PlayerSkinPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -979048441
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerSkinPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -775442446
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerSkinPacket@@QEAA@XZ
     * @hash   1381725922
     */
    MCAPI PlayerSkinPacket();

};