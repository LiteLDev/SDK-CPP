/**
 * @file  BannerBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerBlock.
 *
 */
class BannerBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERBLOCK
public:
    class BannerBlock& operator=(class BannerBlock const &) = delete;
    BannerBlock(class BannerBlock const &) = delete;
    BannerBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1553533327
     */
    virtual ~BannerBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@BannerBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   1318792913
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
     * @vftbl  67
     * @symbol ?checkIsPathable@BannerBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   166738901
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  96
     * @symbol ?playerWillDestroy@BannerBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -719992235
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   145247299
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@BannerBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -215076380
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
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
     * @vftbl  144
     * @symbol ?getVisualShape@BannerBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   501973019
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  147
     * @symbol ?getVariant@BannerBlock@@UEBAHAEBVBlock@@@Z
     * @hash   62571857
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1477012899
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
     * @symbol ?onPlace@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1626805853
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1669539303
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  180
     * @symbol ?canSurvive@BannerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -167683921
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  192
     * @symbol ?getEntityResourceItem@BannerBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlockActor@@H@Z
     * @hash   1898300015
     */
    virtual class ItemInstance getEntityResourceItem(class Randomize &, class BlockActor const &, int) const;
    /**
     * @symbol ??0BannerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     * @hash   -446022934
     */
    MCAPI BannerBlock(std::string const &, int, bool);
    /**
     * @symbol ?EAST_AABB@BannerBlock@@2VAABB@@A
     * @hash   -337657821
     */
    MCAPI static class AABB EAST_AABB;
    /**
     * @symbol ?NORTH_AABB@BannerBlock@@2VAABB@@A
     * @hash   -1720312575
     */
    MCAPI static class AABB NORTH_AABB;
    /**
     * @symbol ?SOUTH_AABB@BannerBlock@@2VAABB@@A
     * @hash   -468718711
     */
    MCAPI static class AABB SOUTH_AABB;
    /**
     * @symbol ?STANDING_AABB@BannerBlock@@2VAABB@@A
     * @hash   866859005
     */
    MCAPI static class AABB STANDING_AABB;
    /**
     * @symbol ?WEST_AABB@BannerBlock@@2VAABB@@A
     * @hash   -909550505
     */
    MCAPI static class AABB WEST_AABB;

//private:
    /**
     * @symbol ?_itemInstanceFromBlockEntity@BannerBlock@@AEBA?AVItemInstance@@V?$not_null@PEBVBannerBlockActor@@@gsl@@@Z
     * @hash   536370299
     */
    MCAPI class ItemInstance _itemInstanceFromBlockEntity(class gsl::not_null<class BannerBlockActor const *>) const;

private:

};