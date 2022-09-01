/**
 * @file  WaterlilyFeature.hpp
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
 * @brief MC class WaterlilyFeature.
 *
 */
class WaterlilyFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERLILYFEATURE
public:
    class WaterlilyFeature& operator=(class WaterlilyFeature const &) = delete;
    WaterlilyFeature(class WaterlilyFeature const &) = delete;
    WaterlilyFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -422367457
     */
    virtual ~WaterlilyFeature();
    /**
     * @vftbl  3
     * @symbol ?place@WaterlilyFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2091110721
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};