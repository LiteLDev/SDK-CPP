/**
 * @file  MC/MultifaceBlock.hpp
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
 * @brief MC class MultifaceBlock.
 *
 */
class MultifaceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEBLOCK
public:
    class MultifaceBlock& operator=(class MultifaceBlock const &) = delete;
    MultifaceBlock(class MultifaceBlock const &) = delete;
    MultifaceBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MultifaceBlock();
    /**
     * @hash   -752317641
     * @vftbl  10
     * @symbol ?getAABB@MultifaceBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
     * @hash   -1592337149
     * @vftbl  35
     * @symbol ?isWaterBlocking@MultifaceBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   1361218666
     * @vftbl  57
     * @symbol ?sanitizeFillBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @hash   95270402
     * @vftbl  90
     * @symbol ?mayPlace@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1930716775
     * @vftbl  99
     * @symbol ?neighborChanged@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -599848570
     * @vftbl  107
     * @symbol ?getPlacementBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @hash   -777403479
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@MultifaceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
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
     * @hash   349714413
     * @vftbl  174
     * @symbol ?tick@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1545983351
     * @vftbl  178
     * @symbol ?clip@MultifaceBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @hash   -216922855
     * @vftbl  180
     * @symbol ?canSurvive@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   -2129323703
     * @vftbl  192
     * @symbol ?getMultifaceBlock@SculkVeinBlock@@UEBAAEBVBlock@@XZ
     */
    virtual class Block const & getMultifaceBlock() const = 0;
    /**
     * @hash   -1684502093
     * @vftbl  193
     * @symbol ?getMultifaceSpreader@SculkVeinBlock@@UEBAAEBVMultifaceSpreader@@XZ
     */
    virtual class MultifaceSpreader const & getMultifaceSpreader() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEBLOCK
    /**
     * @hash   1608690530
     * @symbol ?isMultifaceBlock@MultifaceBlock@@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
#endif
    /**
     * @hash   874678510
     * @symbol ??0MultifaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI MultifaceBlock(std::string const &, int, class Material const &);
    /**
     * @hash   -1496746763
     * @symbol ?removeFace@MultifaceBlock@@QEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@E_N@Z
     */
    MCAPI void removeFace(class IBlockWorldGenAPI &, class BlockSource *, class Block const &, class BlockPos const &, unsigned char, bool) const;
    /**
     * @hash   469096715
     * @symbol ?MULTIFACE_ALL@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_ALL;
    /**
     * @hash   -1223200239
     * @symbol ?MULTIFACE_DOWN@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_DOWN;
    /**
     * @hash   836797349
     * @symbol ?MULTIFACE_EAST@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_EAST;
    /**
     * @hash   -539212609
     * @symbol ?MULTIFACE_NORTH@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_NORTH;
    /**
     * @hash   -281763929
     * @symbol ?MULTIFACE_SIDES@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_SIDES;
    /**
     * @hash   1630031799
     * @symbol ?MULTIFACE_SOUTH@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_SOUTH;
    /**
     * @hash   -1524355467
     * @symbol ?MULTIFACE_UP@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_UP;
    /**
     * @hash   -1900404771
     * @symbol ?MULTIFACE_WEST@MultifaceBlock@@2HB
     */
    MCAPI static int const MULTIFACE_WEST;
    /**
     * @hash   1408876455
     * @symbol ?convertOldMultifaceToNewMultifaceValue@MultifaceBlock@@SAHH@Z
     */
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);
    /**
     * @hash   -1321573186
     * @symbol ?getBlockForPlacement@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI static class Block const & getBlockForPlacement(class Block const &, class Block const &, class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @hash   69409182
     * @symbol ?getBlockForPlacementWorldGen@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
     */
    MCAPI static class Block const & getBlockForPlacementWorldGen(class Block const &, class Block const &, class IBlockWorldGenAPI &, class BlockPos const &, unsigned char);
    /**
     * @hash   -1378569206
     * @symbol ?getMultifaceValueFromFace@MultifaceBlock@@SAHE@Z
     */
    MCAPI static int getMultifaceValueFromFace(unsigned char);
    /**
     * @hash   -1420272141
     * @symbol ?hasFace@MultifaceBlock@@SA_NAEBVBlock@@E@Z
     */
    MCAPI static bool hasFace(class Block const &, unsigned char);

//protected:
    /**
     * @hash   -1212505140
     * @symbol ?_canSpread@MultifaceBlock@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     */
    MCAPI bool _canSpread(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -2107993587
     * @symbol ?_getNumSides@MultifaceBlock@@IEBAHAEBVBlock@@@Z
     */
    MCAPI int _getNumSides(class Block const &) const;

//private:
    /**
     * @hash   1771532124
     * @symbol ?_removeBlock@MultifaceBlock@@AEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void _removeBlock(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, bool) const;

protected:

private:

};