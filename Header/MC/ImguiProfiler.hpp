/**
 * @file  ImguiProfiler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ImguiProfiler.
 *
 */
struct ImguiProfiler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER
public:
    struct ImguiProfiler& operator=(struct ImguiProfiler const &) = delete;
    ImguiProfiler(struct ImguiProfiler const &) = delete;
    ImguiProfiler() = delete;
#endif

public:
    /**
     * @symbol ?getTimeAccumulator@ImguiProfiler@@QEAA?AVTimeAccumulator@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     * @hash   -2022786814
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const &, std::string const &, bool);
    /**
     * @symbol ?reset@ImguiProfiler@@QEAAXXZ
     * @hash   -989201133
     */
    MCAPI void reset();

//private:

};