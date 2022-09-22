/**
 * @file  CactusFeature.hpp
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
 * @brief MC class CactusFeature.
 *
 */
class CactusFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CACTUSFEATURE
public:
    class CactusFeature& operator=(class CactusFeature const &) = delete;
    CactusFeature(class CactusFeature const &) = delete;
    CactusFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -894346665
     */
    virtual ~CactusFeature();
    /**
     * @vftbl  3
     * @symbol ?place@CactusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1745457597
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};