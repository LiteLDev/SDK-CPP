/**
 * @file  GameVersion.hpp
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
 * @brief MC class GameVersion.
 *
 */
class GameVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEVERSION
public:
    class GameVersion& operator=(class GameVersion const &) = delete;
    GameVersion(class GameVersion const &) = delete;
#endif

public:
    /**
     * @symbol ??0GameVersion@@QEAA@XZ
     * @hash   564533026
     */
    MCAPI GameVersion();
    /**
     * @symbol ??0GameVersion@@QEAA@IIIII@Z
     * @hash   -1773051981
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    /**
     * @symbol ??0GameVersion@@QEAA@AEBVListTag@@@Z
     * @hash   -31196085
     */
    MCAPI GameVersion(class ListTag const &);
    /**
     * @symbol ?asString@GameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1438582430
     */
    MCAPI std::string const & asString() const;
    /**
     * @symbol ??MGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -1935754462
     */
    MCAPI bool operator<(class GameVersion const &) const;
    /**
     * @symbol ??4GameVersion@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -29586992
     */
    MCAPI class GameVersion & operator=(class GameVersion &&);
    /**
     * @symbol ??PGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -663369622
     */
    MCAPI bool operator>=(class GameVersion const &) const;
    /**
     * @symbol ?serialize@GameVersion@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   -2044158334
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const;
    /**
     * @symbol ??1GameVersion@@QEAA@XZ
     * @hash   -713669198
     */
    MCAPI ~GameVersion();
    /**
     * @symbol ?current@GameVersion@@SA?AV1@XZ
     * @hash   168701821
     */
    MCAPI static class GameVersion current();

};