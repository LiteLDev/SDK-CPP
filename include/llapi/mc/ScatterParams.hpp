/**
 * @file  ScatterParams.hpp
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
 * @brief MC class ScatterParams.
 *
 */
class ScatterParams {

#define AFTER_EXTRA
// Add Member There
public:
class ScatteredPositions {
public:
    ScatteredPositions() = delete;
    ScatteredPositions(ScatteredPositions const&) = delete;
    ScatteredPositions(ScatteredPositions const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS
public:
    class ScatterParams& operator=(class ScatterParams const &) = delete;
    ScatterParams(class ScatterParams const &) = delete;
    ScatterParams() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData@ScatterParams@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1115771080
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?readAdditionalSaveData@ScatterParams@@QEAAXAEBVCompoundTag@@@Z
     * @hash   1346431260
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @symbol ?scatter@ScatterParams@@QEBA?AVScatteredPositions@1@AEAVRenderParams@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   189300492
     */
    MCAPI class ScatterParams::ScatteredPositions scatter(class RenderParams &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??1ScatterParams@@QEAA@XZ
     * @hash   1724064960
     */
    MCAPI ~ScatterParams();
    /**
     * @symbol ?initMolangParams@ScatterParams@@SAXAEAVRenderParams@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1143481584
     */
    MCAPI static void initMolangParams(class RenderParams &, class BlockPos const &, class Random &);
    /**
     * @symbol ?initScatterParamIndices@ScatterParams@@SAXXZ
     * @hash   327646003
     */
    MCAPI static void initScatterParamIndices();

//private:
    /**
     * @symbol ?_getPos@ScatterParams@@AEBA?AVBlockPos@@IAEBV2@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   1680121525
     */
    MCAPI class BlockPos _getPos(unsigned int, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol ?_parseExpressionNodeFloat@ScatterParams@@AEAAXAEBVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEAVExpressionNode@@M@Z
     * @hash   -1729984252
     */
    MCAPI void _parseExpressionNodeFloat(class CompoundTag const &, std::string const &, std::string const &, class ExpressionNode &, float);

private:

};