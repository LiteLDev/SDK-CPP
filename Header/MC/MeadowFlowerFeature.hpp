/**
 * @file  MeadowFlowerFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MeadowFlowerFeature.
 *
 */
class MeadowFlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEADOWFLOWERFEATURE
public:
    class MeadowFlowerFeature& operator=(class MeadowFlowerFeature const &) = delete;
    MeadowFlowerFeature(class MeadowFlowerFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -730478266
     */
    virtual ~MeadowFlowerFeature();
    /**
     * @vftbl  3
     * @symbol ?place@MeadowFlowerFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1866986578
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0MeadowFlowerFeature@@QEAA@XZ
     * @hash   1432979572
     */
    MCAPI MeadowFlowerFeature();

//private:
    /**
     * @symbol ?getRandomArrayIndex@MeadowFlowerFeature@@AEBAHAEBVBlockPos@@_KM@Z
     * @hash   -1162761524
     */
    MCAPI int getRandomArrayIndex(class BlockPos const &, unsigned __int64, float) const;

private:

};