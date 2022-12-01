/**
 * @file  AnimationComponentID.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationComponentID.
 *
 */
class AnimationComponentID {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTID
public:
    class AnimationComponentID& operator=(class AnimationComponentID const &) = delete;
    AnimationComponentID(class AnimationComponentID const &) = delete;
    AnimationComponentID() = delete;
#endif

public:
    /**
     * @symbol ??0AnimationComponentID@@QEAA@AEBUActorUniqueID@@GW4AttachableSlotIndex@@@Z
     * @hash   -827513780
     */
    MCAPI AnimationComponentID(struct ActorUniqueID const &, unsigned short, enum class AttachableSlotIndex);
    /**
     * @symbol ?getHash@AnimationComponentID@@QEBA_KXZ
     * @hash   1339532827
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ??8AnimationComponentID@@QEBA_NAEBV0@@Z
     * @hash   -1943836301
     */
    MCAPI bool operator==(class AnimationComponentID const &) const;

};