/**
 * @file  ComposterBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComposterBlock.
 *
 */
class ComposterBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There
public:

inline void emitBoneMeal(class Level& a1, class BlockSource& a2, class BlockPos const& a3) {
    return _emitBoneMeal(a1,a2,a3);
}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSTERBLOCK
public:
    class ComposterBlock& operator=(class ComposterBlock const &) = delete;
    ComposterBlock(class ComposterBlock const &) = delete;
    ComposterBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1575090793
     */
    virtual ~ComposterBlock();
    /**
     * @vftbl  9
     * @symbol ?addAABBs@ComposterBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   -221353905
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  11
     * @symbol ?addCollisionShapes@ComposterBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   1584085374
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@ComposterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -486015410
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@ComposterBlock@@UEBA_NXZ
     * @hash   1742691945
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol ?onMove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -808304781
     */
    virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@ComposterBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   -2116816436
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1482441588
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol ?getComparatorSignal@ComposterBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   557537303
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol ?getVariant@ComposterBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1810993553
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  163
     * @symbol ?onRemove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1669797840
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   151314837
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   177450309
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@ComposterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   629189972
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  192
     * @hash   1667651274
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl  193
     * @hash   2114486587
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  194
     * @hash   2115363980
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @hash   2116256749
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @hash   2117180270
     */
    virtual void __unk_vfn_196();
    /**
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -281237131
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSTERBLOCK
    /**
     * @symbol ?hasComparatorSignal@ComposterBlock@@UEBA_NXZ
     * @hash   -579278911
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol ??0ComposterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1324255389
     */
    MCAPI ComposterBlock(std::string const &, int);
    /**
     * @symbol ?addItem@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -607677920
     */
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?addItems@ComposterBlock@@SAHAEBVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   970400957
     */
    MCAPI static int addItems(class ItemStack const &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?addItems@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1063319825
     */
    MCAPI static bool addItems(class Container &, int, class ItemStack &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?empty@ComposterBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1047960070
     */
    MCAPI static void empty(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?extractItem@ComposterBlock@@SA?AVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -832289889
     */
    MCAPI static class ItemStack extractItem(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?getComposterAt@ComposterBlock@@SAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2022916159
     */
    MCAPI static class Block const * getComposterAt(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_emitBoneMeal@ComposterBlock@@AEBAXAEAVLevel@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1561781759
     */
    MCAPI void _emitBoneMeal(class Level &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_notifyClientComposterUsed@ComposterBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
     * @hash   25518600
     */
    MCAPI void _notifyClientComposterUsed(class Player const &, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @symbol ?_getCompostableItems@ComposterBlock@@CAAEBV?$vector@U?$pair@HC@std@@V?$allocator@U?$pair@HC@std@@@2@@std@@AEBVExperiments@@@Z
     * @hash   280602925
     */
    MCAPI static std::vector<struct std::pair<int, signed char>> const & _getCompostableItems(class Experiments const &);

private:
    /**
     * @symbol ?COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION@ComposterBlock@@0VBaseGameVersion@@B
     * @hash   -2088238805
     */
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @symbol ?PARTICLE_OFFSET@ComposterBlock@@0VVec3@@B
     * @hash   1258227682
     */
    MCAPI static class Vec3 const PARTICLE_OFFSET;

};