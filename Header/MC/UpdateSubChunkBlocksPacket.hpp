/**
 * @file  UpdateSubChunkBlocksPacket.hpp
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
 * @brief MC class UpdateSubChunkBlocksPacket.
 *
 */
class UpdateSubChunkBlocksPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESUBCHUNKBLOCKSPACKET
public:
    class UpdateSubChunkBlocksPacket& operator=(class UpdateSubChunkBlocksPacket const &) = delete;
    UpdateSubChunkBlocksPacket(class UpdateSubChunkBlocksPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2092371086
     */
    virtual ~UpdateSubChunkBlocksPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@UpdateSubChunkBlocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   687024074
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@UpdateSubChunkBlocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   692778615
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@UpdateSubChunkBlocksPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   444325984
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@UpdateSubChunkBlocksPacket@@MEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   717700121
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0UpdateSubChunkBlocksPacket@@QEAA@XZ
     * @hash   -1559091120
     */
    MCAPI UpdateSubChunkBlocksPacket();
    /**
     * @symbol ??0UpdateSubChunkBlocksPacket@@QEAA@AEBV?$vector@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@V?$allocator@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@@std@@@std@@0@Z
     * @hash   -1945202098
     */
    MCAPI UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const &);
    /**
     * @symbol ?setSubChunkPosition@UpdateSubChunkBlocksPacket@@QEAAXAEBVSubChunkPos@@@Z
     * @hash   807914996
     */
    MCAPI void setSubChunkPosition(class SubChunkPos const &);

};