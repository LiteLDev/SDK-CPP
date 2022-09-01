/**
 * @file  BreedableComponent.hpp
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
 * @brief MC class BreedableComponent.
 *
 */
class BreedableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLECOMPONENT
public:
    class BreedableComponent& operator=(class BreedableComponent const &) = delete;
    BreedableComponent(class BreedableComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BreedableComponent@@QEAA@XZ
     * @hash   1928274699
     */
    MCAPI BreedableComponent();
    /**
     * @symbol ?addAdditionalSaveData@BreedableComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   15127944
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?canMate@BreedableComponent@@QEBA_NAEBVActor@@0@Z
     * @hash   486008817
     */
    MCAPI bool canMate(class Actor const &, class Actor const &) const;
    /**
     * @symbol ?decrementBreedCooldown@BreedableComponent@@QEAAXXZ
     * @hash   1422073941
     */
    MCAPI void decrementBreedCooldown();
    /**
     * @symbol ?decrementLoveTimer@BreedableComponent@@QEAAXXZ
     * @hash   -560586907
     */
    MCAPI void decrementLoveTimer();
    /**
     * @symbol ?getBreedCooldown@BreedableComponent@@QEBAHXZ
     * @hash   -472486280
     */
    MCAPI int getBreedCooldown() const;
    /**
     * @symbol ?getInteraction@BreedableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   -1822518181
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?getLoveCause@BreedableComponent@@QEBAPEAVPlayer@@AEBVActor@@@Z
     * @hash   14205424
     */
    MCAPI class Player * getLoveCause(class Actor const &) const;
    /**
     * @symbol ?getLoveTimer@BreedableComponent@@QEBAHXZ
     * @hash   1326842376
     */
    MCAPI int getLoveTimer() const;
    /**
     * @symbol ?mate@BreedableComponent@@QEAAXAEAVActor@@0@Z
     * @hash   -337134423
     */
    MCAPI void mate(class Actor &, class Actor &);
    /**
     * @symbol ?meetsSittingRequirements@BreedableComponent@@QEBA_NAEBVActor@@@Z
     * @hash   -770618567
     */
    MCAPI bool meetsSittingRequirements(class Actor const &) const;
    /**
     * @symbol ?readAdditionalSaveData@BreedableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1335964568
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?resetLove@BreedableComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1449030132
     */
    MCAPI void resetLove(class Actor &);
    /**
     * @symbol ?setLoveTimer@BreedableComponent@@QEAAXH@Z
     * @hash   -1314705322
     */
    MCAPI void setLoveTimer(int);

//private:
    /**
     * @symbol ?_canBreed@BreedableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
     * @hash   297960470
     */
    MCAPI bool _canBreed(class Actor &, class Player &, class ItemStack const &);
    /**
     * @symbol ?_handleMate@BreedableComponent@@AEAAXAEAVActor@@0@Z
     * @hash   1283972537
     */
    MCAPI void _handleMate(class Actor &, class Actor &);
    /**
     * @symbol ?_handlePregnancy@BreedableComponent@@AEAAXAEAVActor@@0@Z
     * @hash   -1391972285
     */
    MCAPI void _handlePregnancy(class Actor &, class Actor &);
    /**
     * @symbol ?_meetsEnvironmentRequirements@BreedableComponent@@AEBA_NAEAVActor@@@Z
     * @hash   15101305
     */
    MCAPI bool _meetsEnvironmentRequirements(class Actor &) const;
    /**
     * @symbol ?_useBreedItem@BreedableComponent@@AEAAXAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
     * @hash   -1656000172
     */
    MCAPI void _useBreedItem(class Actor &, class Player &, class ItemStack const &);

private:

};