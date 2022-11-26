/**
 * @file  MapItemSavedData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MapDecoration.hpp"
#include "MapItemTrackedActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItemSavedData.
 *
 */
class MapItemSavedData {

#define AFTER_EXTRA
// Add Member There
public:
struct ChunkBounds {
    ChunkBounds() = delete;
    ChunkBounds(ChunkBounds const&) = delete;
    ChunkBounds(ChunkBounds const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMSAVEDDATA
public:
    class MapItemSavedData& operator=(class MapItemSavedData const &) = delete;
    MapItemSavedData(class MapItemSavedData const &) = delete;
    MapItemSavedData() = delete;
#endif

public:
    /**
     * @symbol ??0MapItemSavedData@@QEAA@UActorUniqueID@@_N@Z
     * @hash   775264506
     */
    MCAPI MapItemSavedData(struct ActorUniqueID, bool);
    /**
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@W4Type@MapDecoration@@@Z
     * @hash   -1641140221
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum class MapDecoration::Type);
    /**
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     * @hash   2053779192
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @symbol ?areClientPixelsDirty@MapItemSavedData@@QEBA_NXZ
     * @hash   695984374
     */
    MCAPI bool areClientPixelsDirty() const;
    /**
     * @symbol ?checkNeedsResampling@MapItemSavedData@@QEAAXXZ
     * @hash   1581802229
     */
    MCAPI void checkNeedsResampling();
    /**
     * @symbol ?copyMapData@MapItemSavedData@@QEAAXAEBV1@@Z
     * @hash   -148089463
     */
    MCAPI void copyMapData(class MapItemSavedData const &);
    /**
     * @symbol ?deserialize@MapItemSavedData@@QEAAXAEBVCompoundTag@@@Z
     * @hash   124435652
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @symbol ?enableUnlimitedTracking@MapItemSavedData@@QEAAXXZ
     * @hash   -1593096413
     */
    MCAPI void enableUnlimitedTracking();
    /**
     * @symbol ?getClientPixels@MapItemSavedData@@QEAAAEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@std@@XZ
     * @hash   -2119806778
     */
    MCAPI std::vector<struct ClientTerrainPixel> & getClientPixels();
    /**
     * @symbol ?getClientSamplingLock@MapItemSavedData@@QEAAPEAVSpinLock@@XZ
     * @hash   -123111167
     */
    MCAPI class SpinLock * getClientSamplingLock();
    /**
     * @symbol ?getFullDataPacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ
     * @hash   627708890
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    /**
     * @symbol ?getMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     * @hash   -175738434
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @symbol ?getParentMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     * @hash   -737831894
     */
    MCAPI struct ActorUniqueID getParentMapId() const;
    /**
     * @symbol ?getPixels@MapItemSavedData@@QEBA?AV?$buffer_span@I@@XZ
     * @hash   -1422754656
     */
    MCAPI class buffer_span<unsigned int> getPixels() const;
    /**
     * @symbol ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@@Z
     * @hash   -232346806
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    /**
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     * @hash   -1087181907
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEAVLevel@@AEBVBlockPos@@@Z
     * @hash   -1818500916
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    /**
     * @symbol ?hasParentMap@MapItemSavedData@@QEBA_NXZ
     * @hash   46215786
     */
    MCAPI bool hasParentMap() const;
    /**
     * @symbol ?isAdjacent@MapItemSavedData@@QEBA_NAEBV1@H@Z
     * @hash   -440807373
     */
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    /**
     * @symbol ?isChunkAllEmpty@MapItemSavedData@@QEBA_NUChunkBounds@1@@Z
     * @hash   7257612
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    /**
     * @symbol ?isFullyExplored@MapItemSavedData@@QEBA_NXZ
     * @hash   780462222
     */
    MCAPI bool isFullyExplored() const;
    /**
     * @symbol ?isLocked@MapItemSavedData@@QEBA_NXZ
     * @hash   1353647634
     */
    MCAPI bool isLocked() const;
    /**
     * @symbol ?needsResampling@MapItemSavedData@@QEBA_NXZ
     * @hash   137317866
     */
    MCAPI bool needsResampling() const;
    /**
     * @symbol ?removeTrackedMapEntity@MapItemSavedData@@QEAAXAEBVBlockPos@@@Z
     * @hash   -1554506898
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    /**
     * @symbol ?save@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     * @hash   1869462248
     */
    MCAPI void save(class LevelStorage &);
    /**
     * @symbol ?serialize@MapItemSavedData@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -637323064
     */
    MCAPI void serialize(class CompoundTag &) const;
    /**
     * @symbol ?setClientPixelsDirty@MapItemSavedData@@QEAAX_N@Z
     * @hash   1977036658
     */
    MCAPI void setClientPixelsDirty(bool);
    /**
     * @symbol ?setDirtyForSaveAndPixelData@MapItemSavedData@@QEAAXXZ
     * @hash   -904874477
     */
    MCAPI void setDirtyForSaveAndPixelData();
    /**
     * @symbol ?setLocked@MapItemSavedData@@QEAAXXZ
     * @hash   -194078909
     */
    MCAPI void setLocked();
    /**
     * @symbol ?setMapSection@MapItemSavedData@@QEAAXV?$buffer_span@I@@UChunkBounds@1@@Z
     * @hash   -2082012938
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    /**
     * @symbol ?setOrigin@MapItemSavedData@@QEAAXVVec3@@HV?$AutomaticID@VDimension@@H@@_N2AEBVBlockPos@@@Z
     * @hash   -32664214
     */
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    /**
     * @symbol ?setPixel@MapItemSavedData@@QEAA_NIII@Z
     * @hash   -402369901
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int);
    /**
     * @symbol ?setPixelDirty@MapItemSavedData@@QEAAXII@Z
     * @hash   1900617611
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    /**
     * @symbol ?setScale@MapItemSavedData@@QEAAXH@Z
     * @hash   -1327464346
     */
    MCAPI void setScale(int);
    /**
     * @symbol ?setScaleAndParentMapId@MapItemSavedData@@QEAAXHUActorUniqueID@@@Z
     * @hash   -296845667
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    /**
     * @symbol ?tickByBlock@MapItemSavedData@@QEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
     * @hash   -618074923
     */
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    /**
     * @symbol ?tickCarriedBy@MapItemSavedData@@QEAAXAEAVActor@@PEBVCompoundTag@@@Z
     * @hash   -1850332016
     */
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    /**
     * @symbol ?trySave@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     * @hash   -1828845632
     */
    MCAPI void trySave(class LevelStorage &);
    /**
     * @symbol ??1MapItemSavedData@@QEAA@XZ
     * @hash   624978172
     */
    MCAPI ~MapItemSavedData();
    /**
     * @symbol ?getSerializationKey@MapItemSavedData@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
     * @hash   335019017
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

//private:
    /**
     * @symbol ?_addDecoration@MapItemSavedData@@AEAAXW4Type@MapDecoration@@AEAVLevel@@AEBUUniqueId@MapItemTrackedActor@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
     * @hash   99519485
     */
    MCAPI void _addDecoration(enum class MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    /**
     * @symbol ?_addTrackedMapEntity@MapItemSavedData@@AEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBUUniqueId@MapItemTrackedActor@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     * @hash   2053991325
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @symbol ?_deserializeData@MapItemSavedData@@AEAAXAEBVCompoundTag@@@Z
     * @hash   993030534
     */
    MCAPI void _deserializeData(class CompoundTag const &);
    /**
     * @symbol ?_removeDecoration@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     * @hash   1298103241
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol ?_removeTrackedMapEntity@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     * @hash   1068881892
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol ?_updateTrackedEntityDecoration@MapItemSavedData@@AEAA_NAEAVBlockSource@@V?$shared_ptr@VMapItemTrackedActor@@@std@@@Z
     * @hash   -1866053481
     */
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    /**
     * @symbol ?_updateTrackedEntityDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@@Z
     * @hash   -1917090596
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    /**
     * @symbol ?_updateTrackedPlayerDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@AEAVPlayer@@AEAVVec3@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVColor@mce@@V?$AutomaticID@VDimension@@H@@AEAW4Type@MapDecoration@@@Z
     * @hash   1580426666
     */
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum class MapDecoration::Type &);

private:

};