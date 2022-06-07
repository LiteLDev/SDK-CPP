// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkChunkPublisher {

#define AFTER_EXTRA
// Add Member There
public:
    ChunkViewSource* getChunkViewSource() {
        // in function NetworkChunkPublisher::clearRegion
        // - Call ChunkViewSource::clear(ChunkViewSource* this);

        return *((ChunkViewSource**)((__int64)this + 0xE0));
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHER
public:
    class NetworkChunkPublisher& operator=(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKCHUNKPUBLISHER
public:
#endif
    MCAPI NetworkChunkPublisher(class Level &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, class NetworkIdentifier const &, unsigned char);
    MCAPI void clearRegion();
    MCAPI void destroyRegion();
    MCAPI int getChunksSentSinceStart() const;
    MCAPI bool is2DPositionRelevant(class BlockPos const &) const;
    MCAPI void moveRegion(class BlockPos const &, unsigned int, class Vec3 const &, float);
    MCAPI void prepareRegion(class ChunkSource &, class ChunkPos &);
    MCAPI void sendQueuedChunks();

//private:
    MCAPI bool _sendQueuedChunk(class ChunkPos const &, class ClientBlobCache::Server::TransferBuilder *);
    MCAPI void _serializeAndCache(class LevelChunkPacket &, class ClientBlobCache::Server::TransferBuilder &, class std::function<void (class VarIntDataOutput &)> &&);

private:


};