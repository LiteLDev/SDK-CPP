// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StringByteInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BigEndianStringByteInput : public StringByteInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEINPUT
public:
    class BigEndianStringByteInput& operator=(class BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput(class BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput() = delete;
#endif


public:
    /*0*/ virtual ~BigEndianStringByteInput();
    /*3*/ virtual float readFloat();
    /*4*/ virtual double readDouble();
    /*6*/ virtual short readShort();
    /*7*/ virtual int readInt();
    /*8*/ virtual __int64 readLongLong();
    /*9*/ virtual bool readBytes(void *, unsigned __int64);
    /*11*/ virtual bool readBigEndianBytes(void *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGENDIANSTRINGBYTEINPUT
public:
#endif


};