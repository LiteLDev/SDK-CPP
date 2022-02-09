// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LightningBolt : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTNINGBOLT
public:
    class LightningBolt& operator=(class LightningBolt const&) = delete;
    LightningBolt(class LightningBolt const&) = delete;
    LightningBolt() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*9*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*14*/ virtual ~LightningBolt();
    /*20*/ virtual void __unk_vfn_20();
    /*22*/ virtual void __unk_vfn_22();
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void __unk_vfn_41();
    /*46*/ virtual void lerpMotion(class Vec3 const&);
    /*48*/ virtual void normalTick();
    /*52*/ virtual float getRidingHeight();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*93*/ virtual void __unk_vfn_93();
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual void __unk_vfn_99();
    /*100*/ virtual void __unk_vfn_100();
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual void __unk_vfn_113();
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual void __unk_vfn_128();
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*137*/ virtual void animateHurt();
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*143*/ virtual float getPickRadius();
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*156*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*158*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*160*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*171*/ virtual class HashedString const& queryEntityRenderer() const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual void __unk_vfn_174();
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual void __unk_vfn_181();
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*193*/ virtual void __unk_vfn_193();
    /*194*/ virtual void __unk_vfn_194();
    /*195*/ virtual void __unk_vfn_195();
    /*196*/ virtual void __unk_vfn_196();
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual void buildDebugInfo(std::string&) const;
    /*208*/ virtual int getDeathTime() const;
    /*219*/ virtual void swing();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*226*/ virtual float getYHeadRot() const;
    /*227*/ virtual void __unk_vfn_227();
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual void __unk_vfn_229();
    /*233*/ virtual void __unk_vfn_233();
    /*234*/ virtual void setAuxValue(int);
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void __unk_vfn_257();
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void __unk_vfn_265();
    /*273*/ virtual void _onSizeUpdated();
    /*
    inline void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1){
        void (LightningBolt::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?readAdditionalSaveData@LightningBolt@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class DataLoadHelper&>(a1));
    }
    inline void addAdditionalSaveData(class CompoundTag& a0){
        void (LightningBolt::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@LightningBolt@@UEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline bool shouldAlwaysRender(){
        bool (LightningBolt::*rv)();
        *((void**)&rv) = dlsym("?shouldAlwaysRender@LightningBolt@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void reloadHardcodedClient(enum Actor::InitializationMethod a0, class VariantParameterList const& a1){
        void (LightningBolt::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcodedClient@LightningBolt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<enum Actor::InitializationMethod>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    */
    MCAPI LightningBolt(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:
    MCAPI bool _shouldSetOnFire() const;

};