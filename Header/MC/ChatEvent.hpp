/**
 * @file  ChatEvent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ChatEvent.
 *
 */
struct ChatEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHATEVENT
public:
    struct ChatEvent& operator=(struct ChatEvent const &) = delete;
    ChatEvent() = delete;
#endif

public:
    /**
     * @symbol ??0ChatEvent@@QEAA@AEBU0@@Z
     * @hash   -741629515
     */
    MCAPI ChatEvent(struct ChatEvent const &);
    /**
     * @symbol ??0ChatEvent@@QEAA@$$QEAU0@@Z
     * @hash   -894395077
     */
    MCAPI ChatEvent(struct ChatEvent &&);
    /**
     * @symbol ??1ChatEvent@@QEAA@XZ
     * @hash   378761758
     */
    MCAPI ~ChatEvent();

};