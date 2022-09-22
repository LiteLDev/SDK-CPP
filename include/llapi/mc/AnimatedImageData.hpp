/**
 * @file  AnimatedImageData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimatedImageData.
 *
 */
class AnimatedImageData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEDIMAGEDATA
public:
    class AnimatedImageData& operator=(class AnimatedImageData const &) = delete;
    AnimatedImageData() = delete;
#endif

public:
    /**
     * @hash   400382222
     * @symbol ??0AnimatedImageData@@QEAA@W4AnimatedTextureType@persona@@W4AnimationExpression@2@AEBUImage@mce@@M@Z
     */
    MCAPI AnimatedImageData(enum persona::AnimatedTextureType, enum persona::AnimationExpression, struct mce::Image const &, float);
    /**
     * @hash   159234209
     * @symbol ??0AnimatedImageData@@QEAA@AEBV0@@Z
     */
    MCAPI AnimatedImageData(class AnimatedImageData const &);

};