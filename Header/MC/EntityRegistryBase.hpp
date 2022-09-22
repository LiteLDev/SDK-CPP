/**
 * @file  EntityRegistryBase.hpp
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
 * @brief MC class EntityRegistryBase.
 *
 */
class EntityRegistryBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYBASE
public:
    class EntityRegistryBase& operator=(class EntityRegistryBase const &) = delete;
    EntityRegistryBase(class EntityRegistryBase const &) = delete;
    EntityRegistryBase() = delete;
#endif

public:
    /**
     * @symbol ??0EntityRegistryBase@@QEAA@AEAV?$basic_registry@VEntityId@@@entt@@@Z
     * @hash   1760265351
     */
    MCAPI EntityRegistryBase(class entt::basic_registry<class EntityId> &);
    /**
     * @symbol ?isValidEntity@EntityRegistryBase@@QEBA_NAEBVEntityContextBase@@@Z
     * @hash   -1405771327
     */
    MCAPI bool isValidEntity(class EntityContextBase const &) const;
    /**
     * @symbol ??1EntityRegistryBase@@QEAA@XZ
     * @hash   -105198709
     */
    MCAPI ~EntityRegistryBase();

//protected:
    /**
     * @symbol ?_assertValidRegistry@EntityRegistryBase@@IEBAXAEBVEntityContextBase@@@Z
     * @hash   -722292235
     */
    MCAPI void _assertValidRegistry(class EntityContextBase const &) const;

protected:
    /**
     * @symbol ?mRegistryCount@EntityRegistryBase@@1U?$atomic@I@std@@A
     * @hash   1038602328
     */
    MCAPI static struct std::atomic<unsigned int> mRegistryCount;

};