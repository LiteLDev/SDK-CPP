// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IContentKeyProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONTENTKEYPROVIDER
public:
    class IContentKeyProvider& operator=(class IContentKeyProvider const &) = delete;
    IContentKeyProvider(class IContentKeyProvider const &) = delete;
    IContentKeyProvider() = delete;
#endif


public:
    /*0*/ virtual ~IContentKeyProvider();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual std::string getAlternateContentKey(class ContentIdentity const &) const;
    /*3*/ virtual bool requireEncryptedReads() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTKEYPROVIDER
public:
#endif


};