/**
 * @file  ObserverBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ObserverBlock.
 *
 */
class ObserverBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBSERVERBLOCK
public:
    class ObserverBlock& operator=(class ObserverBlock const &) = delete;
    ObserverBlock(class ObserverBlock const &) = delete;
    ObserverBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   116216997
     */
    virtual ~ObserverBlock();
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  51
     * @symbol ?isSignalSource@ObserverBlock@@UEBA_NXZ
     * @hash   -1400884434
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @symbol ?isValidAuxValue@ObserverBlock@@UEBA_NH@Z
     * @hash   2012817053
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  62
     * @symbol ?shouldConnectToRedstone@ObserverBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -995898448
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  71
     * @symbol ?onRedstoneUpdate@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -386088546
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  74
     * @symbol ?movedByPiston@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2141598568
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  77
     * @symbol ?setupRedstoneComponent@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1466143103
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1162035127
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@ObserverBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1828658438
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     * @hash   477179035
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@ObserverBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   1184833974
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  147
     * @symbol ?getVariant@ObserverBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1778051657
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  150
     * @symbol ?getMappedFace@ObserverBlock@@UEBAEEAEBVBlock@@@Z
     * @hash   1058068183
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  151
     * @symbol ?getFaceFlip@ObserverBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
     * @hash   -17156245
     */
    virtual enum Flip getFaceFlip(unsigned char, class Block const &) const;
    /**
     * @vftbl  157
     * @hash   1470278211
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol ?onPlace@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1782306717
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1773423357
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @symbol ??0ObserverBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1525822245
     */
    MCAPI ObserverBlock(std::string const &, int);

//private:
    /**
     * @symbol ?_installCircuit@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
     * @hash   -659728753
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool, bool) const;
    /**
     * @symbol ?_updateState@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVPulseCapacitor@@_N@Z
     * @hash   1766131356
     */
    MCAPI void _updateState(class BlockSource &, class BlockPos const &, class PulseCapacitor &, bool) const;

private:

};