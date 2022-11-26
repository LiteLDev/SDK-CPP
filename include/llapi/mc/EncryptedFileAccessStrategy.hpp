/**
 * @file  EncryptedFileAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "DirectoryPackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedFileAccessStrategy.
 *
 */
class EncryptedFileAccessStrategy : public DirectoryPackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDFILEACCESSSTRATEGY
public:
    class EncryptedFileAccessStrategy& operator=(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1016338363
     */
    virtual ~EncryptedFileAccessStrategy();
    /**
     * @vftbl  4
     * @symbol ?isWritable@EncryptedFileAccessStrategy@@UEBA_NXZ
     * @hash   -2028702389
     */
    virtual bool isWritable() const;
    /**
     * @vftbl  6
     * @symbol ?isTrusted@EncryptedFileAccessStrategy@@UEBA_NXZ
     * @hash   1785687966
     */
    virtual bool isTrusted() const;
    /**
     * @vftbl  7
     * @symbol ?hasAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     * @hash   662327758
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @vftbl  9
     * @symbol ?getAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -275233803
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @vftbl  10
     * @symbol ?deleteAsset@EncryptedFileAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     * @hash   1615363337
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @vftbl  11
     * @symbol ?writeAsset@EncryptedFileAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1790747126
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @vftbl  16
     * @symbol ?createSubPack@EncryptedFileAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     * @hash   585606292
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @vftbl  17
     * @symbol ?generateAssetSet@EncryptedFileAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     * @hash   1392141167
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @vftbl  21
     * @symbol ?readContentIdentity@EncryptedFileAccessStrategy@@UEBA?AVContentIdentity@@XZ
     * @hash   -1108372086
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @symbol ??0EncryptedFileAccessStrategy@@QEAA@AEBVResourceLocation@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@_NV?$optional@V?$unordered_map@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@U?$equal_to@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@V?$allocator@U?$pair@$$CBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@4@@std@@@std@@@Z
     * @hash   -1699662265
     */
    MCAPI EncryptedFileAccessStrategy(class ResourceLocation const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, bool, class std::optional<class std::unordered_map<class Core::PathBuffer<std::string>, std::string, struct std::hash<class Core::PathBuffer<std::string>>, struct std::equal_to<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, std::string>>>>);
    /**
     * @symbol ?isValidEncryptedPack@EncryptedFileAccessStrategy@@SA_NAEBVPath@Core@@AEAVContentIdentity@@@Z
     * @hash   837696200
     */
    MCAPI static bool isValidEncryptedPack(class Core::Path const &, class ContentIdentity &);

//protected:
    /**
     * @symbol ?_getContentsFile@EncryptedFileAccessStrategy@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   740214485
     */
    MCAPI std::string _getContentsFile();

//private:
    /**
     * @symbol ?_getContentIdentityFromEncryptedStream@EncryptedFileAccessStrategy@@CA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVContentIdentity@@@Z
     * @hash   -1065069069
     */
    MCAPI static bool _getContentIdentityFromEncryptedStream(std::string &, class ContentIdentity &);
    /**
     * @symbol ?_transformStream@EncryptedFileAccessStrategy@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_K@Z
     * @hash   1929941629
     */
    MCAPI static void _transformStream(std::string &, std::string const &, unsigned __int64);

protected:

private:

};