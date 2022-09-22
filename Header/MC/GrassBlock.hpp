/**
 * @file  MC/GrassBlock.hpp
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
 * @brief MC class GrassBlock.
 *
 */
class GrassBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRASSBLOCK
public:
    class GrassBlock& operator=(class GrassBlock const &) = delete;
    GrassBlock(class GrassBlock const &) = delete;
    GrassBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GrassBlock();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @hash   -1802270966
     * @vftbl  52
     * @symbol ?canBeOriginalSurface@GrassBlock@@UEBA_NXZ
     */
    virtual bool canBeOriginalSurface() const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -2009539985
     * @vftbl  85
     * @symbol ?onFertilized@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   -1103551892
     * @vftbl  87
     * @symbol ?canBeFertilized@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1051367070
     * @vftbl  94
     * @symbol ?tryToTill@GrassBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
     */
    virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @hash   -1212169031
     * @vftbl  99
     * @symbol ?neighborChanged@GrassBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -469654475
     * @vftbl  102
     * @symbol ?getResourceItem@GrassBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -1240941287
     * @vftbl  108
     * @symbol ?calcVariant@GrassBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVColor@mce@@@Z
     */
    virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   1176494009
     * @vftbl  136
     * @symbol ?getColor@GrassBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   1678118131
     * @vftbl  137
     * @symbol ?getColor@GrassBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1072721114
     * @vftbl  175
     * @symbol ?randomTick@GrassBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -525117492
     * @vftbl  179
     * @symbol ?use@GrassBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   2032349103
     * @vftbl  187
     * @symbol ?getMapColor@GrassBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GRASSBLOCK
    /**
     * @hash   -90301432
     * @symbol ?waterSpreadCausesSpawn@GrassBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -1144224203
     * @symbol ??0GrassBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI GrassBlock(std::string const &, int);
    /**
     * @hash   612086467
     * @symbol ?fertilize@GrassBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@@Z
     */
    MCAPI bool fertilize(class BlockSource &, class BlockPos const &, class Randomize &) const;
    /**
     * @hash   -714116641
     * @symbol ?MIN_BRIGHTNESS@GrassBlock@@2UBrightness@@B
     */
    MCAPI static struct Brightness const MIN_BRIGHTNESS;

//private:
    /**
     * @hash   1890110161
     * @symbol ?_canBeGrass@GrassBlock@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canBeGrass(class BlockSource const &, class BlockPos const &) const;

private:

};