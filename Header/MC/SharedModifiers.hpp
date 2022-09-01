/**
 * @file  SharedModifiers.hpp
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
 * @brief MC class SharedModifiers.
 *
 */
class SharedModifiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDMODIFIERS
public:
    class SharedModifiers& operator=(class SharedModifiers const &) = delete;
    SharedModifiers(class SharedModifiers const &) = delete;
    SharedModifiers() = delete;
#endif

public:
    /**
     * @symbol ?DAMAGE_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   -2082544408
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> DAMAGE_BOOST;
    /**
     * @symbol ?HEALTH_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   1155839432
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> HEALTH_BOOST;
    /**
     * @symbol ?MOVEMENT_SLOWDOWN@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   -2086511514
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN;
    /**
     * @symbol ?MOVEMENT_SPEED@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   -2038106824
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED;
    /**
     * @symbol ?SPRINTING_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   2086673014
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPRINTING_BOOST;
    /**
     * @symbol ?WEAKNESS@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   -471484136
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> WEAKNESS;

};