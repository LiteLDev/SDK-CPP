/**
 * @file  BlockGeometryDescription.hpp
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
 * @brief MC structure BlockGeometryDescription.
 *
 */
struct BlockGeometryDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGEOMETRYDESCRIPTION
public:
    struct BlockGeometryDescription& operator=(struct BlockGeometryDescription const &) = delete;
    BlockGeometryDescription(struct BlockGeometryDescription const &) = delete;
    BlockGeometryDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -265885401
     */
    virtual ~BlockGeometryDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockGeometryDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1478670652
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   1201953816
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockGeometryDescription@@UEBA_NXZ
     * @hash   1482938500
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockGeometryDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   552804134
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockGeometryDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1621455516
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  7
     * @symbol ?handleVersionBasedInitialization@BlockGeometryDescription@@UEAAXAEBVSemVersion@@@Z
     * @hash   1023584583
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
    /**
     * @symbol ?NameID@BlockGeometryDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1414256267
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockGeometryDescription@@SAXXZ
     * @hash   -190448173
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockGeometryDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   1909802824
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};