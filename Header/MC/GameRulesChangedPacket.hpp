/**
 * @file  GameRulesChangedPacket.hpp
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
 * @brief MC class GameRulesChangedPacket.
 *
 */
class GameRulesChangedPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULESCHANGEDPACKET
public:
    class GameRulesChangedPacket& operator=(class GameRulesChangedPacket const &) = delete;
    GameRulesChangedPacket(class GameRulesChangedPacket const &) = delete;
    GameRulesChangedPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2130099839
     */
    virtual ~GameRulesChangedPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@GameRulesChangedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -238659849
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@GameRulesChangedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -725793372
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@GameRulesChangedPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -459554973
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@GameRulesChangedPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -714822861
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};