// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SystemFilePicker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYSTEMFILEPICKER
public:
    class SystemFilePicker& operator=(class SystemFilePicker const &) = delete;
    SystemFilePicker(class SystemFilePicker const &) = delete;
#endif


public:
    /*0*/ virtual ~SystemFilePicker();
    /*1*/ virtual void initFilePick(class Core::Path const &, class std::function<void (bool, struct FileInfo)>);
    /*2*/ virtual unsigned __int64 readBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> &);
    /*3*/ virtual bool writeBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYSTEMFILEPICKER
public:
#endif
    MCAPI SystemFilePicker();

//protected:
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const &);

protected:


};