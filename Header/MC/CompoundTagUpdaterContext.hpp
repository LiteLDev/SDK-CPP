// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompoundTagUpdaterContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATERCONTEXT
public:
    class CompoundTagUpdaterContext& operator=(class CompoundTagUpdaterContext const &) = delete;
    CompoundTagUpdaterContext(class CompoundTagUpdaterContext const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAGUPDATERCONTEXT
public:
#endif
    MCAPI CompoundTagUpdaterContext();
    MCAPI class CompoundTagUpdaterBuilder addUpdater(unsigned char, unsigned char, unsigned char);
    MCAPI void sortUpdaters();
    MCAPI enum CompoundTagUpdaterResult update(class CompoundTag &, unsigned int);

//private:
    MCAPI static bool comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const &, std::unique_ptr<class CompoundTagUpdater> const &);

private:


};