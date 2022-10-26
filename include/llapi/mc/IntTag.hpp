/**
 * @file  IntTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IntTag.
 *
 */
class IntTag : public Tag {

#define AFTER_EXTRA
// Add Member There
int val;

public:
    LIAPI int& value();
    LIAPI IntTag& operator=(int val);
    LIAPI static std::unique_ptr<IntTag> create(int val = 0);
    LIAPI bool set(int val);
    LIAPI int get();
    LIAPI operator int() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTTAG
public:
    class IntTag& operator=(class IntTag const &) = delete;
    IntTag(class IntTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1510323317
     */
    virtual ~IntTag();
    /**
     * @vftbl  2
     * @symbol ?write@IntTag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   1271883436
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol ?load@IntTag@@UEAAXAEAVIDataInput@@@Z
     * @hash   501436795
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol ?toString@IntTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1356914187
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol ?getId@IntTag@@UEBA?AW4Type@Tag@@XZ
     * @hash   -1017515232
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol ?equals@IntTag@@UEBA_NAEBVTag@@@Z
     * @hash   282858305
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@IntTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   437439085
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol ?hash@IntTag@@UEBA_KXZ
     * @hash   -1950216493
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0IntTag@@QEAA@XZ
     * @hash   738612951
     */
    MCAPI IntTag();
    /**
     * @symbol ??0IntTag@@QEAA@H@Z
     * @hash   -52753692
     */
    MCAPI IntTag(int);

};