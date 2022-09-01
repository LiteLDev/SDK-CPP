/**
 * @file  BlockDescriptor.hpp
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
 * @brief MC class BlockDescriptor.
 *
 */
class BlockDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTOR
public:
    class BlockDescriptor& operator=(class BlockDescriptor const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockDescriptor@@QEAA@XZ
     * @hash   -1876064152
     */
    MCAPI BlockDescriptor();
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBVHashedString@@@Z
     * @hash   -1667909183
     */
    MCAPI BlockDescriptor(class HashedString const &);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEBV?$vector@VBlockState@BlockDescriptor@@V?$allocator@VBlockState@BlockDescriptor@@@std@@@2@@Z
     * @hash   1333387179
     */
    MCAPI BlockDescriptor(std::string const &, std::vector<class BlockDescriptor::BlockState> const &&);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBV0@@Z
     * @hash   -749385135
     */
    MCAPI BlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@$$QEAV0@@Z
     * @hash   134215617
     */
    MCAPI BlockDescriptor(class BlockDescriptor &&);
    /**
     * @symbol ?getBlock@BlockDescriptor@@QEBAPEBVBlock@@XZ
     * @hash   1545367537
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol ?getTagExpression@BlockDescriptor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   3777476
     */
    MCAPI std::string const & getTagExpression() const;
    /**
     * @symbol ?isValid@BlockDescriptor@@QEBA_NXZ
     * @hash   -1554412026
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?matches@BlockDescriptor@@QEBA_NAEBVBlock@@@Z
     * @hash   -592513517
     */
    MCAPI bool matches(class Block const &) const;
    /**
     * @symbol ??4BlockDescriptor@@QEAAXAEBV0@@Z
     * @hash   -395899877
     */
    MCAPI void operator=(class BlockDescriptor const &);
    /**
     * @symbol ??4BlockDescriptor@@QEAAX$$QEAV0@@Z
     * @hash   -1030535125
     */
    MCAPI void operator=(class BlockDescriptor &&);
    /**
     * @symbol ?toCompoundTag@BlockDescriptor@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1076122826
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    /**
     * @symbol ??1BlockDescriptor@@QEAA@XZ
     * @hash   1687295480
     */
    MCAPI ~BlockDescriptor();
    /**
     * @symbol ?JSON_NAME_FIELD@BlockDescriptor@@2QBDB
     * @hash   670923741
     */
    MCAPI static char const JSON_NAME_FIELD[];
    /**
     * @symbol ?JSON_STATES_FIELD@BlockDescriptor@@2QBDB
     * @hash   -556938157
     */
    MCAPI static char const JSON_STATES_FIELD[];
    /**
     * @symbol ?JSON_TAGS_FIELD@BlockDescriptor@@2QBDB
     * @hash   -1816641679
     */
    MCAPI static char const JSON_TAGS_FIELD[];
    /**
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBV1@@Z
     * @hash   -249490293
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class BlockDescriptor const &);
    /**
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBVBlock@@@Z
     * @hash   -245984694
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class Block const &);
    /**
     * @symbol ?bindType@BlockDescriptor@@SAXXZ
     * @hash   2063715615
     */
    MCAPI static void bindType();
    /**
     * @symbol ?fromCompoundTag@BlockDescriptor@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1540298980
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const &);
    /**
     * @symbol ?fromTagExpression@BlockDescriptor@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@@Z
     * @hash   679611031
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const &, enum MolangVersion);

//private:
    /**
     * @symbol ?_anyTagsMatch@BlockDescriptor@@AEBA_NAEBVBlock@@@Z
     * @hash   -2130112158
     */
    MCAPI bool _anyTagsMatch(class Block const &) const;
    /**
     * @symbol ?_resolveImpl@BlockDescriptor@@AEBAXXZ
     * @hash   -481540900
     */
    MCAPI void _resolveImpl() const;

private:

};