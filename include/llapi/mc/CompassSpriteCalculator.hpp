/**
 * @file  CompassSpriteCalculator.hpp
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
 * @brief MC class CompassSpriteCalculator.
 *
 */
class CompassSpriteCalculator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSSPRITECALCULATOR
public:
    class CompassSpriteCalculator& operator=(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator() = delete;
#endif

public:
    /**
     * @symbol ??0CompassSpriteCalculator@@QEAA@V?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@V?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@2@MM@Z
     * @hash   49531555
     */
    MCAPI CompassSpriteCalculator(class std::function<class BlockPos (class BlockSource const *, class Actor *)>, class std::function<bool (class BlockSource const *, class Actor *)>, float, float);
    /**
     * @symbol ?getFrame@CompassSpriteCalculator@@QEBAHXZ
     * @hash   -576888492
     */
    MCAPI int getFrame() const;
    /**
     * @symbol ?update@CompassSpriteCalculator@@QEAAHAEAVActor@@_N@Z
     * @hash   -230954822
     */
    MCAPI int update(class Actor &, bool);
    /**
     * @symbol ?updateFromPosition@CompassSpriteCalculator@@QEAAHPEBVBlockSource@@AEBVBlockPos@@MMM_N22@Z
     * @hash   -427875823
     */
    MCAPI int updateFromPosition(class BlockSource const *, class BlockPos const &, float, float, float, bool, bool, bool);
    /**
     * @symbol ?updateFromPosition@CompassSpriteCalculator@@QEAAHPEBVBlockSource@@PEAVActor@@MMM_N2@Z
     * @hash   1634281950
     */
    MCAPI int updateFromPosition(class BlockSource const *, class Actor *, float, float, float, bool, bool);
    /**
     * @symbol ??1CompassSpriteCalculator@@QEAA@XZ
     * @hash   -411112091
     */
    MCAPI ~CompassSpriteCalculator();
    /**
     * @symbol ?isInLastDeathDimension@CompassSpriteCalculator@@SA?AV?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@std@@XZ
     * @hash   -1148381475
     */
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInLastDeathDimension();
    /**
     * @symbol ?isInOverworldDimension@CompassSpriteCalculator@@SA?AV?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@std@@XZ
     * @hash   1635357565
     */
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInOverworldDimension();
    /**
     * @symbol ?pointTowardsLastDeathLocation@CompassSpriteCalculator@@SA?AV?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@XZ
     * @hash   261289194
     */
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsLastDeathLocation();
    /**
     * @symbol ?pointTowardsSpawnPoint@CompassSpriteCalculator@@SA?AV?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@XZ
     * @hash   -1098972628
     */
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsSpawnPoint();

};