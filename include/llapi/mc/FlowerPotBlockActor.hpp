/**
 * @file  FlowerPotBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlowerPotBlockActor.
 *
 */
class FlowerPotBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCKACTOR
public:
    class FlowerPotBlockActor& operator=(class FlowerPotBlockActor const &) = delete;
    FlowerPotBlockActor(class FlowerPotBlockActor const &) = delete;
    FlowerPotBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1532355248
     */
    virtual ~FlowerPotBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@FlowerPotBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1862119
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@FlowerPotBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -672282472
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  8
     * @symbol ?onChanged@FlowerPotBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1867397574
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol ?_getUpdatePacket@FlowerPotBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1867100315
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@FlowerPotBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -30623593
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0FlowerPotBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -102525275
     */
    MCAPI FlowerPotBlockActor(class BlockPos const &);
    /**
     * @symbol ?getPlantItem@FlowerPotBlockActor@@QEBAPEBVBlock@@XZ
     * @hash   -1744873933
     */
    MCAPI class Block const * getPlantItem() const;
    /**
     * @symbol ?setPlantItem@FlowerPotBlockActor@@QEAAXPEBVBlock@@@Z
     * @hash   536502445
     */
    MCAPI void setPlantItem(class Block const *);

};