/**
 * @file  FeedItem.hpp
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
 * @brief MC structure FeedItem.
 *
 */
struct FeedItem {

#define AFTER_EXTRA
// Add Member There
struct Effect {
    Effect() = delete;
    Effect(Effect const&) = delete;
    Effect(Effect const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEEDITEM
public:
    struct FeedItem& operator=(struct FeedItem const &) = delete;
    FeedItem() = delete;
#endif

public:
    /**
     * @symbol ??0FeedItem@@QEAA@AEBU0@@Z
     * @hash   2009071039
     */
    MCAPI FeedItem(struct FeedItem const &);
    /**
     * @symbol ?addEffect@FeedItem@@QEAAXAEBUEffect@1@@Z
     * @hash   1425422558
     */
    MCAPI void addEffect(struct FeedItem::Effect const &);
    /**
     * @symbol ??4FeedItem@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -128559610
     */
    MCAPI struct FeedItem & operator=(struct FeedItem &&);
    /**
     * @symbol ??1FeedItem@@QEAA@XZ
     * @hash   -219715749
     */
    MCAPI ~FeedItem();

};