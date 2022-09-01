/**
 * @file  XoroshiroRandom.hpp
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
 * @brief MC class XoroshiroRandom.
 *
 */
class XoroshiroRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIRORANDOM
public:
    class XoroshiroRandom& operator=(class XoroshiroRandom const &) = delete;
    XoroshiroRandom(class XoroshiroRandom const &) = delete;
    XoroshiroRandom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1326331282
     */
    virtual ~XoroshiroRandom();
    /**
     * @vftbl  1
     * @symbol ?nextInt@XoroshiroRandom@@UEAAHXZ
     * @hash   -1109827032
     */
    virtual int nextInt();
    /**
     * @vftbl  2
     * @symbol ?nextInt@XoroshiroRandom@@UEAAHH@Z
     * @hash   -714168121
     */
    virtual int nextInt(int);
    /**
     * @vftbl  3
     * @symbol ?nextLong@XoroshiroRandom@@UEAA_JXZ
     * @hash   2051547125
     */
    virtual __int64 nextLong();
    /**
     * @vftbl  4
     * @symbol ?nextBoolean@XoroshiroRandom@@UEAA_NXZ
     * @hash   -1538823746
     */
    virtual bool nextBoolean();
    /**
     * @vftbl  5
     * @symbol ?nextFloat@XoroshiroRandom@@UEAAMXZ
     * @hash   -825165736
     */
    virtual float nextFloat();
    /**
     * @vftbl  6
     * @symbol ?nextDouble@XoroshiroRandom@@UEAANXZ
     * @hash   1848163806
     */
    virtual double nextDouble();
    /**
     * @vftbl  7
     * @symbol ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
     * @hash   -1634735975
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl  8
     * @symbol ?consumeCount@XoroshiroRandom@@UEAAXI@Z
     * @hash   -109412464
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl  9
     * @symbol ?fork@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     * @hash   -1713967838
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vftbl  10
     * @symbol ?forkPositional@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
     * @hash   1269415600
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

};