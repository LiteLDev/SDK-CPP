/**
 * @file  CerealSchemaUpgrade.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealSchemaUpgrade.
 *
 */
class CerealSchemaUpgrade {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADE
public:
    class CerealSchemaUpgrade& operator=(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1752406505
     */
    virtual ~CerealSchemaUpgrade();
    /**
     * @vftbl  1
     * @hash   1967983905
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol ?upgradeToNext@CerealSchemaUpgrade@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
     * @hash   -237950259
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;
    /**
     * @symbol ??0CerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   -767466162
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const &, std::string const &);
    /**
     * @symbol ?bindLegacySchema@CerealSchemaUpgrade@@QEAAXAEAVSchemaFactory@reflection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1501956087
     */
    MCAPI void bindLegacySchema(class reflection::SchemaFactory &, std::string const &);
    /**
     * @symbol ?getTargetVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     * @hash   -1311331556
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @symbol ?registerLegacySchema@CerealSchemaUpgrade@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2117960964
     */
    MCAPI void registerLegacySchema(std::string const &);

};