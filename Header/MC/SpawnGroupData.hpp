/**
 * @file  SpawnGroupData.hpp
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
 * @brief MC class SpawnGroupData.
 *
 */
class SpawnGroupData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPDATA
public:
    class SpawnGroupData& operator=(class SpawnGroupData const &) = delete;
    SpawnGroupData(class SpawnGroupData const &) = delete;
    SpawnGroupData() = delete;
#endif

public:
    /**
     * @symbol ??0SpawnGroupData@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVMobSpawnRules@@@Z
     * @hash   -135813246
     */
    MCAPI SpawnGroupData(std::string const &, class MobSpawnRules &);
    /**
     * @symbol ?addSpawnRules@SpawnGroupData@@QEAAXAEAVMobSpawnRules@@@Z
     * @hash   242610830
     */
    MCAPI void addSpawnRules(class MobSpawnRules &);
    /**
     * @symbol ?getIdentifier@SpawnGroupData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1083520252
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @symbol ?getSpawnRules@SpawnGroupData@@QEBAAEBV?$vector@VMobSpawnRules@@V?$allocator@VMobSpawnRules@@@std@@@std@@XZ
     * @hash   -817588532
     */
    MCAPI std::vector<class MobSpawnRules> const & getSpawnRules() const;

};