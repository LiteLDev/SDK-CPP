/**
 * @file  RepeatUntilSuccessDefinition.hpp
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
 * @brief MC class RepeatUntilSuccessDefinition.
 *
 */
class RepeatUntilSuccessDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSDEFINITION
public:
    class RepeatUntilSuccessDefinition& operator=(class RepeatUntilSuccessDefinition const &) = delete;
    RepeatUntilSuccessDefinition(class RepeatUntilSuccessDefinition const &) = delete;
    RepeatUntilSuccessDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1830156739
     */
    virtual ~RepeatUntilSuccessDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@RepeatUntilSuccessDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   -2072984159
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};