/**
 * @file  IcebergFeature.hpp
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
 * @brief MC class IcebergFeature.
 *
 */
class IcebergFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEBERGFEATURE
public:
    class IcebergFeature& operator=(class IcebergFeature const &) = delete;
    IcebergFeature(class IcebergFeature const &) = delete;
    IcebergFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   807784445
     */
    virtual ~IcebergFeature();
    /**
     * @vftbl  3
     * @symbol ?place@IcebergFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1594015421
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol ?_isIcebergBlock@IcebergFeature@@AEBA_NAEBVBlock@@@Z
     * @hash   -155688059
     */
    MCAPI bool _isIcebergBlock(class Block const &) const;
    /**
     * @symbol ?carve@IcebergFeature@@AEBAXHHAEBVBlockPos@@AEAVBlockSource@@_NM0HH@Z
     * @hash   -1384706827
     */
    MCAPI void carve(int, int, class BlockPos const &, class BlockSource &, bool, float, class BlockPos const &, int, int) const;
    /**
     * @symbol ?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z
     * @hash   1005070073
     */
    MCAPI void generateIcebergBlock(class BlockSource &, class Random &, class BlockPos const &, int, int, int, int, int, int, bool, bool, float, int, class Block const &) const;
    /**
     * @symbol ?heightDependentRadiusRound@IcebergFeature@@AEBAHAEAVRandom@@HHH@Z
     * @hash   -470970937
     */
    MCAPI int heightDependentRadiusRound(class Random &, int, int, int) const;
    /**
     * @symbol ?setIcebergBlock@IcebergFeature@@AEBAXAEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@HH_N3AEBVBlock@@@Z
     * @hash   -503296839
     */
    MCAPI void setIcebergBlock(class BlockPos const &, class BlockSource &, class Random &, int, int, bool, bool, class Block const &) const;
    /**
     * @symbol ?signedDistanceEllipse@IcebergFeature@@AEBAMHHAEBVBlockPos@@HHM@Z
     * @hash   -1967698323
     */
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const &, int, int, float) const;

private:

};