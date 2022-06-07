// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JournaledFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JOURNALEDFILE
public:
    class JournaledFile& operator=(class JournaledFile const &) = delete;
    JournaledFile(class JournaledFile const &) = delete;
    JournaledFile() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JOURNALEDFILE
public:
#endif
    MCAPI JournaledFile(class std::function<class Core::Result (class Core::Path)> &&);
    MCAPI class Core::Result close();
    MCAPI class Core::Result open(class Core::Path, class Core::FileOpenMode, enum Core::FileBufferingMode);
    MCAPI class Core::Result write(void const *, unsigned __int64);
    MCAPI ~JournaledFile();
    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);
    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);
    MCAPI static bool isOldFile(class Core::Path);
    MCAPI static void populateImportantFiles(class Core::Path, std::vector<std::string> &);
    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path);

//private:
    MCAPI void _flushFiles();

private:


};