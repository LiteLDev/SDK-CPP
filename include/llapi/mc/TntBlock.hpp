/**
 * @file  TntBlock.hpp
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
 * @brief MC class TntBlock.
 *
 */
class TntBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TNTBLOCK
public:
    class TntBlock& operator=(class TntBlock const &) = delete;
    TntBlock(class TntBlock const &) = delete;
    TntBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -604646595
     */
    virtual ~TntBlock();
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -295155765
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -274838303
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -272991261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -272067740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -271144219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -269297177
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -268373656
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -267450135
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -266526614
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -245285631
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -244362110
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -242515068
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -241591547
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -240668026
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -239744505
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -238820984
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -237897463
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -188950850
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  70
     * @symbol ?shouldDispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
     * @hash   -961775508
     */
    virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /**
     * @vftbl  71
     * @symbol ?dispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -823691297
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   1297803954
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1516103963
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  97
     * @symbol ?destroy@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     * @hash   798168570
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @vftbl  104
     * @symbol ?trySpawnResourcesOnExplosion@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@M@Z
     * @hash   439108781
     */
    virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  133
     * @symbol ?buildDescriptionId@TntBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -1533563910
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  134
     * @symbol ?isAuxValueRelevantForPicking@TntBlock@@UEBA_NXZ
     * @hash   -1861417343
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@TntBlock@@UEBAHAEBVBlock@@@Z
     * @hash   1442548803
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol ?onExploded@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   105829014
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  167
     * @hash   1459544802
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1460468323
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1461391844
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol ?onPlace@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -748829551
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@TntBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -193518600
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@TntBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1292010033
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @symbol ??0TntBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -618055743
     */
    MCAPI TntBlock(std::string const &, int);
    /**
     * @symbol ?_setAllowUnderwater@TntBlock@@QEBAXPEAVActor@@@Z
     * @hash   -1877499911
     */
    MCAPI void _setAllowUnderwater(class Actor *) const;
    /**
     * @symbol ?_shouldAllowUnderwater@TntBlock@@QEBA_NAEBVBlock@@@Z
     * @hash   -285657963
     */
    MCAPI bool _shouldAllowUnderwater(class Block const &) const;
    /**
     * @symbol ?tryLightTnt@TntBlock@@SA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1977952136
     */
    MCAPI static bool tryLightTnt(class Player &, class BlockPos const &);

};