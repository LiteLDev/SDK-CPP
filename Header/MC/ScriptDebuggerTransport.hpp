/**
 * @file  ScriptDebuggerTransport.hpp
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
 * @brief MC class ScriptDebuggerTransport.
 *
 */
class ScriptDebuggerTransport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERTRANSPORT
public:
    class ScriptDebuggerTransport& operator=(class ScriptDebuggerTransport const &) = delete;
    ScriptDebuggerTransport(class ScriptDebuggerTransport const &) = delete;
    ScriptDebuggerTransport() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1980526155
     */
    virtual ~ScriptDebuggerTransport();
    /**
     * @vftbl  1
     * @symbol ?listen@ScriptDebuggerTransport@@UEAA_NG@Z
     * @hash   702265370
     */
    virtual bool listen(unsigned short);
    /**
     * @vftbl  2
     * @symbol ?connect@ScriptDebuggerTransport@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
     * @hash   1233739367
     */
    virtual bool connect(std::string const &, unsigned short);
    /**
     * @vftbl  3
     * @symbol ?selectClient@ScriptDebuggerTransport@@UEAA_NXZ
     * @hash   308362019
     */
    virtual bool selectClient();
    /**
     * @vftbl  4
     * @symbol ?connected@ScriptDebuggerTransport@@UEBA_NXZ
     * @hash   155375316
     */
    virtual bool connected() const;
    /**
     * @vftbl  5
     * @symbol ?lostConnection@ScriptDebuggerTransport@@UEBA_NXZ
     * @hash   -1097733043
     */
    virtual bool lostConnection() const;
    /**
     * @vftbl  6
     * @symbol ?readyClose@ScriptDebuggerTransport@@UEBA_NXZ
     * @hash   -1311348048
     */
    virtual bool readyClose() const;
    /**
     * @vftbl  7
     * @symbol ?close@ScriptDebuggerTransport@@UEAAXXZ
     * @hash   -1911137934
     */
    virtual void close();
    /**
     * @vftbl  8
     * @symbol ?peek@ScriptDebuggerTransport@@UEBA_NXZ
     * @hash   -1778312346
     */
    virtual bool peek() const;
    /**
     * @vftbl  9
     * @symbol ?receive@ScriptDebuggerTransport@@UEAA_NPEAD_K@Z
     * @hash   -801315311
     */
    virtual bool receive(char *, unsigned __int64);
    /**
     * @vftbl  10
     * @symbol ?send@ScriptDebuggerTransport@@UEAAXPEBD_K@Z
     * @hash   -2127389097
     */
    virtual void send(char const *, unsigned __int64);
    /**
     * @symbol ??0ScriptDebuggerTransport@@QEAA@AEAVIScriptDebuggerWatchdog@@@Z
     * @hash   -1110396020
     */
    MCAPI ScriptDebuggerTransport(class IScriptDebuggerWatchdog &);

};