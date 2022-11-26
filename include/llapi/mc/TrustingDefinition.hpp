/**
 * @file  TrustingDefinition.hpp
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
 * @brief MC class TrustingDefinition.
 *
 */
class TrustingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGDEFINITION
public:
    class TrustingDefinition& operator=(class TrustingDefinition const &) = delete;
    TrustingDefinition(class TrustingDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0TrustingDefinition@@QEAA@XZ
     * @hash   -466222743
     */
    MCAPI TrustingDefinition();
    /**
     * @symbol ?addTrustItemByName@TrustingDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2047828124
     */
    MCAPI void addTrustItemByName(std::string const &);
    /**
     * @symbol ?initialize@TrustingDefinition@@QEBAXAEAVEntityContext@@AEAVTrustingComponent@@@Z
     * @hash   -301269571
     */
    MCAPI void initialize(class EntityContext &, class TrustingComponent &) const;
    /**
     * @symbol ?buildSchema@TrustingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTrustingDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1752320602
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>> &);

};