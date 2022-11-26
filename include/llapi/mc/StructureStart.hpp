/**
 * @file  StructureStart.hpp
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
 * @brief MC class StructureStart.
 *
 */
class StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESTART
public:
    class StructureStart& operator=(class StructureStart const &) = delete;
    StructureStart(class StructureStart const &) = delete;
    StructureStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   943355385
     */
    virtual ~StructureStart();
    /**
     * @vftbl  1
     * @symbol ?postProcess@StructureStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -432853780
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  2
     * @symbol ?isValid@StructureStart@@UEBA_NXZ
     * @hash   1229583115
     */
    virtual bool isValid() const;
    /**
     * @symbol ?postProcessMobsAt@StructureStart@@QEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -634894380
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

//protected:
    /**
     * @symbol ?calculateBoundingBox@StructureStart@@IEAAXXZ
     * @hash   -1781183771
     */
    MCAPI void calculateBoundingBox();
    /**
     * @symbol ?moveBoundingBoxes@StructureStart@@IEAAXH@Z
     * @hash   1527442695
     */
    MCAPI void moveBoundingBoxes(int);
    /**
     * @symbol ?moveInsideHeights@StructureStart@@IEAAXAEAVRandom@@FF@Z
     * @hash   1118344150
     */
    MCAPI void moveInsideHeights(class Random &, short, short);
    /**
     * @symbol ?moveToBelowSeaLevel@StructureStart@@IEAAXFFAEAVRandom@@H@Z
     * @hash   499836596
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random &, int);

protected:

};