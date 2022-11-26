/**
 * @file  EntityGoalFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityGoalFactory.
 *
 */
class EntityGoalFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYGOALFACTORY
public:
    class EntityGoalFactory& operator=(class EntityGoalFactory const &) = delete;
    EntityGoalFactory(class EntityGoalFactory const &) = delete;
    EntityGoalFactory() = delete;
#endif

public:
    /**
     * @symbol ?tryGetDefinitionSerializer@EntityGoalFactory@@QEAAPEAVIJsonDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1088138138
     */
    MCAPI class IJsonDefinitionSerializer * tryGetDefinitionSerializer(std::string const &);
    /**
     * @symbol ??1EntityGoalFactory@@QEAA@XZ
     * @hash   -420358352
     */
    MCAPI ~EntityGoalFactory();
    /**
     * @symbol ?addGoals@EntityGoalFactory@@SAXAEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
     * @hash   -131090883
     */
    MCAPI static void addGoals(class EntityContext &, class DefinitionInstanceGroup const &);

};