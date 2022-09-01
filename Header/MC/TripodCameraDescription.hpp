/**
 * @file  TripodCameraDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TripodCameraDescription.
 *
 */
class TripodCameraDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERADESCRIPTION
public:
    class TripodCameraDescription& operator=(class TripodCameraDescription const &) = delete;
    TripodCameraDescription(class TripodCameraDescription const &) = delete;
    TripodCameraDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@TripodCameraDescription@@UEBAPEBDXZ
     * @hash   1075816519
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -2057165365
     */
    virtual ~TripodCameraDescription();
    /**
     * @vftbl  3
     * @symbol ?serializeData@TripodCameraDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1691189370
     */
    virtual void serializeData(class Json::Value &) const;

};