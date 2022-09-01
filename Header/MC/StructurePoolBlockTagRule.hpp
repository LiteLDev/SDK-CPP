/**
 * @file  StructurePoolBlockTagRule.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockTagRule.
 *
 */
class StructurePoolBlockTagRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKTAGRULE
public:
    class StructurePoolBlockTagRule& operator=(class StructurePoolBlockTagRule const &) = delete;
    StructurePoolBlockTagRule(class StructurePoolBlockTagRule const &) = delete;
    StructurePoolBlockTagRule() = delete;
#endif

public:
    /**
     * @symbol ??0StructurePoolBlockTagRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolBlockTagPredicate@@U?$default_delete@VIStructurePoolBlockTagPredicate@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1@Z
     * @hash   1050392792
     */
    MCAPI StructurePoolBlockTagRule(std::unique_ptr<class IStructurePoolBlockTagPredicate> &&, std::string, std::string);
    /**
     * @symbol ?processRule@StructurePoolBlockTagRule@@QEBA_NAEBVBlock@@AEAVCompoundTag@@@Z
     * @hash   -1867310362
     */
    MCAPI bool processRule(class Block const &, class CompoundTag &) const;

};