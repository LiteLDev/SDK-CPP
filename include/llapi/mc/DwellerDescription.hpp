/**
 * @file  DwellerDescription.hpp
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
 * @brief MC class DwellerDescription.
 *
 */
class DwellerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERDESCRIPTION
public:
    class DwellerDescription& operator=(class DwellerDescription const &) = delete;
    DwellerDescription(class DwellerDescription const &) = delete;
    DwellerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@DwellerDescription@@UEBAPEBDXZ
     * @hash   -1374838073
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   248384615
     */
    virtual ~DwellerDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@DwellerDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   2100697196
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@DwellerDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   263062950
     */
    virtual void serializeData(class Json::Value &) const;

};