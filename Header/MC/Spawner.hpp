/**
 * @file  Spawner.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelChunk.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Mob;
class ItemActor;
class ItemStack;
class LevelChunk;

#undef BEFORE_EXTRA

/**
 * @brief MC class Spawner.
 *
 */
class Spawner {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI Mob* spawnMob(Vec3& ,int, std::string );
    LIAPI ItemActor* spawnItem(Vec3&, int, ItemStack*);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNER
public:
    class Spawner& operator=(class Spawner const &) = delete;
    Spawner(class Spawner const &) = delete;
    Spawner() = delete;
#endif

public:
    /**
     * @symbol ??0Spawner@@QEAA@AEAVLevel@@@Z
     * @hash   1658248685
     */
    MCAPI Spawner(class Level &);
    /**
     * @symbol ?postProcessSpawnMobs@Spawner@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
     * @hash   1663617439
     */
    MCAPI void postProcessSpawnMobs(class BlockSource &, int, int, class Random &);
    /**
     * @symbol ?spawnItem@Spawner@@QEAAPEAVItemActor@@AEAVBlockSource@@AEBVItemStack@@PEAVActor@@AEBVVec3@@H@Z
     * @hash   -1959554719
     */
    MCAPI class ItemActor * spawnItem(class BlockSource &, class ItemStack const &, class Actor *, class Vec3 const &, int);
    /**
     * @symbol ?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z
     * @hash   1332228567
     */
    MCAPI class Mob * spawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, bool, bool, bool);
    /**
     * @symbol ?spawnMobGroup@Spawner@@QEAA?AV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@AEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVVec3@@_N3$$QEAV?$function@$$A6AXAEAVMob@@@Z@3@@Z
     * @hash   1925256967
     */
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> spawnMobGroup(class BlockSource &, std::string const &, class Vec3 const &, bool, bool, class std::function<void (class Mob &)> &&);
    /**
     * @symbol ?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z
     * @hash   -332206444
     */
    MCAPI class Actor * spawnProjectile(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ?tick@Spawner@@QEAAXAEAVBlockSource@@AEBVLevelChunk@@@Z
     * @hash   -2094423247
     */
    MCAPI void tick(class BlockSource &, class LevelChunk const &);
    /**
     * @symbol ?findNextSpawnBlockUnder@Spawner@@SA_NAEBVBlockSource@@AEAVBlockPos@@W4MaterialType@@W4SpawnBlockRequirements@@@Z
     * @hash   -1743359258
     */
    MCAPI static bool findNextSpawnBlockUnder(class BlockSource const &, class BlockPos &, enum MaterialType, enum SpawnBlockRequirements);
    /**
     * @symbol ?isSpawnPositionOk@Spawner@@SA_NAEBVMobSpawnRules@@AEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   -2103933520
     */
    MCAPI static bool isSpawnPositionOk(class MobSpawnRules const &, class BlockSource &, class BlockPos const &, bool);

//protected:
    /**
     * @symbol ?_spawnStructureMob@Spawner@@IEAAXAEAVBlockSource@@AEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z
     * @hash   -284669565
     */
    MCAPI void _spawnStructureMob(class BlockSource &, class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &);
    /**
     * @symbol ?_tickSpawnMobClusters@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEAVSpawnConditions@@@Z@std@@@Z
     * @hash   2096875601
     */
    MCAPI void _tickSpawnMobClusters(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, class SpawnConditions &)> const &);
    /**
     * @symbol ?_tickSpawnStructureMobs@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z@std@@AEBV?$function@$$A6A?AV?$span@$$CBUHardcodedSpawningArea@LevelChunk@@$0?0@gsl@@AEBVLevelChunk@@@Z@6@@Z
     * @hash   -99229326
     */
    MCAPI void _tickSpawnStructureMobs(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &)> const &, class std::function<class gsl::span<struct LevelChunk::HardcodedSpawningArea const, -1> (class LevelChunk const &)> const &);
    /**
     * @symbol ?_updateBaseTypeCount@Spawner@@IEAAXAEAVBlockSource@@AEBVChunkPos@@@Z
     * @hash   629770837
     */
    MCAPI void _updateBaseTypeCount(class BlockSource &, class ChunkPos const &);

//private:
    /**
     * @symbol ?_handlePopulationCap@Spawner@@AEAAHPEBVMobSpawnerData@@AEBVSpawnConditions@@H@Z
     * @hash   1770082613
     */
    MCAPI int _handlePopulationCap(class MobSpawnerData const *, class SpawnConditions const &, int);
    /**
     * @symbol ?_permuteId@Spawner@@AEBAXAEAUActorDefinitionIdentifier@@AEBVMobSpawnRules@@AEAVRandom@@@Z
     * @hash   -1056136589
     */
    MCAPI void _permuteId(struct ActorDefinitionIdentifier &, class MobSpawnRules const &, class Random &) const;
    /**
     * @symbol ?_sendHerdEvents@Spawner@@AEBAXAEBUMobSpawnHerdInfo@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
     * @hash   925288250
     */
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const &, std::vector<class Mob *> &) const;
    /**
     * @symbol ?_spawnMobCluster@Spawner@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVSpawnConditions@@@Z
     * @hash   -1091773407
     */
    MCAPI void _spawnMobCluster(class BlockSource &, class BlockPos const &, class SpawnConditions &);
    /**
     * @symbol ?_spawnMobInCluster@Spawner@@AEAAXAEAVBlockSource@@UActorDefinitionIdentifier@@AEBVBlockPos@@AEBVSpawnConditions@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
     * @hash   -583998596
     */
    MCAPI void _spawnMobInCluster(class BlockSource &, struct ActorDefinitionIdentifier, class BlockPos const &, class SpawnConditions const &, std::vector<class Mob *> &);
    /**
     * @symbol ?_updateMobCounts@Spawner@@AEAAXAEAVBlockSource@@AEBUActorDefinitionIdentifier@@AEBVSpawnConditions@@@Z
     * @hash   787183
     */
    MCAPI void _updateMobCounts(class BlockSource &, struct ActorDefinitionIdentifier const &, class SpawnConditions const &);

protected:

private:
    /**
     * @symbol ?SPAWN_RING_OFFSETS@Spawner@@0V?$unordered_set@VChunkPos@@U?$hash@VChunkPos@@@std@@U?$equal_to@VChunkPos@@@3@V?$allocator@VChunkPos@@@3@@std@@B
     * @hash   783398335
     */
    MCAPI static class std::unordered_set<class ChunkPos, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<class ChunkPos>> const SPAWN_RING_OFFSETS;

};