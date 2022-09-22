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
     * @hash   2113833095
     */
    MCAPI ContentLog();
    /**
     * @symbol ?isEnabled@ContentLog@@QEBA_NXZ
     * @hash   733501928
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?log@ContentLog@@QEAAX_NW4LogLevel@@W4LogArea@@ZZ
     * @hash   290573865
     */
    MCAPI void log(bool, enum LogLevel, enum LogArea, ...);
    /**
     * @symbol ?unregisterEndPoint@ContentLog@@QEAAXV?$not_null@PEAVContentLogEndPoint@@@gsl@@@Z
     * @hash   -163550543
     */
    MCAPI void unregisterEndPoint(class gsl::not_null<class ContentLogEndPoint *>);
    /**
     * @symbol ?updateEnabledStatus@ContentLog@@QEAAXXZ
     * @hash   2034469427
     */
    MCAPI void updateEnabledStatus();
    /**
     * @symbol ?getLogAreaName@ContentLog@@SAPEBDW4LogArea@@@Z
     * @hash   1567023636
     */
    MCAPI static char const * getLogAreaName(enum LogArea);
    /**
     * @symbol ?getLogLevelName@ContentLog@@SAPEBDW4LogLevel@@@Z
     * @hash   475921450
     */
    MCAPI static char const * getLogLevelName(enum LogLevel);

//private:
    /**
     * @symbol ?_writeToLog@ContentLog@@AEAAX_NW4LogArea@@W4LogLevel@@AEAPEAD@Z
     * @hash   55686935
     */
    MCAPI void _writeToLog(bool, enum LogArea, enum LogLevel, char *&);

private:

};