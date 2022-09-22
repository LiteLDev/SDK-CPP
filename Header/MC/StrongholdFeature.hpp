/**
 * @file  StrongholdFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrongholdFeature.
 *
 */
class StrongholdFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct StrongholdResult {
    StrongholdResult() = delete;
    StrongholdResult(StrongholdResult const&) = delete;
    StrongholdResult(StrongholdResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE
public:
    class StrongholdFeature& operator=(class StrongholdFeature const &) = delete;
    StrongholdFeature(class StrongholdFeature const &) = delete;
    StrongholdFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1957096974
     */
    virtual ~StrongholdFeature();
    /**
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@StrongholdFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     * @hash   694899399
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  5
     * @symbol ?isFeatureChunk@StrongholdFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   1465710936
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol ?createStructureStart@StrongholdFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     * @hash   -1119487447
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol ??0StrongholdFeature@@QEAA@PEAVVillageFeature@@I@Z
     * @hash   -862298205
     */
    MCAPI StrongholdFeature(class VillageFeature *, unsigned int);
    /**
     * @symbol ?START_OFFSET@StrongholdFeature@@2VBlockPos@@B
     * @hash   390726097
     */
    MCAPI static class BlockPos const START_OFFSET;

//protected:
    /**
     * @symbol ?generatePositions@StrongholdFeature@@IEAAXAEAVRandom@@AEBVBiomeSource@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   -766850968
     */
    MCAPI void generatePositions(class Random &, class BiomeSource const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);

//private:
    /**
     * @symbol ?_generateStronghold@StrongholdFeature@@AEAA?BUStrongholdResult@1@IAEBVChunkPos@@@Z
     * @hash   -545401164
     */
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const &);
    /**
     * @symbol ?_getNearestStronghold@StrongholdFeature@@AEAA_NAEBVDimension@@IAEBVBlockPos@@AEAV3@_N@Z
     * @hash   1199401879
     */
    MCAPI bool _getNearestStronghold(class Dimension const &, unsigned int, class BlockPos const &, class BlockPos &, bool);

protected:

private:

};