/**
 * @file  VanillaBastionJigsawStructureBlockRules.hpp
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
 * @brief MC class VanillaBastionJigsawStructureBlockRules.
 *
 */
class VanillaBastionJigsawStructureBlockRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTUREBLOCKRULES
public:
    class VanillaBastionJigsawStructureBlockRules& operator=(class VanillaBastionJigsawStructureBlockRules const &) = delete;
    VanillaBastionJigsawStructureBlockRules(class VanillaBastionJigsawStructureBlockRules const &) = delete;
    VanillaBastionJigsawStructureBlockRules() = delete;
#endif

public:
    /**
     * @symbol ?initialize@VanillaBastionJigsawStructureBlockRules@@SAXAEAVJigsawStructureRegistry@@@Z
     * @hash   1026007102
     */
    MCAPI static void initialize(class JigsawStructureRegistry &);

};