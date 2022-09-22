/**
 * @file  DefendVillageTargetDefinition.hpp
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
 * @brief MC class DefendVillageTargetDefinition.
 *
 */
class DefendVillageTargetDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETDEFINITION
public:
    class DefendVillageTargetDefinition& operator=(class DefendVillageTargetDefinition const &) = delete;
    DefendVillageTargetDefinition(class DefendVillageTargetDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0DefendVillageTargetDefinition@@QEAA@XZ
     * @hash   33801542
     */
    MCAPI DefendVillageTargetDefinition();
    /**
     * @symbol ?initialize@DefendVillageTargetDefinition@@QEAAXAEAVEntityContext@@AEAVDefendVillageTargetGoal@@@Z
     * @hash   -214596209
     */
    MCAPI void initialize(class EntityContext &, class DefendVillageTargetGoal &);
    /**
     * @symbol ?buildSchema@DefendVillageTargetDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefendVillageTargetDefinition@@@JsonUtil@@@3@@Z
     * @hash   -1712638663
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DefendVillageTargetDefinition>> &);

};