/**
 * @file  FileSystemFileAccess.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileSystemFileAccess.
 *
 */
class FileSystemFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILESYSTEMFILEACCESS
public:
    class FileSystemFileAccess& operator=(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -364388875
     */
    virtual ~FileSystemFileAccess();
    /**
     * @vftbl  1
     * @symbol ?fopen@FileSystemFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1562946605
     */
    virtual void * fopen(class Core::Path const &, std::string const &);
    /**
     * @vftbl  2
     * @symbol ?fclose@FileSystemFileAccess@@UEAAHPEAX@Z
     * @hash   2067699777
     */
    virtual int fclose(void *);
    /**
     * @vftbl  3
     * @symbol ?fseek@FileSystemFileAccess@@UEAAHPEAX_JH@Z
     * @hash   426952539
     */
    virtual int fseek(void *, __int64, int);
    /**
     * @vftbl  4
     * @symbol ?ftell@FileSystemFileAccess@@UEAA_JPEAX@Z
     * @hash   1129134994
     */
    virtual __int64 ftell(void *);
    /**
     * @vftbl  5
     * @symbol ?getReadInterface@FileSystemFileAccess@@UEBAPEBVIFileReadAccess@@XZ
     * @hash   -205040636
     */
    virtual class IFileReadAccess const * getReadInterface() const;
    /**
     * @vftbl  6
     * @symbol ?getWriteInterface@FileSystemFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
     * @hash   1310022276
     */
    virtual class IFileWriteAccess * getWriteInterface();
    /**
     * @vftbl  7
     * @symbol ?unload@FileSystemFileAccess@@UEAAXXZ
     * @hash   -1728769541
     */
    virtual void unload();
    /**
     * @symbol ??0FileSystemFileAccess@@QEAA@W4FileSystemMode@@@Z
     * @hash   -1758826530
     */
    MCAPI FileSystemFileAccess(enum FileSystemMode);

};