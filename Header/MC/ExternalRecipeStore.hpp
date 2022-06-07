// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExternalRecipeStore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALRECIPESTORE
public:
    class ExternalRecipeStore& operator=(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXTERNALRECIPESTORE
public:
#endif
    MCAPI void registerBlockReduction(class ItemStack const &, std::vector<class ItemStack> &&);
    MCAPI void setBlockReducer(class BlockReducer *);


};