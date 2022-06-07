// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMANAGERMODEL
public:
    class ContainerManagerModel& operator=(class ContainerManagerModel const &) = delete;
    ContainerManagerModel(class ContainerManagerModel const &) = delete;
    ContainerManagerModel() = delete;
#endif


public:
    /*0*/ virtual ~ContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*5*/ virtual void serverInitItemStackIds();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool) = 0;
    /*8*/ virtual class ItemStack const & getSlot(int) const = 0;
    /*9*/ virtual void setData(int, int) = 0;
    /*10*/ virtual void broadcastChanges() = 0;
    /*11*/ virtual void debitPlayerLevels(int);
    /*12*/ virtual bool isCreativeMode() const;
    /*13*/ virtual bool isClientSide() const;
    /*14*/ virtual bool isServerAuthoritative() const;
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMANAGERMODEL
public:
#endif
    MCAPI ContainerManagerModel(enum ContainerID, class Player &);
    MCAPI class Player & getPlayer() const;
    MCAPI void postInit();

//protected:
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const &);
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum ContainerEnumName) const;
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const &, float) const;
    MCAPI static void _appendCopies(std::vector<class ItemStack> &, std::vector<class ItemStack> const &);

protected:


};