/**
 * @file  FogCommandUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace FogCommandUtil.
 *
 */
namespace FogCommandUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -607255663
     * @symbol ?pop@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
     */
    MCAPI bool pop(std::string const &, std::string const &, class CommandOutput &, class Player &, class FogCommandComponent &);
    /**
     * @hash   844935759
     * @symbol ?push@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
     */
    MCAPI bool push(std::string const &, std::string const &, class CommandOutput &, class Player &, class FogCommandComponent &);
    /**
     * @hash   1070661215
     * @symbol ?remove@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
     */
    MCAPI bool remove(std::string const &, std::string const &, class CommandOutput &, class Player &, class FogCommandComponent &);

};