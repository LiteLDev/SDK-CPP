/**
 * @file  PackAccessStrategyFactory.hpp
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
 * @brief MC class PackAccessStrategyFactory.
 *
 */
class PackAccessStrategyFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKACCESSSTRATEGYFACTORY
public:
    class PackAccessStrategyFactory& operator=(class PackAccessStrategyFactory const &) = delete;
    PackAccessStrategyFactory(class PackAccessStrategyFactory const &) = delete;
    PackAccessStrategyFactory() = delete;
#endif

public:
    /**
     * @hash   -873894338
     * @symbol ?create@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEAVResourceLocation@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEAVPackReport@@_N@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> create(class ResourceLocation &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class PackReport &, bool);
    /**
     * @hash   1911278930
     * @symbol ?createForDirectory@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@_N@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForDirectory(class ResourceLocation const &, bool);
    /**
     * @hash   -1559330420
     * @symbol ?createForEncrypted@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@_N@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncrypted(class ResourceLocation const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, bool);
    /**
     * @hash   -628755920
     * @symbol ?createForEncryptedZip@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncryptedZip(class ResourceLocation const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @hash   -1003559758
     * @symbol ?createForZip@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@_N@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForZip(class ResourceLocation const &, bool);

};