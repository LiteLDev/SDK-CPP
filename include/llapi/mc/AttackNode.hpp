/**
 * @file  AttackNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttackNode.
 *
 */
class AttackNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKNODE
public:
    class AttackNode& operator=(class AttackNode const &) = delete;
    AttackNode(class AttackNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AttackNode();
    /**
     * @hash   -1557656441
     * @vftbl  1
     * @symbol ?tick@AttackNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   1695263963
     * @vftbl  2
     * @symbol ?initializeFromDefinition@AttackNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   280314182
     * @symbol ??0AttackNode@@QEAA@XZ
     */
    MCAPI AttackNode();

};