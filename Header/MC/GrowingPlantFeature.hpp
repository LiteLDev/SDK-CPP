/**
 * @file  GrowingPlantFeature.hpp
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
 * @brief MC class GrowingPlantFeature.
 *
 */
class GrowingPlantFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWINGPLANTFEATURE
public:
    class GrowingPlantFeature& operator=(class GrowingPlantFeature const &) = delete;
    GrowingPlantFeature(class GrowingPlantFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -945418008
     */
    virtual ~GrowingPlantFeature();
    /**
     * @vftbl  1
     * @symbol ?place@GrowingPlantFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   1779603107
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol ??0GrowingPlantFeature@@QEAA@XZ
     * @hash   1195062150
     */
    MCAPI GrowingPlantFeature();

};