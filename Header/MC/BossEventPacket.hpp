/**
 * @file  BossEventPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum BossEventUpdateType
{
    BossEventShow = 0,
    // BossEventRegisterPlayer is sent by the client to the server to request being shown the boss bar.
    BossEventRegisterPlayer = 1,
    BossEventHide = 2,
    // BossEventUnregisterPlayer is sent by the client to request the removal of the boss bar.
    BossEventUnregisterPlayer = 3,
    BossEventHealthPercentage = 4,
    BossEventTitle = 5,
    BossEventAppearanceProperties = 6,
    BossEventTexture = 7,
};
#undef BEFORE_EXTRA

/**
 * @brief MC class BossEventPacket.
 *
 */
class BossEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTPACKET
public:
    class BossEventPacket& operator=(class BossEventPacket const &) = delete;
    BossEventPacket(class BossEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   569734115
     */
    virtual ~BossEventPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@BossEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1421822007
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@BossEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   603460214
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@BossEventPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1769896399
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@BossEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -863586719
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0BossEventPacket@@QEAA@XZ
     * @hash   855963185
     */
    MCAPI BossEventPacket();
    /**
     * @symbol ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@UActorUniqueID@@AEAVBossComponent@@@Z
     * @hash   585915502
     */
    MCAPI BossEventPacket(enum BossEventUpdateType, struct ActorUniqueID, class BossComponent &);
    /**
     * @symbol ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@AEAVRaidBossComponent@@@Z
     * @hash   388598923
     */
    MCAPI BossEventPacket(enum BossEventUpdateType, class RaidBossComponent &);

};