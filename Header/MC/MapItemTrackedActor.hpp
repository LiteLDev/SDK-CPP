/**
 * @file  MapItemTrackedActor.hpp
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
 * @brief MC class MapItemTrackedActor.
 *
 */
class MapItemTrackedActor {

#define AFTER_EXTRA
// Add Member There
public:
struct UniqueId {
    UniqueId() = delete;
    UniqueId(UniqueId const&) = delete;
    UniqueId(UniqueId const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMTRACKEDACTOR
public:
    class MapItemTrackedActor& operator=(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor() = delete;
#endif

public:
    /**
     * @symbol ??0MapItemTrackedActor@@QEAA@AEBUUniqueId@0@AEAVBlockSource@@@Z
     * @hash   1873220986
     */
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const &, class BlockSource &);
    /**
     * @symbol ?getDecorationRotation@MapItemTrackedActor@@QEAAMAEAVBlockSource@@@Z
     * @hash   -23123815
     */
    MCAPI float getDecorationRotation(class BlockSource &);
    /**
     * @symbol ?getEntity@MapItemTrackedActor@@QEAAPEAVActor@@AEAVBlockSource@@@Z
     * @hash   -411689412
     */
    MCAPI class Actor * getEntity(class BlockSource &);
    /**
     * @symbol ?nextUpdatePacket@MapItemTrackedActor@@QEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVMapItemSavedData@@@Z
     * @hash   -115655485
     */
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const &);
    /**
     * @symbol ?setPixelDirty@MapItemTrackedActor@@QEAAXII@Z
     * @hash   -1113178055
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);

};