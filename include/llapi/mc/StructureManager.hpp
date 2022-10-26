/**
 * @file  StructureManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureManager.
 *
 */
class StructureManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREMANAGER
public:
    class StructureManager& operator=(class StructureManager const &) = delete;
    StructureManager(class StructureManager const &) = delete;
    StructureManager() = delete;
#endif

public:
    /**
     * @symbol ??0StructureManager@@QEAA@AEAVResourcePackManager@@@Z
     * @hash   356303479
     */
    MCAPI StructureManager(class ResourcePackManager &);
    /**
     * @symbol ?clearAndShutdownStructurePlacement@StructureManager@@QEAAXXZ
     * @hash   -358359083
     */
    MCAPI void clearAndShutdownStructurePlacement();
    /**
     * @symbol ?createStructureDataExportPacket@StructureManager@@QEAA?AVStructureTemplateDataResponsePacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVResourcePackManager@@PEAVLevelStorage@@W4StructureTemplateResponseType@@@Z
     * @hash   310847440
     */
    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(std::string const &, class ResourcePackManager const *, class LevelStorage *, enum class StructureTemplateResponseType);
    /**
     * @symbol ?deleteStructure@StructureManager@@QEAA?AW4StructureDeleteResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelStorage@@@Z
     * @hash   778216724
     */
    MCAPI enum class StructureDeleteResult deleteStructure(std::string const &, class LevelStorage &);
    /**
     * @symbol ?getOrCreate@StructureManager@@QEAAAEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -861445723
     */
    MCAPI class StructureTemplate & getOrCreate(std::string const &);
    /**
     * @symbol ?getOrCreateLegacy@StructureManager@@QEAAAEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1818814291
     */
    MCAPI class LegacyStructureTemplate & getOrCreateLegacy(std::string const &);
    /**
     * @symbol ?getStructure@StructureManager@@QEBAPEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -801430762
     */
    MCAPI class StructureTemplate * getStructure(std::string const &) const;
    /**
     * @symbol ?load@StructureManager@@QEAA_NAEAVStructureTemplate@@PEBVResourcePackManager@@PEAVLevelStorage@@@Z
     * @hash   -2004655531
     */
    MCAPI bool load(class StructureTemplate &, class ResourcePackManager const *, class LevelStorage *);
    /**
     * @symbol ?loadPlacementQueue@StructureManager@@QEAAXAEAVLevelStorage@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -231380326
     */
    MCAPI void loadPlacementQueue(class LevelStorage &, class Level &, class Dimension &);
    /**
     * @symbol ?loadPlacementQueueItem@StructureManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -1318110913
     */
    MCAPI void loadPlacementQueueItem(std::string const &, class CompoundTag const &, class Level &, class Dimension &);
    /**
     * @symbol ?queueLoad@StructureManager@@QEAAXV?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@std@@@Z
     * @hash   -1493067004
     */
    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData>);
    /**
     * @symbol ?readStructure@StructureManager@@QEAA_NAEAVStructureTemplate@@@Z
     * @hash   -15722711
     */
    MCAPI bool readStructure(class StructureTemplate &);
    /**
     * @symbol ?saveToLevel@StructureManager@@QEAAXAEBVStructureTemplate@@AEAVLevelStorage@@@Z
     * @hash   1866047965
     */
    MCAPI void saveToLevel(class StructureTemplate const &, class LevelStorage &);
    /**
     * @symbol ?tick@StructureManager@@QEAAXAEBVDimension@@@Z
     * @hash   1584672612
     */
    MCAPI void tick(class Dimension const &);
    /**
     * @symbol ?tryPlaceStructureInWorld@StructureManager@@QEAA?AW4QueueRequestResult@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEAVServerLevel@@AEAVDimension@@AEBVBoundingBox@@AEBVBlockPos@@AEBVStructureSettings@@AEBVStructureTemplate@@V?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@4@@Z
     * @hash   -1479043551
     */
    MCAPI enum class QueueRequestResult tryPlaceStructureInWorld(std::unique_ptr<class CommandArea>, class ServerLevel &, class Dimension &, class BoundingBox const &, class BlockPos const &, class StructureSettings const &, class StructureTemplate const &, std::unique_ptr<class StructureAnimationData>);
    /**
     * @symbol ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   -878541259
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &, std::string const &);
    /**
     * @symbol ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   583104743
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &);

//private:
    /**
     * @symbol ?_createLevelStorageId@StructureManager@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     * @hash   -985505365
     */
    MCAPI std::string _createLevelStorageId(std::string const &, std::string const &);
    /**
     * @symbol ?_findResource@StructureManager@@AEAA_NAEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBVPackInstance@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1611546642
     */
    MCAPI bool _findResource(class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class PackInstance const &, std::string &);
    /**
     * @symbol ?_findResource@StructureManager@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@1AEBVPackInstance@@AEAV23@@Z
     * @hash   -198286242
     */
    MCAPI bool _findResource(std::string const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class PackInstance const &, std::string &);
    /**
     * @symbol ?_placeSegment@StructureManager@@AEAA_NAEAVDimension@@AEAVStructureAnimationData@@AEAVChunkLoadActionList@@AEBVBoundingBox@@AEBV?$function@$$A6A?AW4ChunksLoadedStatus@@UTick@@@Z@std@@@Z
     * @hash   1220882176
     */
    MCAPI bool _placeSegment(class Dimension &, class StructureAnimationData &, class ChunkLoadActionList &, class BoundingBox const &, class std::function<enum class ChunksLoadedStatus (struct Tick)> const &);
    /**
     * @symbol ?_placeSegment@StructureManager@@AEAA_NAEAVStructureAnimationData@@@Z
     * @hash   -593236998
     */
    MCAPI bool _placeSegment(class StructureAnimationData &);
    /**
     * @symbol ?_readLegacyStructure@StructureManager@@AEAAPEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -588879045
     */
    MCAPI class LegacyStructureTemplate * _readLegacyStructure(std::string const &);
    /**
     * @symbol ?_removePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
     * @hash   682769945
     */
    MCAPI void _removePlacementQueueItem(std::string const &, class StructureAnimationData &);
    /**
     * @symbol ?_savePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
     * @hash   -649909694
     */
    MCAPI void _savePlacementQueueItem(std::string const &, class StructureAnimationData &);

private:
    /**
     * @symbol ?BEHAVIOR_PACK_STRUCTURES_FOLDER@StructureManager@@0PEBDEB
     * @hash   -1979076395
     */
    MCAPI static char const * BEHAVIOR_PACK_STRUCTURES_FOLDER;
    /**
     * @symbol ?LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX@StructureManager@@0PEBDEB
     * @hash   323556805
     */
    MCAPI static char const * LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;

};