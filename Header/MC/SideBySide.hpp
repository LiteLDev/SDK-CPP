/**
 * @file  SideBySide.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SideBySide.
 *
 */
namespace SideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_collectVehiclesAndPassengersNotInView@SideBySide@@YAXAEBVStrictEntityContext@@AEBUSideBySideValidationExceptionComponent@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UUsesSideBySideComparisonComponent@@USideBySideExceptionVisitedFlagComponent@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUPassengerComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@@@AEAV?$vector@U?$pair@VStrictEntityContext@@USideBySideValidationExceptionComponent@@@std@@V?$allocator@U?$pair@VStrictEntityContext@@USideBySideValidationExceptionComponent@@@std@@@2@@std@@@Z
     * @hash   -1122800927
     */
    MCAPI void _collectVehiclesAndPassengersNotInView(class StrictEntityContext const &, struct SideBySideValidationExceptionComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent, struct SideBySideExceptionVisitedFlagComponent>> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, std::vector<struct std::pair<class StrictEntityContext, struct SideBySideValidationExceptionComponent>> &);
    /**
     * @symbol ?combineComparison@SideBySide@@YA?AUSideBySidePartialComparison@@AEBU2@0@Z
     * @hash   -629663174
     */
    MCAPI struct SideBySidePartialComparison combineComparison(struct SideBySidePartialComparison const &, struct SideBySidePartialComparison const &);

};