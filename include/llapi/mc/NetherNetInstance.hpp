/**
 * @file  NetherNetInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure NetherNetInstance.
 *
 */
struct NetherNetInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETINSTANCE
public:
    struct NetherNetInstance& operator=(struct NetherNetInstance const &) = delete;
    NetherNetInstance(struct NetherNetInstance const &) = delete;
    NetherNetInstance() = delete;
#endif

public:
    /**
     * @symbol ?SetBroadcastRequestCallback@NetherNetInstance@@QEAAX$$QEAV?$function@$$A6A_NPEAXPEAH@Z@std@@@Z
     * @hash   -207092798
     */
    MCAPI void SetBroadcastRequestCallback(class std::function<bool (void *, int *)> &&);
    /**
     * @symbol ?SetBroadcastResponseCallback@NetherNetInstance@@QEAAX$$QEAV?$function@$$A6AXAEBUNetworkID@NetherNet@@PEBXH@Z@std@@@Z
     * @hash   -20095648
     */
    MCAPI void SetBroadcastResponseCallback(class std::function<void (struct NetherNet::NetworkID const &, void const *, int)> &&);

};