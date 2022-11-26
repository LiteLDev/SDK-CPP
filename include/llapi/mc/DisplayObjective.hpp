/**
 * @file  DisplayObjective.hpp
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
 * @brief MC class DisplayObjective.
 *
 */
class DisplayObjective {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYOBJECTIVE
public:
    class DisplayObjective& operator=(class DisplayObjective const &) = delete;
    DisplayObjective(class DisplayObjective const &) = delete;
    DisplayObjective() = delete;
#endif

public:
    /**
     * @symbol ??0DisplayObjective@@QEAA@AEBVObjective@@W4ObjectiveSortOrder@@@Z
     * @hash   1128387173
     */
    MCAPI DisplayObjective(class Objective const &, enum class ObjectiveSortOrder);
    /**
     * @symbol ?getBelowNameStringForId@DisplayObjective@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUScoreboardId@@@Z
     * @hash   -684422707
     */
    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const &) const;
    /**
     * @symbol ?getObjective@DisplayObjective@@QEBAAEBVObjective@@XZ
     * @hash   1331932576
     */
    MCAPI class Objective const & getObjective() const;
    /**
     * @symbol ?getSortOrder@DisplayObjective@@QEBA?AW4ObjectiveSortOrder@@XZ
     * @hash   1167593358
     */
    MCAPI enum class ObjectiveSortOrder getSortOrder() const;
    /**
     * @symbol ?isDisplaying@DisplayObjective@@QEBA_NAEBVObjective@@@Z
     * @hash   -672982067
     */
    MCAPI bool isDisplaying(class Objective const &) const;
    /**
     * @symbol ?isValid@DisplayObjective@@QEBA_NXZ
     * @hash   2019001846
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?deserialize@DisplayObjective@@SA?AV1@AEBVCompoundTag@@AEBVScoreboard@@@Z
     * @hash   -1902407212
     */
    MCAPI static class DisplayObjective deserialize(class CompoundTag const &, class Scoreboard const &);
    /**
     * @symbol ?serialize@DisplayObjective@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
     * @hash   1168947571
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class DisplayObjective const &);

};