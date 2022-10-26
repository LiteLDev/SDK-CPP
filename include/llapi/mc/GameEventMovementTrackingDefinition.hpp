/**
 * @file  GameEventMovementTrackingDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingDefinition.
 *
 */
class GameEventMovementTrackingDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGDEFINITION
public:
    class GameEventMovementTrackingDefinition& operator=(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@GameEventMovementTrackingDefinition@@QEBAXAEAVEntityContext@@AEAVGameEventMovementTrackingComponent@@@Z
     * @hash   -550689115
     */
    MCAPI void initialize(class EntityContext &, class GameEventMovementTrackingComponent &) const;
    /**
     * @symbol ?buildSchema@GameEventMovementTrackingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGameEventMovementTrackingDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1285981012
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GameEventMovementTrackingDefinition>> &);

};