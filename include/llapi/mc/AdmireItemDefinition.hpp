/**
 * @file  AdmireItemDefinition.hpp
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
 * @brief MC class AdmireItemDefinition.
 *
 */
class AdmireItemDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMDEFINITION
public:
    class AdmireItemDefinition& operator=(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@AdmireItemDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAdmireItemDefinition@@@JsonUtil@@@std@@@Z
     * @hash   155343942
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AdmireItemDefinition>> &);

};