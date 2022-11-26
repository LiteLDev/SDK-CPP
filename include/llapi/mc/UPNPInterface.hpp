/**
 * @file  UPNPInterface.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UPNPInterface.
 *
 */
class UPNPInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPNPINTERFACE
public:
    class UPNPInterface& operator=(class UPNPInterface const &) = delete;
    UPNPInterface(class UPNPInterface const &) = delete;
    UPNPInterface() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPNPINTERFACE
    /**
     * @symbol ?_onDisable@UPNPInterface@@EEAAXXZ
     * @hash   391220295
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable@UPNPInterface@@EEAAXXZ
     * @hash   -1666693922
     */
    MCVAPI void _onEnable();
#endif
    /**
     * @symbol ??0UPNPInterface@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     * @hash   -815228018
     */
    MCAPI UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol ?reset@UPNPInterface@@QEAAXXZ
     * @hash   -1973905149
     */
    MCAPI void reset();
    /**
     * @symbol ?tick@UPNPInterface@@QEAAXXZ
     * @hash   1434474605
     */
    MCAPI void tick();

};