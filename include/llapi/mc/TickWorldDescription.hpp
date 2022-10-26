/**
 * @file  TickWorldDescription.hpp
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
 * @brief MC class TickWorldDescription.
 *
 */
class TickWorldDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKWORLDDESCRIPTION
public:
    class TickWorldDescription& operator=(class TickWorldDescription const &) = delete;
    TickWorldDescription(class TickWorldDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@TickWorldDescription@@UEBAPEBDXZ
     * @hash   -2059446627
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -1538850415
     */
    virtual ~TickWorldDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@TickWorldDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -964228890
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@TickWorldDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   318238432
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @symbol ??0TickWorldDescription@@QEAA@XZ
     * @hash   1389047891
     */
    MCAPI TickWorldDescription();

};