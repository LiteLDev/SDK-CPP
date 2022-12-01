/**
 * @file  BlockListSerializer.hpp
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
 * @brief MC class BlockListSerializer.
 *
 */
class BlockListSerializer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLISTSERIALIZER
public:
    class BlockListSerializer& operator=(class BlockListSerializer const &) = delete;
    BlockListSerializer(class BlockListSerializer const &) = delete;
    BlockListSerializer() = delete;
#endif

public:
    /**
     * @symbol ?loadJSON@BlockListSerializer@@SAXVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     * @hash   -396806126
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const &, std::vector<class BlockDescriptor> &);
    /**
     * @symbol ?loadJSON@BlockListSerializer@@SAXVValue@Json@@AEBVSemVersion@@AEAVBlockDescriptor@@@Z
     * @hash   -45798792
     */
    MCAPI static void loadJSON(class Json::Value, class SemVersion const &, class BlockDescriptor &);
    /**
     * @symbol ?saveJSON@BlockListSerializer@@SAXAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEAVValue@Json@@@Z
     * @hash   1936887233
     */
    MCAPI static void saveJSON(std::vector<class BlockDescriptor> const &, class Json::Value &);

};