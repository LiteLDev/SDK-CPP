/**
 * @file  InternalComponentRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalComponentRegistry.
 *
 */
class InternalComponentRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALCOMPONENTREGISTRY
public:
    class InternalComponentRegistry& operator=(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InternalComponentRegistry();
    /**
     * @hash   1635329299
     * @vftbl  1
     * @symbol ?registerComponents@InternalComponentRegistry@@UEAAXXZ
     */
    virtual void registerComponents();
    /**
     * @hash   -439001135
     * @symbol ?addComponentSaveData@InternalComponentRegistry@@QEAAXAEBVActor@@AEAVCompoundTag@@@Z
     */
    MCAPI void addComponentSaveData(class Actor const &, class CompoundTag &);
    /**
     * @hash   -958470472
     * @symbol ?initializeComponents@InternalComponentRegistry@@QEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @hash   -1905590407
     * @symbol ?INTERNAL_COMPONENTS@InternalComponentRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const INTERNAL_COMPONENTS;

//protected:
    /**
     * @hash   -221490865
     * @symbol ?_initializeComponents@InternalComponentRegistry@@IEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void _initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @hash   -52925866
     * @symbol ?_getComponentScope@InternalComponentRegistry@@KAPEBVCompoundTag@@AEBV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class CompoundTag const * _getComponentScope(class CompoundTag const &, std::string const &);
    /**
     * @hash   -832956439
     * @symbol ?_getOrCreateComponentScope@InternalComponentRegistry@@KAAEAVCompoundTag@@AEAV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class CompoundTag & _getOrCreateComponentScope(class CompoundTag &, std::string const &);

protected:

};