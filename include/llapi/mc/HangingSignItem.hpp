/**
 * @file  HangingSignItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "SignBlockActor.hpp"
#include "SignItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HangingSignItem.
 *
 */
class HangingSignItem : public SignItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGSIGNITEM
public:
    class HangingSignItem& operator=(class HangingSignItem const &) = delete;
    HangingSignItem(class HangingSignItem const &) = delete;
    HangingSignItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   303949070
     */
    virtual ~HangingSignItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@HangingSignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -1296021375
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  133
     * @symbol ?getBlockToPlace@HangingSignItem@@MEBAPEBVBlock@@EAEBVActor@@VBlockPos@@@Z
     * @hash   447198129
     */
    virtual class Block const * getBlockToPlace(unsigned char, class Actor const &, class BlockPos) const;
    /**
     * @vftbl  134
     * @symbol ?_initializeTags@HangingSignItem@@EEAAXXZ
     * @hash   2113323921
     */
    virtual void _initializeTags();
    /**
     * @symbol ??0HangingSignItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4SignType@SignBlockActor@@@Z
     * @hash   1523497261
     */
    MCAPI HangingSignItem(std::string const &, int, enum class SignBlockActor::SignType);

//private:
    /**
     * @symbol ?_getCeilingHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
     * @hash   -788890875
     */
    MCAPI class Block const * _getCeilingHangingSignBlock(class Actor const &, unsigned char const &, class BlockPos const &) const;
    /**
     * @symbol ?_getWallHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
     * @hash   825169130
     */
    MCAPI class Block const * _getWallHangingSignBlock(class Actor const &, unsigned char const &, class BlockPos const &) const;

private:

};