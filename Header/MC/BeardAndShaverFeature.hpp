// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BeardAndShaverFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDANDSHAVERFEATURE
public:
    class BeardAndShaverFeature& operator=(class BeardAndShaverFeature const &) = delete;
    BeardAndShaverFeature(class BeardAndShaverFeature const &) = delete;
#endif


public:
    /*0*/ virtual ~BeardAndShaverFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEARDANDSHAVERFEATURE
public:
#endif
    MCAPI BeardAndShaverFeature();


};