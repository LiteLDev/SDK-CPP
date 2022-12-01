/**
 * @file  MoveActorAbsoluteData.hpp
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
 * @brief MC class MoveActorAbsoluteData.
 *
 */
class MoveActorAbsoluteData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEDATA
public:
    class MoveActorAbsoluteData& operator=(class MoveActorAbsoluteData const &) = delete;
    MoveActorAbsoluteData(class MoveActorAbsoluteData const &) = delete;
#endif

public:
    /**
     * @symbol ??0MoveActorAbsoluteData@@QEAA@XZ
     * @hash   -414933951
     */
    MCAPI MoveActorAbsoluteData();
    /**
     * @symbol ??0MoveActorAbsoluteData@@QEAA@AEBVActor@@@Z
     * @hash   2141342986
     */
    MCAPI MoveActorAbsoluteData(class Actor const &);
    /**
     * @symbol ?calculateDelta@MoveActorAbsoluteData@@QEBA?AVMoveActorDeltaData@@AEBV1@@Z
     * @hash   -2038679753
     */
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const &) const;
    /**
     * @symbol ?getRot@MoveActorAbsoluteData@@QEBA?AVVec2@@XZ
     * @hash   -1274547788
     */
    MCAPI class Vec2 getRot() const;
    /**
     * @symbol ?getYBodyRot@MoveActorAbsoluteData@@QEBAMXZ
     * @hash   -955664502
     */
    MCAPI float getYBodyRot() const;
    /**
     * @symbol ?getYHeadRot@MoveActorAbsoluteData@@QEBAMXZ
     * @hash   -1679404898
     */
    MCAPI float getYHeadRot() const;
    /**
     * @symbol ?isDifferenceSignificant@MoveActorAbsoluteData@@QEBA_NAEBV1@AEBVVec3@@@Z
     * @hash   2103266436
     */
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const &, class Vec3 const &) const;
    /**
     * @symbol ?setRot@MoveActorAbsoluteData@@QEAAXAEBVVec2@@@Z
     * @hash   -2049051210
     */
    MCAPI void setRot(class Vec2 const &);
    /**
     * @symbol ?setYBodyRot@MoveActorAbsoluteData@@QEAAXM@Z
     * @hash   1104793704
     */
    MCAPI void setYBodyRot(float);
    /**
     * @symbol ?setYHeadRot@MoveActorAbsoluteData@@QEAAXM@Z
     * @hash   143232004
     */
    MCAPI void setYHeadRot(float);

};