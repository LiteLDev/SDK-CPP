/**
 * @file  PackError.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackError.
 *
 */
class PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKERROR
public:
    class PackError& operator=(class PackError const &) = delete;
    PackError() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1926527421
     */
    virtual ~PackError();
    /**
     * @vftbl  1
     * @symbol ?getLocErrorMessage@PackError@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1152788388
     */
    virtual std::string getLocErrorMessage() const;
    /**
     * @vftbl  2
     * @symbol ?getLocErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     * @hash   195454247
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const = 0;
    /**
     * @vftbl  3
     * @symbol ?getEventErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     * @hash   -667188531
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const = 0;
    /**
     * @symbol ??0PackError@@QEAA@W4PackErrorType@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -2136234892
     */
    MCAPI PackError(enum PackErrorType, std::vector<std::string> const &);
    /**
     * @symbol ??0PackError@@QEAA@AEBV0@@Z
     * @hash   2079405793
     */
    MCAPI PackError(class PackError const &);
    /**
     * @symbol ?getErrorParameters@PackError@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1766628941
     */
    MCAPI std::vector<std::string> const & getErrorParameters() const;
    /**
     * @symbol ?getEventErrorMessage@PackError@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1751947232
     */
    MCAPI std::string getEventErrorMessage() const;
    /**
     * @symbol ?serialize@PackError@@QEAAXAEAVValue@Json@@@Z
     * @hash   2087411050
     */
    MCAPI void serialize(class Json::Value &);

};