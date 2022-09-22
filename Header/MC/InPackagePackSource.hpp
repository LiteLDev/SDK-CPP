/**
 * @file  MC/InPackagePackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InPackagePackSource.
 *
 */
class InPackagePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INPACKAGEPACKSOURCE
public:
    class InPackagePackSource& operator=(class InPackagePackSource const &) = delete;
    InPackagePackSource(class InPackagePackSource const &) = delete;
    InPackagePackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InPackagePackSource();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -1704180895
     * @vftbl  3
     * @symbol ?getPackOrigin@InPackagePackSource@@UEBA?AW4PackOrigin@@XZ
     */
    virtual enum PackOrigin getPackOrigin() const;
    /**
     * @hash   -806552015
     * @vftbl  4
     * @symbol ?getPackType@InPackagePackSource@@UEBA?AW4PackType@@XZ
     */
    virtual enum PackType getPackType() const;
    /**
     * @hash   -679434706
     * @vftbl  5
     * @symbol ?load@InPackagePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPACKAGEPACKSOURCE
    /**
     * @hash   -297565075
     * @symbol ?forEachPack@InPackagePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @hash   1086741068
     * @symbol ?forEachPackConst@InPackagePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @hash   -231173102
     * @symbol ??0InPackagePackSource@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@W4PackType@@@Z
     */
    MCAPI InPackagePackSource(class std::shared_ptr<class IInPackagePacks> const &, enum PackType);

};