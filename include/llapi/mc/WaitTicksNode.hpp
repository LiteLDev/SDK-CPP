/**
 * @file  WaitTicksNode.hpp
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
 * @brief MC class WaitTicksNode.
 *
 */
class WaitTicksNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSNODE
public:
    class WaitTicksNode& operator=(class WaitTicksNode const &) = delete;
    WaitTicksNode(class WaitTicksNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1795273457
     */
    virtual ~WaitTicksNode();
    /**
     * @vftbl  1
     * @symbol ?tick@WaitTicksNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -451559952
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@WaitTicksNode@@EEAAXAEAVActor@@@Z
     * @hash   889153172
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0WaitTicksNode@@QEAA@XZ
     * @hash   537811167
     */
    MCAPI WaitTicksNode();

};