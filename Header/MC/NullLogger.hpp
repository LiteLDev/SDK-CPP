/**
 * @file  NullLogger.hpp
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
 * @brief MC class NullLogger.
 *
 */
class NullLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLLOGGER
public:
    class NullLogger& operator=(class NullLogger const &) = delete;
    NullLogger(class NullLogger const &) = delete;
    NullLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1301078081
     */
    virtual ~NullLogger();
    /**
     * @vftbl  1
     * @symbol ?Logv@NullLogger@@UEAAXPEBDPEAD@Z
     * @hash   -1016232635
     */
    virtual void Logv(char const *, char *);
    /**
     * @symbol ?instance@NullLogger@@2V1@A
     * @hash   65295151
     */
    MCAPI static class NullLogger instance;

};