// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GrindstoneAdditionalContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRINDSTONEADDITIONALCONTAINERVALIDATION
public:
    class GrindstoneAdditionalContainerValidation& operator=(class GrindstoneAdditionalContainerValidation const&) = delete;
    GrindstoneAdditionalContainerValidation(class GrindstoneAdditionalContainerValidation const&) = delete;
    GrindstoneAdditionalContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~GrindstoneAdditionalContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const&) const;

protected:

private:

};