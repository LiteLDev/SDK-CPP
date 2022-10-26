/**
 * @file  KickCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KickCommand.
 *
 */
class KickCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KICKCOMMAND
public:
    class KickCommand& operator=(class KickCommand const &) = delete;
    KickCommand(class KickCommand const &) = delete;
    KickCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   393677043
     */
    virtual ~KickCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@KickCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1701359182
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@KickCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -73352576
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_canKickPlayerOrGenerateFailureOutput@KickCommand@@AEBA_NAEBVPlayer@@AEAVCommandOutput@@PEAVLevel@@@Z
     * @hash   -608473729
     */
    MCAPI bool _canKickPlayerOrGenerateFailureOutput(class Player const &, class CommandOutput &, class Level *) const;
    /**
     * @symbol ?_findTarget@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@33@Z
     * @hash   235857957
     */
    MCAPI class Player const * _findTarget(class CommandOrigin const &, class CommandOutput &, class Level &, std::string const &, std::string const &, std::string const &) const;
    /**
     * @symbol ?_generateSuccessOutput@KickCommand@@AEBAXAEAVCommandOutput@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   -267558936
     */
    MCAPI void _generateSuccessOutput(class CommandOutput &, std::string const &, std::string const &) const;
    /**
     * @symbol ?_kickPlayer@KickCommand@@AEBAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1804687200
     */
    MCAPI void _kickPlayer(class Player const &, std::string const &) const;
    /**
     * @symbol ?_loopPlayers@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3V?$function@$$A6A_NPEBVPlayer@@@Z@7@@Z
     * @hash   -1721942988
     */
    MCAPI class Player const * _loopPlayers(class CommandOrigin const &, class CommandOutput &, class Level &, std::string const &, std::string const &, class std::function<bool (class Player const *)>) const;

private:

};