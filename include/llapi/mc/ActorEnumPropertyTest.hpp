/**
 * @file  ActorEnumPropertyTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorEnumPropertyTest.
 *
 */
class ActorEnumPropertyTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORENUMPROPERTYTEST
public:
    class ActorEnumPropertyTest& operator=(class ActorEnumPropertyTest const &) = delete;
    ActorEnumPropertyTest(class ActorEnumPropertyTest const &) = delete;
    ActorEnumPropertyTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1186918389
     */
    virtual ~ActorEnumPropertyTest();
    /**
     * @vftbl  1
     * @symbol ?setup@ActorEnumPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     * @hash   -866833299
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorEnumPropertyTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   2023963999
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?getName@ActorEnumPropertyTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   447919939
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @vftbl  5
     * @symbol ?_serializeDomain@ActorEnumPropertyTest@@MEBA?AVValue@Json@@XZ
     * @hash   -1674003369
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl  6
     * @symbol ?_serializeValue@ActorEnumPropertyTest@@MEBA?AVValue@Json@@XZ
     * @hash   713360306
     */
    virtual class Json::Value _serializeValue() const;

};