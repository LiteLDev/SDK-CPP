/**
 * @file  Random.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class Random.
 *
 */
class Random {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOM
public:
    class Random& operator=(class Random const &) = delete;
    Random(class Random const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
    /**
     * @symbol ?consumeCount@Random@@UEAAXI@Z
     * @hash   1491417811
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @symbol ?fork@Random@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     * @hash   -830901249
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ?nextBoolean@Random@@UEAA_NXZ
     * @hash   408707419
     */
    MCVAPI bool nextBoolean();
    /**
     * @symbol ?nextDouble@Random@@UEAANXZ
     * @hash   750000891
     */
    MCVAPI double nextDouble();
    /**
     * @symbol ?nextFloat@Random@@UEAAMXZ
     * @hash   -218167515
     */
    MCVAPI float nextFloat();
    /**
     * @symbol ?nextGaussianDouble@Random@@UEAANXZ
     * @hash   -662129562
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @symbol ?nextInt@Random@@UEAAHH@Z
     * @hash   -348121782
     */
    MCVAPI int nextInt(int);
    /**
     * @symbol ?nextInt@Random@@UEAAHXZ
     * @hash   1663920693
     */
    MCVAPI int nextInt();
    /**
     * @symbol ?nextLong@Random@@UEAA_JXZ
     * @hash   -741709422
     */
    MCVAPI __int64 nextLong();
    /**
     * @symbol ??1Random@@UEAA@XZ
     * @hash   1467770228
     */
    MCVAPI ~Random();
#endif
    /**
     * @symbol ??0Random@@QEAA@XZ
     * @hash   -395905489
     */
    MCAPI Random();
    /**
     * @symbol ??0Random@@QEAA@I_N@Z
     * @hash   2136945963
     */
    MCAPI Random(unsigned int, bool);
    /**
     * @symbol ?nextGaussianFloat@Random@@QEAAMXZ
     * @hash   -1857808250
     */
    MCAPI float nextGaussianFloat();
    /**
     * @symbol ?nextGaussianInt@Random@@QEAAHH@Z
     * @hash   183144339
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @symbol ?nextInt@Random@@QEAAHHH@Z
     * @hash   -723926480
     */
    MCAPI int nextInt(int, int);
    /**
     * @symbol ?nextIntInclusive@Random@@QEAAHHH@Z
     * @hash   -1679866910
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @symbol ?getThreadLocal@Random@@SAAEAV1@XZ
     * @hash   1502166420
     */
    MCAPI static class Random & getThreadLocal();

//private:

private:
    /**
     * @symbol ?mThreadLocalRandom@Random@@0V?$ThreadLocalObject@VRandom@@V?$allocator@VRandom@@@std@@@Threading@Bedrock@@A
     * @hash   -1331688691
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>> mThreadLocalRandom;

};