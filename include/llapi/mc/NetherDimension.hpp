/**
 * @file  NetherDimension.hpp
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
 * @brief MC class NetherDimension.
 *
 */
class NetherDimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERDIMENSION
public:
    class NetherDimension& operator=(class NetherDimension const &) = delete;
    NetherDimension(class NetherDimension const &) = delete;
    NetherDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERDIMENSION
    /**
     * @symbol ?_upgradeOldLimboEntity@NetherDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
     * @hash   376329662
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @symbol ?_wrapStorageForVersionCompatibility@NetherDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
     * @hash   1376038647
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @symbol ?createGenerator@NetherDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
     * @hash   -1420464045
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @symbol ?fixWallChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   -1580970882
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol ?forceCheckAllNeighChunkSavedStat@NetherDimension@@UEBA_NXZ
     * @hash   -1774717769
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    /**
     * @symbol ?getDefaultBiome@NetherDimension@@UEBA?AVHashedString@@XZ
     * @hash   948248664
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @symbol ?getTimeOfDay@NetherDimension@@UEBAMHM@Z
     * @hash   540318437
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @symbol ?init@NetherDimension@@UEAAXXZ
     * @hash   -1445634375
     */
    MCVAPI void init();
    /**
     * @symbol ?isFoggyAt@NetherDimension@@UEBA_NHH@Z
     * @hash   1834769427
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @symbol ?isNaturalDimension@NetherDimension@@UEBA_NXZ
     * @hash   1042654865
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @symbol ?isValidSpawn@NetherDimension@@UEBA_NHH@Z
     * @hash   604717779
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @symbol ?levelChunkNeedsUpgrade@NetherDimension@@UEBA_NAEBVLevelChunk@@@Z
     * @hash   346907268
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @symbol ?mayRespawnViaBed@NetherDimension@@UEBA_NXZ
     * @hash   1035833312
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @symbol ?showSky@NetherDimension@@UEBA_NXZ
     * @hash   -1846408114
     */
    MCVAPI bool showSky() const;
    /**
     * @symbol ?translatePosAcrossDimension@NetherDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   683892817
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?upgradeLevelChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
     * @hash   -1090698770
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @symbol ??0NetherDimension@@QEAA@AEAVLevel@@AEAVScheduler@@@Z
     * @hash   1974008436
     */
    MCAPI NetherDimension(class Level &, class Scheduler &);

//private:
    /**
     * @symbol ?makeStructureFeatures@NetherDimension@@CA?AV?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@IAEBVBaseGameVersion@@@Z
     * @hash   765367129
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(unsigned int, class BaseGameVersion const &);

private:

};