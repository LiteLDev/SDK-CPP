/**
 * @file  EnvironmentRequirement.hpp
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
 * @brief MC structure EnvironmentRequirement.
 *
 */
struct EnvironmentRequirement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTREQUIREMENT
public:
    struct EnvironmentRequirement& operator=(struct EnvironmentRequirement const &) = delete;
    EnvironmentRequirement(struct EnvironmentRequirement const &) = delete;
    EnvironmentRequirement() = delete;
#endif

public:
    /**
     * @symbol ?addBlockDescriptor@EnvironmentRequirement@@QEAAXAEBVBlockDescriptor@@@Z
     * @hash   -239427864
     */
    MCAPI void addBlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ??1EnvironmentRequirement@@QEAA@XZ
     * @hash   -2025017478
     */
    MCAPI ~EnvironmentRequirement();

};