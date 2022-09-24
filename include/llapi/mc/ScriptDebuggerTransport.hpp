/**
 * @file  ScriptDebuggerTransport.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptDebuggerTransport();
    /**
     * @hash   702265370
     * @vftbl  1
     * @symbol ?listen@ScriptDebuggerTransport@@UEAA_NG@Z
     */
    virtual bool listen(unsigned short);
    /**
     * @hash   1233739367
     * @vftbl  2
     * @symbol ?connect@ScriptDebuggerTransport@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
     */
    virtual bool connect(std::string const &, unsigned short);
    /**
     * @hash   308362019
     * @vftbl  3
     * @symbol ?selectClient@ScriptDebuggerTransport@@UEAA_NXZ
     */
    virtual bool selectClient();
    /**
     * @hash   155375316
     * @vftbl  4
     * @symbol ?connected@ScriptDebuggerTransport@@UEBA_NXZ
     */
    virtual bool connected() const;
    /**
     * @hash   -1097733043
     * @vftbl  5
     * @symbol ?lostConnection@ScriptDebuggerTransport@@UEBA_NXZ
     */
    virtual bool lostConnection() const;
    /**
     * @hash   -1311348048
     * @vftbl  6
     * @symbol ?readyClose@ScriptDebuggerTransport@@UEBA_NXZ
     */
    virtual bool readyClose() const;
    /**
     * @hash   -1911137934
     * @vftbl  7
     * @symbol ?close@ScriptDebuggerTransport@@UEAAXXZ
     */
    virtual void close();
    /**
     * @hash   -1778312346
     * @vftbl  8
     * @symbol ?peek@ScriptDebuggerTransport@@UEBA_NXZ
     */
    virtual bool peek() const;
    /**
     * @hash   -801315311
     * @vftbl  9
     * @symbol ?receive@ScriptDebuggerTransport@@UEAA_NPEAD_K@Z
     */
    virtual bool receive(char *, unsigned __int64);
    /**
     * @hash   -2127389097
     * @vftbl  10
     * @symbol ?send@ScriptDebuggerTransport@@UEAAXPEBD_K@Z
     */
    virtual void send(char const *, unsigned __int64);
    /**
     * @hash   -1110396020
     * @symbol ??0ScriptDebuggerTransport@@QEAA@AEAVIScriptDebuggerWatchdog@@@Z
     */
    MCAPI ScriptDebuggerTransport(class IScriptDebuggerWatchdog &);

};