/**
 * @file  SimulatedPlayer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "ScriptModuleMinecraft.hpp"
#include "ServerPlayer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimulatedPlayer.
 *
 */
class SimulatedPlayer : public ServerPlayer {

#define AFTER_EXTRA
// Add Member There
public:
    [[deprecated("This is a typo. Please use simulateDestroy")]]
    LIAPI bool simulateDestory();
    LIAPI bool simulateDestroy();
    LIAPI bool simulateUseItem();
    LIAPI bool simulateSneak();
    LIAPI bool simulateStopSneaking();
    LIAPI static class SimulatedPlayer* create(std::string const& name, class BlockPos const& position, class AutomaticID<class Dimension, int> dimensionId = 0);
    LIAPI static class SimulatedPlayer* create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId = 0);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYER
public:
    class SimulatedPlayer& operator=(class SimulatedPlayer const &) = delete;
    SimulatedPlayer(class SimulatedPlayer const &) = delete;
    SimulatedPlayer() = delete;
#endif

public:
    /**
     * @vftbl  12
     * @symbol ?initializeComponents@SimulatedPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -263950977
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   285979023
     */
    virtual ~SimulatedPlayer();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  45
     * @symbol ?teleportTo@SimulatedPlayer@@UEAAXAEBVVec3@@_NHH1@Z
     * @hash   1425146814
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -71033267
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   131111587
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1427953849
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1451965395
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  295
     * @symbol ?aiStep@SimulatedPlayer@@UEAAXXZ
     * @hash   277798842
     */
    virtual void aiStep();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @vftbl  370
     * @hash   -949285092
     */
    virtual void __unk_vfn_370();
    /**
     * @vftbl  377
     * @hash   -892525549
     */
    virtual void __unk_vfn_377();
    /**
     * @vftbl  378
     * @hash   -884144668
     */
    virtual void __unk_vfn_378();
    /**
     * @vftbl  380
     * @hash   -862903685
     */
    virtual void __unk_vfn_380();
    /**
     * @vftbl  381
     * @hash   -919732420
     */
    virtual void __unk_vfn_381();
    /**
     * @vftbl  386
     * @hash   -915114815
     */
    virtual void __unk_vfn_386();
    /**
     * @vftbl  387
     * @hash   -914191294
     */
    virtual void __unk_vfn_387();
    /**
     * @vftbl  390
     * @hash   -892026790
     */
    virtual void __unk_vfn_390();
    /**
     * @vftbl  393
     * @hash   -889256227
     */
    virtual void __unk_vfn_393();
    /**
     * @vftbl  394
     * @hash   -888332706
     */
    virtual void __unk_vfn_394();
    /**
     * @vftbl  404
     * @hash   -258491384
     */
    virtual void __unk_vfn_404();
    /**
     * @vftbl  405
     * @hash   -257567863
     */
    virtual void __unk_vfn_405();
    /**
     * @vftbl  406
     * @symbol ?isHostingPlayer@SimulatedPlayer@@UEBA_NXZ
     * @hash   371344360
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl  409
     * @hash   -253873779
     */
    virtual void __unk_vfn_409();
    /**
     * @vftbl  416
     * @hash   -187560935
     */
    virtual void __unk_vfn_416();
    /**
     * @vftbl  443
     * @hash   -94603405
     */
    virtual void __unk_vfn_443();
    /**
     * @vftbl  444
     * @symbol ?getXuid@SimulatedPlayer@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1323755001
     */
    virtual std::string getXuid() const;
    /**
     * @vftbl  445
     * @symbol ?getMovementSettings@SimulatedPlayer@@UEBAAEBUPlayerMovementSettings@@XZ
     * @hash   -1032961282
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @vftbl  448
     * @symbol ?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
     * @hash   -1183908139
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /**
     * @vftbl  452
     * @symbol ?_getSpawnChunkLimit@SimulatedPlayer@@MEBAHXZ
     * @hash   -755140027
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl  453
     * @symbol ?_updateChunkPublisherView@SimulatedPlayer@@MEAAXAEBVVec3@@M@Z
     * @hash   -329828757
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMULATEDPLAYER
    /**
     * @symbol ?isSimulated@SimulatedPlayer@@UEBA_NXZ
     * @hash   1834954941
     */
    MCVAPI bool isSimulated() const;
    /**
     * @symbol ?useNewAi@SimulatedPlayer@@UEBA_NXZ
     * @hash   -1345494968
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0SimulatedPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
     * @hash   -608723864
     */
    MCAPI SimulatedPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol ?getGameTestHelper@SimulatedPlayer@@QEBA?AV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@XZ
     * @hash   -1850212931
     */
    MCAPI class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper> getGameTestHelper() const;
    /**
     * @symbol ?postAiStep@SimulatedPlayer@@QEAAXXZ
     * @hash   498333435
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?preAiStep@SimulatedPlayer@@QEAAXXZ
     * @hash   768025219
     */
    MCAPI void preAiStep();
    /**
     * @symbol ?setGameTestHelper@SimulatedPlayer@@QEAAXV?$NonOwnerPointer@VBaseGameTestHelper@gametest@@@Bedrock@@@Z
     * @hash   -1604517327
     */
    MCAPI void setGameTestHelper(class Bedrock::NonOwnerPointer<class gametest::BaseGameTestHelper>);
    /**
     * @symbol ?setXuid@SimulatedPlayer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1407234456
     */
    MCAPI void setXuid(std::string const &);
    /**
     * @symbol ?simulateAttack@SimulatedPlayer@@QEAA_NPEAVActor@@@Z
     * @hash   350690510
     */
    MCAPI bool simulateAttack(class Actor *);
    /**
     * @symbol ?simulateAttack@SimulatedPlayer@@QEAA_NXZ
     * @hash   -531908946
     */
    MCAPI bool simulateAttack();
    /**
     * @symbol ?simulateDestroyBlock@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
     * @hash   118867772
     */
    MCAPI bool simulateDestroyBlock(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol ?simulateDisconnect@SimulatedPlayer@@QEAAXXZ
     * @hash   -1635015901
     */
    MCAPI void simulateDisconnect();
    /**
     * @symbol ?simulateGiveItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_N@Z
     * @hash   2110267278
     */
    MCAPI bool simulateGiveItem(class ItemStack &, bool);
    /**
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NAEAVActor@@@Z
     * @hash   1388412289
     */
    MCAPI bool simulateInteract(class Actor &);
    /**
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@@Z
     * @hash   1588024732
     */
    MCAPI bool simulateInteract(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @symbol ?simulateInteract@SimulatedPlayer@@QEAA_NXZ
     * @hash   -1202681922
     */
    MCAPI bool simulateInteract();
    /**
     * @symbol ?simulateJump@SimulatedPlayer@@QEAA_NXZ
     * @hash   -2001831922
     */
    MCAPI bool simulateJump();
    /**
     * @symbol ?simulateLocalMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     * @hash   -2043926445
     */
    MCAPI void simulateLocalMove(class Vec3 const &, float);
    /**
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEAVActor@@@Z
     * @hash   -2101233840
     */
    MCAPI void simulateLookAt(class Actor &);
    /**
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVBlockPos@@@Z
     * @hash   -1867258180
     */
    MCAPI void simulateLookAt(class BlockPos const &);
    /**
     * @symbol ?simulateLookAt@SimulatedPlayer@@QEAAXAEBVVec3@@@Z
     * @hash   1554395324
     */
    MCAPI void simulateLookAt(class Vec3 const &);
    /**
     * @symbol ?simulateMoveToLocation@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     * @hash   589345413
     */
    MCAPI void simulateMoveToLocation(class Vec3 const &, float);
    /**
     * @symbol ?simulateNavigateToEntity@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEAVActor@@M@Z
     * @hash   -513574392
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToEntity(class Actor &, float);
    /**
     * @symbol ?simulateNavigateToLocation@SimulatedPlayer@@QEAA?AUScriptNavigationResult@ScriptModuleMinecraft@@AEBVVec3@@M@Z
     * @hash   1461997964
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult simulateNavigateToLocation(class Vec3 const &, float);
    /**
     * @symbol ?simulateNavigateToLocations@SimulatedPlayer@@QEAAX$$QEAV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@M@Z
     * @hash   -1470643421
     */
    MCAPI void simulateNavigateToLocations(std::vector<class Vec3> &&, float);
    /**
     * @symbol ?simulateSetBodyRotation@SimulatedPlayer@@QEAAXM@Z
     * @hash   -1044437480
     */
    MCAPI void simulateSetBodyRotation(float);
    /**
     * @symbol ?simulateSetItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@_NH@Z
     * @hash   -404153903
     */
    MCAPI bool simulateSetItem(class ItemStack &, bool, int);
    /**
     * @symbol ?simulateStopDestroyingBlock@SimulatedPlayer@@QEAAXXZ
     * @hash   609033283
     */
    MCAPI void simulateStopDestroyingBlock();
    /**
     * @symbol ?simulateStopInteracting@SimulatedPlayer@@QEAAXXZ
     * @hash   1342255425
     */
    MCAPI void simulateStopInteracting();
    /**
     * @symbol ?simulateStopMoving@SimulatedPlayer@@QEAAXXZ
     * @hash   -1780230693
     */
    MCAPI void simulateStopMoving();
    /**
     * @symbol ?simulateStopUsingItem@SimulatedPlayer@@QEAAXXZ
     * @hash   -145742249
     */
    MCAPI void simulateStopUsingItem();
    /**
     * @symbol ?simulateUseItem@SimulatedPlayer@@QEAA_NAEAVItemStack@@@Z
     * @hash   1870778691
     */
    MCAPI bool simulateUseItem(class ItemStack &);
    /**
     * @symbol ?simulateUseItemInSlot@SimulatedPlayer@@QEAA_NH@Z
     * @hash   -1692094481
     */
    MCAPI bool simulateUseItemInSlot(int);
    /**
     * @symbol ?simulateUseItemInSlotOnBlock@SimulatedPlayer@@QEAA_NHAEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
     * @hash   -76577874
     */
    MCAPI bool simulateUseItemInSlotOnBlock(int, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol ?simulateUseItemOnBlock@SimulatedPlayer@@QEAA_NAEAVItemStack@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@AEBVVec3@@@Z
     * @hash   1348225080
     */
    MCAPI bool simulateUseItemOnBlock(class ItemStack &, class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, class Vec3 const &);
    /**
     * @symbol ?simulateWorldMove@SimulatedPlayer@@QEAAXAEBVVec3@@M@Z
     * @hash   211688995
     */
    MCAPI void simulateWorldMove(class Vec3 const &, float);
    /**
     * @symbol ?create@SimulatedPlayer@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@0@Z
     * @hash   698440551
     */
    MCAPI static class SimulatedPlayer * create(std::string const &, class BlockPos const &, class AutomaticID<class Dimension, int>, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, std::string const &);
    /**
     * @symbol ?tryGetFromEntity@SimulatedPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
     * @hash   1644919289
     */
    MCAPI static class SimulatedPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_addMoveComponent@SimulatedPlayer@@AEAAXXZ
     * @hash   -2144357915
     */
    MCAPI void _addMoveComponent();
    /**
     * @symbol ?_createNavigationResult@SimulatedPlayer@@AEBA?AUScriptNavigationResult@ScriptModuleMinecraft@@PEAVNavigationComponent@@@Z
     * @hash   -629259155
     */
    MCAPI struct ScriptModuleMinecraft::ScriptNavigationResult _createNavigationResult(class NavigationComponent *) const;
    /**
     * @symbol ?_getInputSpeed@SimulatedPlayer@@AEAAMXZ
     * @hash   -1589063513
     */
    MCAPI float _getInputSpeed();
    /**
     * @symbol ?_startCooldown@SimulatedPlayer@@AEAAXXZ
     * @hash   -675451927
     */
    MCAPI void _startCooldown();
    /**
     * @symbol ?_trySwing@SimulatedPlayer@@AEAA_NXZ
     * @hash   1987319687
     */
    MCAPI bool _trySwing();
    /**
     * @symbol ?_updateMovement@SimulatedPlayer@@AEAAXXZ
     * @hash   -1814788638
     */
    MCAPI void _updateMovement();

private:

};