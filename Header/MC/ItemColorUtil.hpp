/**
 * @file  ItemColorUtil.hpp
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
 * @brief MC namespace ItemColorUtil.
 *
 */
namespace ItemColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?fromBlockColor@ItemColorUtil@@YA?AW4ItemColor@@W4BlockColor@@@Z
     * @hash   -1909079608
     */
    MCAPI enum ItemColor fromBlockColor(enum BlockColor);
    /**
     * @symbol ?fromInt@ItemColorUtil@@YA?AW4ItemColor@@H@Z
     * @hash   -323652576
     */
    MCAPI enum ItemColor fromInt(int);
    /**
     * @symbol ?getName@ItemColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Z
     * @hash   -2105288940
     */
    MCAPI std::string const & getName(enum ItemColor);
    /**
     * @symbol ?getRGBColor@ItemColorUtil@@YAHW4ItemColor@@@Z
     * @hash   -27344620
     */
    MCAPI int getRGBColor(enum ItemColor);

};