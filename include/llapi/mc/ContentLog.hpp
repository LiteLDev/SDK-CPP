/**
 * @file  ContentLog.hpp
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
 * @brief MC class ContentLog.
 *
 */
class ContentLog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG
public:
    class ContentLog& operator=(class ContentLog const &) = delete;
    ContentLog(class ContentLog const &) = delete;
#endif

public:
    /**
     * @symbol ??0ContentLog@@QEAA@XZ
     * @hash   -1944405305
     */
    MCAPI ContentLog();
    /**
     * @symbol ?isEnabled@ContentLog@@QEBA_NXZ
     * @hash   1221428536
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?log@ContentLog@@QEAAX_NW4LogLevel@@W4LogArea@@ZZ
     * @hash   527579529
     */
    MCAPI void log(bool, enum class LogLevel, enum class LogArea, ...);
    /**
     * @symbol ?unregisterEndPoint@ContentLog@@QEAAXV?$not_null@PEAVContentLogEndPoint@@@gsl@@@Z
     * @hash   73455121
     */
    MCAPI void unregisterEndPoint(class gsl::not_null<class ContentLogEndPoint *>);
    /**
     * @symbol ?updateEnabledStatus@ContentLog@@QEAAXXZ
     * @hash   -2023476829
     */
    MCAPI void updateEnabledStatus();
    /**
     * @symbol ?getLogAreaName@ContentLog@@SAPEBDW4LogArea@@@Z
     * @hash   1804029300
     */
    MCAPI static char const * getLogAreaName(enum class LogArea);
    /**
     * @symbol ?getLogLevelName@ContentLog@@SAPEBDW4LogLevel@@@Z
     * @hash   712927114
     */
    MCAPI static char const * getLogLevelName(enum class LogLevel);

//private:
    /**
     * @symbol ?_writeToLog@ContentLog@@AEAAX_NW4LogArea@@W4LogLevel@@AEAPEAD@Z
     * @hash   292677223
     */
    MCAPI void _writeToLog(bool, enum class LogArea, enum class LogLevel, char *&);

private:

};