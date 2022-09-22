/**
 * @file  CallbackTokenCancelState.hpp
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
 * @brief MC class CallbackTokenCancelState.
 *
 */
class CallbackTokenCancelState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKENCANCELSTATE
public:
    class CallbackTokenCancelState& operator=(class CallbackTokenCancelState const &) = delete;
    CallbackTokenCancelState(class CallbackTokenCancelState const &) = delete;
#endif

public:
    /**
     * @symbol ??0CallbackTokenCancelState@@QEAA@XZ
     * @hash   1273291151
     */
    MCAPI CallbackTokenCancelState();
    /**
     * @symbol ?wasCanceled@CallbackTokenCancelState@@QEBA_NXZ
     * @hash   370237054
     */
    MCAPI bool wasCanceled() const;

};