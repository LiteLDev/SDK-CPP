/**
 * @file  WaitDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaitDefinition.
 *
 */
class WaitDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITDEFINITION
public:
    class WaitDefinition& operator=(class WaitDefinition const &) = delete;
    WaitDefinition(class WaitDefinition const &) = delete;
    WaitDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -115093646
     */
    virtual ~WaitDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@WaitDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   282440636
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};