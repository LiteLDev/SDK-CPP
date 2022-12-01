/**
 * @file  RakDataInput.hpp
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
 * @brief MC class RakDataInput.
 *
 */
class RakDataInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAINPUT
public:
    class RakDataInput& operator=(class RakDataInput const &) = delete;
    RakDataInput(class RakDataInput const &) = delete;
    RakDataInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   740103630
     */
    virtual ~RakDataInput();
    /**
     * @vftbl  1
     * @symbol ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -266477986
     */
    virtual std::string readString();
    /**
     * @vftbl  2
     * @symbol ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1523947846
     */
    virtual std::string readLongString();
    /**
     * @vftbl  3
     * @symbol ?readFloat@BytesDataInput@@UEAAMXZ
     * @hash   298810305
     */
    virtual float readFloat();
    /**
     * @vftbl  4
     * @symbol ?readDouble@BytesDataInput@@UEAANXZ
     * @hash   1253523053
     */
    virtual double readDouble();
    /**
     * @vftbl  5
     * @symbol ?readByte@BytesDataInput@@UEAADXZ
     * @hash   720246575
     */
    virtual char readByte();
    /**
     * @vftbl  6
     * @symbol ?readShort@BytesDataInput@@UEAAFXZ
     * @hash   -1494846431
     */
    virtual short readShort();
    /**
     * @vftbl  7
     * @symbol ?readInt@BytesDataInput@@UEAAHXZ
     * @hash   -1779805311
     */
    virtual int readInt();
    /**
     * @vftbl  8
     * @symbol ?readLongLong@BytesDataInput@@UEAA_JXZ
     * @hash   457281312
     */
    virtual __int64 readLongLong();
    /**
     * @vftbl  9
     * @symbol ?readBytes@RakDataInput@@UEAA_NPEAX_K@Z
     * @hash   1857938490
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @vftbl  10
     * @symbol ?numBytesLeft@RakDataInput@@UEBA_KXZ
     * @hash   -442602376
     */
    virtual unsigned __int64 numBytesLeft() const;

};