/**
 * @file  MC/LegacyTradeableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyTradeableDefinition.
 *
 */
class LegacyTradeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTRADEABLEDEFINITION
public:
    class LegacyTradeableDefinition& operator=(class LegacyTradeableDefinition const &) = delete;
    LegacyTradeableDefinition(class LegacyTradeableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1125380676
     * @symbol ??0LegacyTradeableDefinition@@QEAA@XZ
     */
    MCAPI LegacyTradeableDefinition();
    /**
     * @hash   -1963851947
     * @symbol ?initialize@LegacyTradeableDefinition@@QEAAXAEAVEntityContext@@AEAVLegacyTradeableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class LegacyTradeableComponent &);
    /**
     * @hash   489125410
     * @symbol ?buildSchema@LegacyTradeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VLegacyTradeableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LegacyTradeableDefinition>> &);

};