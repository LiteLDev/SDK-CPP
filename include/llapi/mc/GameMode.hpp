/**
 * @file  GameMode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class ServerPlayer;
#undef BEFORE_EXTRA

/**
 * @brief MC class GameMode.
 *
 */
class GameMode {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ServerPlayer* getPlayer();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODE
public:
    class GameMode& operator=(class GameMode const &) = delete;
    GameMode(class GameMode const &) = delete;
    GameMode() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -322417793
     */
    virtual ~GameMode();
    /**
     * @vftbl  1
     * @symbol ?startDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z
     * @hash   904251422
     */
    virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /**
     * @vftbl  2
     * @symbol ?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z
     * @hash   1434752010
     */
    virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /**
     * @vftbl  3
     * @symbol ?continueDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEBVVec3@@AEA_N@Z
     * @hash   -612818327
     */
    virtual bool continueDestroyBlock(class BlockPos const &, unsigned char, class Vec3 const &, bool &);
    /**
     * @vftbl  4
     * @symbol ?stopDestroyBlock@GameMode@@UEAAXAEBVBlockPos@@@Z
     * @hash   -436820061
     */
    virtual void stopDestroyBlock(class BlockPos const &);
    /**
     * @vftbl  5
     * @symbol ?startBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
     * @hash   767087702
     */
    virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @vftbl  6
     * @symbol ?buildBlock@GameMode@@UEAA_NAEBVBlockPos@@E_N@Z
     * @hash   1991955334
     */
    virtual bool buildBlock(class BlockPos const &, unsigned char, bool);
    /**
     * @vftbl  7
     * @symbol ?continueBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
     * @hash   -1958386821
     */
    virtual void continueBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @vftbl  8
     * @symbol ?stopBuildBlock@GameMode@@UEAAXXZ
     * @hash   1106604035
     */
    virtual void stopBuildBlock();
    /**
     * @vftbl  9
     * @symbol ?tick@GameMode@@UEAAXXZ
     * @hash   728270719
     */
    virtual void tick();
    /**
     * @vftbl  10
     * @symbol ?getPickRange@GameMode@@UEAAMAEBW4InputMode@@_N@Z
     * @hash   -723869679
     */
    virtual float getPickRange(enum class InputMode const &, bool);
    /**
     * @vftbl  11
     * @symbol ?useItem@GameMode@@UEAA_NAEAVItemStack@@@Z
     * @hash   -161400455
     */
    virtual bool useItem(class ItemStack &);
    /**
     * @vftbl  12
     * @symbol ?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
     * @hash   -531807869
     */
    virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /**
     * @vftbl  13
     * @symbol ?interact@GameMode@@UEAA_NAEAVActor@@AEBVVec3@@@Z
     * @hash   -1267700091
     */
    virtual bool interact(class Actor &, class Vec3 const &);
    /**
     * @vftbl  14
     * @symbol ?attack@GameMode@@UEAA_NAEAVActor@@@Z
     * @hash   -884239189
     */
    virtual bool attack(class Actor &);
    /**
     * @vftbl  15
     * @symbol ?releaseUsingItem@GameMode@@UEAAXXZ
     * @hash   404432882
     */
    virtual void releaseUsingItem();
    /**
     * @vftbl  16
     * @symbol ?setTrialMode@GameMode@@UEAAX_N@Z
     * @hash   -1402510141
     */
    virtual void setTrialMode(bool);
    /**
     * @vftbl  17
     * @symbol ?isInTrialMode@GameMode@@UEAA_NXZ
     * @hash   -2135166386
     */
    virtual bool isInTrialMode();
    /**
     * @vftbl  18
     * @symbol ?registerUpsellScreenCallback@GameMode@@UEAAXV?$function@$$A6AX_N@Z@std@@@Z
     * @hash   879843644
     */
    virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
    /**
     * @symbol ??0GameMode@@QEAA@AEAVPlayer@@V?$unique_ptr@UIGameModeTimer@@U?$default_delete@UIGameModeTimer@@@std@@@std@@V?$unique_ptr@UIGameModeMessenger@@U?$default_delete@UIGameModeMessenger@@@std@@@3@@Z
     * @hash   996421176
     */
    MCAPI GameMode(class Player &, std::unique_ptr<struct IGameModeTimer>, std::unique_ptr<struct IGameModeMessenger>);
    /**
     * @symbol ?_startDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_N@Z
     * @hash   -101098288
     */
    MCAPI bool _startDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &);
    /**
     * @symbol ?_tickContinueDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_NAEBV?$function@$$A6AXXZ@std@@@Z
     * @hash   1280750449
     */
    MCAPI bool _tickContinueDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &, class std::function<void (void)> const &);
    /**
     * @symbol ?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z
     * @hash   -360408409
     */
    MCAPI bool baseUseItem(class ItemStack &);
    /**
     * @symbol ?createBlockBreakCaptureScope@GameMode@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@V?$function@$$A6AXAEBVItemStack@@0AEBVBlockPos@@@Z@std@@@Z
     * @hash   1999231036
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> createBlockBreakCaptureScope(class std::function<void (class ItemStack const &, class ItemStack const &, class BlockPos const &)>);
    /**
     * @symbol ?getDestroyBlockFace@GameMode@@QEBAEXZ
     * @hash   218080487
     */
    MCAPI unsigned char getDestroyBlockFace() const;
    /**
     * @symbol ?getDestroyBlockPos@GameMode@@QEBAAEBVBlockPos@@XZ
     * @hash   -1884479688
     */
    MCAPI class BlockPos const & getDestroyBlockPos() const;
    /**
     * @symbol ?getDestroyProgress@GameMode@@QEAAMXZ
     * @hash   1629994520
     */
    MCAPI float getDestroyProgress();
    /**
     * @symbol ?getDestroyRate@GameMode@@QEAAMAEBVBlock@@@Z
     * @hash   2051761971
     */
    MCAPI float getDestroyRate(class Block const &);
    /**
     * @symbol ?getMaxPickRange@GameMode@@QEAAMXZ
     * @hash   -858142330
     */
    MCAPI float getMaxPickRange();
    /**
     * @symbol ?getMaxPickRangeSqr@GameMode@@QEAAMXZ
     * @hash   190663016
     */
    MCAPI float getMaxPickRangeSqr();
    /**
     * @symbol ?isLastBuildBlockInteractive@GameMode@@QEBA_NXZ
     * @hash   -915644132
     */
    MCAPI bool isLastBuildBlockInteractive() const;
    /**
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM@GameMode@@2MB
     * @hash   487616905
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;
    /**
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM_SQR@GameMode@@2MB
     * @hash   -822207503
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;
    /**
     * @symbol ?PICKRANGE_GAMEPAD@GameMode@@2MB
     * @hash   1535706679
     */
    MCAPI static float const PICKRANGE_GAMEPAD;
    /**
     * @symbol ?PICKRANGE_MOUSE@GameMode@@2MB
     * @hash   -28901261
     */
    MCAPI static float const PICKRANGE_MOUSE;
    /**
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM@GameMode@@2MB
     * @hash   1328608037
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;
    /**
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM_SQR@GameMode@@2MB
     * @hash   -416985715
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;
    /**
     * @symbol ?PICKRANGE_TOUCH_CREATIVE@GameMode@@2MB
     * @hash   -2136461475
     */
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;
    /**
     * @symbol ?PICKRANGE_TOUCH_SURVIVAL@GameMode@@2MB
     * @hash   -298619135
     */
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;
    /**
     * @symbol ?PICKRANGE_VR_CREATIVE@GameMode@@2MB
     * @hash   1892416527
     */
    MCAPI static float const PICKRANGE_VR_CREATIVE;
    /**
     * @symbol ?PICKRANGE_VR_SURVIVAL@GameMode@@2MB
     * @hash   -564716117
     */
    MCAPI static float const PICKRANGE_VR_SURVIVAL;

//private:
    /**
     * @symbol ?_canDestroy@GameMode@@AEAA_NAEBVBlockPos@@E@Z
     * @hash   1970062325
     */
    MCAPI bool _canDestroy(class BlockPos const &, unsigned char);
    /**
     * @symbol ?_canUseBlock@GameMode@@AEAA_NAEBVBlock@@@Z
     * @hash   -984583404
     */
    MCAPI bool _canUseBlock(class Block const &);
    /**
     * @symbol ?_creativeDestroyBlock@GameMode@@AEAA_NAEBVBlockPos@@E@Z
     * @hash   -7726371
     */
    MCAPI bool _creativeDestroyBlock(class BlockPos const &, unsigned char);
    /**
     * @symbol ?_enableBlockBreakDelay@GameMode@@AEBA_NXZ
     * @hash   -1736284065
     */
    MCAPI bool _enableBlockBreakDelay() const;

private:

};