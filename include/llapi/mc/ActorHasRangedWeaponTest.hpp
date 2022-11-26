/**
 * @file  ActorHasRangedWeaponTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHasRangedWeaponTest.
 *
 */
class ActorHasRangedWeaponTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASRANGEDWEAPONTEST
public:
    class ActorHasRangedWeaponTest& operator=(class ActorHasRangedWeaponTest const &) = delete;
    ActorHasRangedWeaponTest(class ActorHasRangedWeaponTest const &) = delete;
    ActorHasRangedWeaponTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1942091324
     */
    virtual ~ActorHasRangedWeaponTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorHasRangedWeaponTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1062276116
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorHasRangedWeaponTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1882790262
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};