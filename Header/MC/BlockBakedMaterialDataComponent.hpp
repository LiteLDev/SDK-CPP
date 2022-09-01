/**
 * @file  BlockBakedMaterialDataComponent.hpp
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
 * @brief MC structure BlockBakedMaterialDataComponent.
 *
 */
struct BlockBakedMaterialDataComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBAKEDMATERIALDATACOMPONENT
public:
    struct BlockBakedMaterialDataComponent& operator=(struct BlockBakedMaterialDataComponent const &) = delete;
    BlockBakedMaterialDataComponent(struct BlockBakedMaterialDataComponent const &) = delete;
    BlockBakedMaterialDataComponent() = delete;
#endif

public:
    /**
     * @symbol ?isSolidOpaque@BlockBakedMaterialDataComponent@@QEBA_NXZ
     * @hash   -1122304510
     */
    MCAPI bool isSolidOpaque() const;
    /**
     * @symbol ??4BlockBakedMaterialDataComponent@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -586302532
     */
    MCAPI struct BlockBakedMaterialDataComponent & operator=(struct BlockBakedMaterialDataComponent &&);

};