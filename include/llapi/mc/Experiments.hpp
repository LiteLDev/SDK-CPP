/**
 * @file  Experiments.hpp
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
 * @brief MC class Experiments.
 *
 */
class Experiments {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTS
public:
    class Experiments& operator=(class Experiments const &) = delete;
    Experiments(class Experiments const &) = delete;
#endif

public:
    /**
     * @symbol ?DataDrivenBiomes@Experiments@@QEBA_NXZ
     * @hash   1897360404
     */
    MCAPI bool DataDrivenBiomes() const;
    /**
     * @symbol ?DataDrivenItems@Experiments@@QEBA_NXZ
     * @hash   -347836766
     */
    MCAPI bool DataDrivenItems() const;
    /**
     * @symbol ??0Experiments@@QEAA@XZ
     * @hash   423060882
     */
    MCAPI Experiments();
    /**
     * @symbol ?Gametest@Experiments@@QEBA_NXZ
     * @hash   1967858772
     */
    MCAPI bool Gametest() const;
    /**
     * @symbol ?SpectatorMode@Experiments@@QEBA_NXZ
     * @hash   -1581854078
     */
    MCAPI bool SpectatorMode() const;
    /**
     * @symbol ?UpcomingCreatorFeatures@Experiments@@QEBA_NXZ
     * @hash   -751654926
     */
    MCAPI bool UpcomingCreatorFeatures() const;
    /**
     * @symbol ?getExperimentsActiveAsJSONList@Experiments@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   368376018
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    /**
     * @symbol ?getExperimentsActiveForTelemetry@Experiments@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   -926936709
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    /**
     * @symbol ?getTagData@Experiments@@QEAAXAEBVCompoundTag@@@Z
     * @hash   -687533368
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol ?isExperimentEnabled@Experiments@@QEBA_NW4AllExperiments@@@Z
     * @hash   646639567
     */
    MCAPI bool isExperimentEnabled(enum class AllExperiments) const;
    /**
     * @symbol ?setTagData@Experiments@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1136811196
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol ??1Experiments@@QEAA@XZ
     * @hash   1556885586
     */
    MCAPI ~Experiments();
    /**
     * @symbol ?getExperimentTextID@Experiments@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AllExperiments@@@Z
     * @hash   857996795
     */
    MCAPI static std::string const & getExperimentTextID(enum class AllExperiments);
    /**
     * @symbol ?getToggleNames@Experiments@@SAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1135588977
     */
    MCAPI static std::vector<std::string> const & getToggleNames();

};