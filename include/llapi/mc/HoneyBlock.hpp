/**
 * @file  HoneyBlock.hpp
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
 * @brief MC class HoneyBlock.
 *
 */
class HoneyBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HONEYBLOCK
public:
    class HoneyBlock& operator=(class HoneyBlock const &) = delete;
    HoneyBlock(class HoneyBlock const &) = delete;
    HoneyBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -199808292
     */
    virtual ~HoneyBlock();
    /**
     * @vftbl  5
     * @symbol ?getCollisionShape@HoneyBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -241813736
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
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
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  113
     * @symbol ?entityInside@HoneyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   -629915828
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@HoneyBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1125301396
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol ?onStandOn@HoneyBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     * @hash   -1955694956
     */
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
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
     * @vftbl  170
     * @symbol ?onFallOn@HoneyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     * @hash   -2074880370
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  182
     * @symbol ?getExtraRenderLayers@HoneyBlock@@UEBAHXZ
     * @hash   -455399669
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @symbol ??0HoneyBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   2101530889
     */
    MCAPI HoneyBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?triggerSlidingDownEffects@HoneyBlock@@SAXAEAVActor@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1439313480
     */
    MCAPI static void triggerSlidingDownEffects(class Actor &, class BlockPos const &, class Block const &);

};