/**
 * @file  PrivateKeyManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrivateKeyManager.
 *
 */
class PrivateKeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIVATEKEYMANAGER
public:
    class PrivateKeyManager& operator=(class PrivateKeyManager const &) = delete;
    PrivateKeyManager(class PrivateKeyManager const &) = delete;
    PrivateKeyManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1684687231
     */
    virtual ~PrivateKeyManager();
    /**
     * @vftbl  1
     * @symbol ?isValid@PrivateKeyManager@@UEBA_NXZ
     * @hash   275658137
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0PrivateKeyManager@@QEAA@W4System@Asymmetric@Crypto@@@Z
     * @hash   -960611456
     */
    MCAPI PrivateKeyManager(enum Crypto::Asymmetric::System);
    /**
     * @symbol ?computeSecret@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVKeyManager@@@Z
     * @hash   23801679
     */
    MCAPI std::string computeSecret(class KeyManager const &) const;
    /**
     * @symbol ?sign@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4HashType@Hash@Crypto@@@Z
     * @hash   -814469020
     */
    MCAPI std::string sign(std::string const &, enum Crypto::Hash::HashType) const;

};