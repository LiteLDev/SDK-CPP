// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnderChestContainer : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTCONTAINER
public:
    class EnderChestContainer& operator=(class EnderChestContainer const &) = delete;
    EnderChestContainer(class EnderChestContainer const &) = delete;
#endif


public:
    /*0*/ virtual ~EnderChestContainer();
    /*16*/ virtual void startOpen(class Player &);
    /*17*/ virtual void stopOpen(class Player &);
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERCHESTCONTAINER
public:
#endif
    MCAPI EnderChestContainer();
    MCAPI static int const ITEMS_SIZE;


};