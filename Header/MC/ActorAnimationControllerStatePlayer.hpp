/**
 * @file  ActorAnimationControllerStatePlayer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerStatePlayer.
 *
 */
class ActorAnimationControllerStatePlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATEPLAYER
public:
    class ActorAnimationControllerStatePlayer& operator=(class ActorAnimationControllerStatePlayer const &) = delete;
    ActorAnimationControllerStatePlayer(class ActorAnimationControllerStatePlayer const &) = delete;
    ActorAnimationControllerStatePlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1051701355
     */
    virtual ~ActorAnimationControllerStatePlayer();
    /**
     * @vftbl  1
     * @symbol ?applyToPose@ActorAnimationControllerStatePlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
     * @hash   241670595
     */
    virtual void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    /**
     * @vftbl  2
     * @symbol ?resetAnimation@ActorAnimationControllerStatePlayer@@UEAAXXZ
     * @hash   -1490232139
     */
    virtual void resetAnimation();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1405708028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1404784507
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?hasAnimationFinished@ActorAnimationControllerStatePlayer@@UEBA_NXZ
     * @hash   245803501
     */
    virtual bool hasAnimationFinished() const;
    /**
     * @vftbl  7
     * @symbol ?findAnimation@ActorAnimationControllerStatePlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
     * @hash   -223624336
     */
    virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const &);
    /**
     * @vftbl  8
     * @symbol ?getAnimationType@ActorAnimationControllerStatePlayer@@UEBA?AW4ActorAnimationType@@XZ
     * @hash   308826104
     */
    virtual enum ActorAnimationType getAnimationType() const;
    /**
     * @vftbl  9
     * @symbol ?getRawName@ActorAnimationControllerStatePlayer@@UEBAAEBVHashedString@@XZ
     * @hash   -1397028827
     */
    virtual class HashedString const & getRawName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONCONTROLLERSTATEPLAYER
    /**
     * @symbol ?bindParticleEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
     * @hash   343749507
     */
    MCVAPI void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
    /**
     * @symbol ?bindSoundEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
     * @hash   -2119430104
     */
    MCVAPI void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
#endif
    /**
     * @symbol ??0ActorAnimationControllerStatePlayer@@QEAA@AEBVHashedString@@AEAVActorAnimationControllerPlayer@@V?$shared_ptr@VActorAnimationControllerState@@@std@@AEAVAnimationComponent@@AEBVExpressionNode@@AEAV?$set@VHashedString@@U?$hash@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@4@@Z
     * @hash   1795705744
     */
    MCAPI ActorAnimationControllerStatePlayer(class HashedString const &, class ActorAnimationControllerPlayer &, class std::shared_ptr<class ActorAnimationControllerState>, class AnimationComponent &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    /**
     * @symbol ?allAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
     * @hash   -372839888
     */
    MCAPI bool allAnimationsFinished() const;
    /**
     * @symbol ?anyAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
     * @hash   -1036090864
     */
    MCAPI bool anyAnimationsFinished() const;

};