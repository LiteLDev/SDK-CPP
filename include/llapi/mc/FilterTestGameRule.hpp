/**
 * @file  FilterTestGameRule.hpp
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
 * @brief MC class FilterTestGameRule.
 *
 */
class FilterTestGameRule : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTGAMERULE
public:
    class FilterTestGameRule& operator=(class FilterTestGameRule const &) = delete;
    FilterTestGameRule(class FilterTestGameRule const &) = delete;
    FilterTestGameRule() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1232055262
     */
    virtual ~FilterTestGameRule();
    /**
     * @vftbl  1
     * @symbol ?setup@FilterTestGameRule@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     * @hash   1130486386
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestGameRule@@UEBA_NAEBUFilterContext@@@Z
     * @hash   1245251082
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestGameRule@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   832201288
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @vftbl  6
     * @symbol ?_serializeValue@FilterTestGameRule@@MEBA?AVValue@Json@@XZ
     * @hash   1258952695
     */
    virtual class Json::Value _serializeValue() const;

};