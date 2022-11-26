/**
 * @file  AttributeCollection.hpp
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
 * @brief MC class AttributeCollection.
 *
 */
class AttributeCollection {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTECOLLECTION
public:
    class AttributeCollection& operator=(class AttributeCollection const &) = delete;
    AttributeCollection(class AttributeCollection const &) = delete;
    AttributeCollection() = delete;
#endif

public:
    /**
     * @symbol ?hasAttribute@AttributeCollection@@SA_NAEBVHashedString@@@Z
     * @hash   1899184775
     */
    MCAPI static bool hasAttribute(class HashedString const &);

//private:
    /**
     * @symbol ?instance@AttributeCollection@@CAAEAV1@XZ
     * @hash   -647747309
     */
    MCAPI static class AttributeCollection & instance();

private:

};