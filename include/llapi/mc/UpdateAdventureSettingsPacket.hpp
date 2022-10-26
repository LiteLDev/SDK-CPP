/**
 * @file  UpdateAdventureSettingsPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateAdventureSettingsPacket.
 *
 */
class UpdateAdventureSettingsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEADVENTURESETTINGSPACKET
public:
    class UpdateAdventureSettingsPacket& operator=(class UpdateAdventureSettingsPacket const &) = delete;
    UpdateAdventureSettingsPacket(class UpdateAdventureSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -814754176
     */
    virtual ~UpdateAdventureSettingsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@UpdateAdventureSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   258480172
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@UpdateAdventureSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1567304999
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@UpdateAdventureSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   706400430
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@UpdateAdventureSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1814471054
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0UpdateAdventureSettingsPacket@@QEAA@XZ
     * @hash   -520655986
     */
    MCAPI UpdateAdventureSettingsPacket();
    /**
     * @symbol ??0UpdateAdventureSettingsPacket@@QEAA@AEBUAdventureSettings@@@Z
     * @hash   1888493155
     */
    MCAPI UpdateAdventureSettingsPacket(struct AdventureSettings const &);

};