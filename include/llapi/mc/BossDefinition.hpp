/**
 * @file  BossDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class BossDefinition.
 *
 */
class BossDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSDEFINITION
public:
    class BossDefinition& operator=(class BossDefinition const &) = delete;
    BossDefinition(class BossDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BossDefinition@@QEAA@XZ
     * @hash   864908028
     */
    MCAPI BossDefinition();
    /**
     * @symbol ?initialize@BossDefinition@@QEAAXAEAVEntityContext@@AEAVBossComponent@@@Z
     * @hash   451031189
     */
    MCAPI void initialize(class EntityContext &, class BossComponent &);
    /**
     * @symbol ?buildSchema@BossDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBossDefinition@@@JsonUtil@@@std@@@Z
     * @hash   755935174
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BossDefinition>> &);

};