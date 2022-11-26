/**
 * @file  DimensionDataSerializer.hpp
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
 * @brief MC class DimensionDataSerializer.
 *
 */
class DimensionDataSerializer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDATASERIALIZER
public:
    class DimensionDataSerializer& operator=(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer(class DimensionDataSerializer const &) = delete;
    DimensionDataSerializer() = delete;
#endif

public:
    /**
     * @symbol ?createSaveID@DimensionDataSerializer@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     * @hash   755637337
     */
    MCAPI std::string createSaveID(std::string const &, std::string const &);
    /**
     * @symbol ?deleteDataWithID@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelStorage@@@Z
     * @hash   1473935435
     */
    MCAPI void deleteDataWithID(std::string const &, class LevelStorage &);
    /**
     * @symbol ?forEachKeyWithDimensionPrefix@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVLevelStorage@@AEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z@3@@Z
     * @hash   1440937600
     */
    MCAPI void forEachKeyWithDimensionPrefix(std::string const &, std::string const &, class LevelStorage &, class std::function<void (std::string const &, class CompoundTag const &)> const &);
    /**
     * @symbol ?saveDataWithID@DimensionDataSerializer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVLevelStorage@@@Z
     * @hash   321221178
     */
    MCAPI void saveDataWithID(std::string const &, class CompoundTag const &, class LevelStorage &);

//protected:
    /**
     * @symbol ?_createLevelStorageID@DimensionDataSerializer@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@00@Z
     * @hash   854149106
     */
    MCAPI std::string _createLevelStorageID(std::string const &, std::string const &, std::string const &);

protected:

};