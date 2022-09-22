/**
 * @file  ManagedWanderingTraderDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ManagedWanderingTraderDescription.
 *
 */
class ManagedWanderingTraderDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERDESCRIPTION
public:
    class ManagedWanderingTraderDescription& operator=(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@ManagedWanderingTraderDescription@@UEBAPEBDXZ
     * @hash   122567100
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   1371876550
     */
    virtual ~ManagedWanderingTraderDescription();
    /**
     * @vftbl  3
     * @symbol ?serializeData@ManagedWanderingTraderDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   573440737
     */
    virtual void serializeData(class Json::Value &) const;

};