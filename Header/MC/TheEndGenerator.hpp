// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TheEndGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDGENERATOR
public:
    class TheEndGenerator& operator=(class TheEndGenerator const&) = delete;
    TheEndGenerator(class TheEndGenerator const&) = delete;
    TheEndGenerator() = delete;
#endif

public:
    /*
    inline void decorateWorldGenLoadChunk(class Biome& a0, class LevelChunk& a1, class BlockVolumeTarget& a2, class Random& a3, class ChunkPos const& a4) const{
        void (TheEndGenerator::*rv)(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&) const;
        *((void**)&rv) = dlsym("?decorateWorldGenLoadChunk@TheEndGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z");
        return (this->*rv)(std::forward<class Biome&>(a0), std::forward<class LevelChunk&>(a1), std::forward<class BlockVolumeTarget&>(a2), std::forward<class Random&>(a3), std::forward<class ChunkPos const&>(a4));
    }
    inline void decorateWorldGenPostProcess(class Biome& a0, class LevelChunk& a1, class BlockSource& a2, class Random& a3) const{
        void (TheEndGenerator::*rv)(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const;
        *((void**)&rv) = dlsym("?decorateWorldGenPostProcess@TheEndGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class Biome&>(a0), std::forward<class LevelChunk&>(a1), std::forward<class BlockSource&>(a2), std::forward<class Random&>(a3));
    }
    inline bool findNearestFeature(enum StructureFeatureType a0, class BlockPos const& a1, class BlockPos& a2, bool a3){
        bool (TheEndGenerator::*rv)(enum StructureFeatureType, class BlockPos const&, class BlockPos&, bool);
        *((void**)&rv) = dlsym("?findNearestFeature@TheEndGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z");
        return (this->*rv)(std::forward<enum StructureFeatureType>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos&>(a2), std::forward<bool>(a3));
    }
    inline class BlockPos findSpawnPosition() const{
        class BlockPos (TheEndGenerator::*rv)() const;
        *((void**)&rv) = dlsym("?findSpawnPosition@TheEndGenerator@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline void garbageCollectBlueprints(class buffer_span<class ChunkPos> a0){
        void (TheEndGenerator::*rv)(class buffer_span<class ChunkPos>);
        *((void**)&rv) = dlsym("?garbageCollectBlueprints@TheEndGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z");
        return (this->*rv)(std::forward<class buffer_span<class ChunkPos>>(a0));
    }
    inline class BiomeArea getBiomeArea(class BoundingBox const& a0, unsigned int a1) const{
        class BiomeArea (TheEndGenerator::*rv)(class BoundingBox const&, unsigned int) const;
        *((void**)&rv) = dlsym("?getBiomeArea@TheEndGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z");
        return (this->*rv)(std::forward<class BoundingBox const&>(a0), std::forward<unsigned int>(a1));
    }
    inline class BiomeSource const& getBiomeSource() const{
        class BiomeSource const& (TheEndGenerator::*rv)() const;
        *((void**)&rv) = dlsym("?getBiomeSource@TheEndGenerator@@UEBAAEBVBiomeSource@@XZ");
        return (this->*rv)();
    }
    inline struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const{
        struct WorldGenerator::BlockVolumeDimensions (TheEndGenerator::*rv)() const;
        *((void**)&rv) = dlsym("?getBlockVolumeDimensions@TheEndGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ");
        return (this->*rv)();
    }
    inline enum StructureFeatureType getFeatureTypeAt(class BlockPos const& a0){
        enum StructureFeatureType (TheEndGenerator::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?getFeatureTypeAt@TheEndGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline void loadChunk(class LevelChunk& a0, bool a1){
        void (TheEndGenerator::*rv)(class LevelChunk&, bool);
        *((void**)&rv) = dlsym("?loadChunk@TheEndGenerator@@UEAAXAEAVLevelChunk@@_N@Z");
        return (this->*rv)(std::forward<class LevelChunk&>(a0), std::forward<bool>(a1));
    }
    inline bool postProcess(class ChunkViewSource& a0){
        bool (TheEndGenerator::*rv)(class ChunkViewSource&);
        *((void**)&rv) = dlsym("?postProcess@TheEndGenerator@@UEAA_NAEAVChunkViewSource@@@Z");
        return (this->*rv)(std::forward<class ChunkViewSource&>(a0));
    }
    inline void postProcessMobsAt(class BlockSource& a0, int a1, int a2, class Random& a3){
        void (TheEndGenerator::*rv)(class BlockSource&, int, int, class Random&);
        *((void**)&rv) = dlsym("?postProcessMobsAt@TheEndGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class Random&>(a3));
    }
    inline void prepareAndComputeHeights(class BlockVolume& a0, class ChunkPos const& a1, std::vector<short>& a2, bool a3, int a4){
        void (TheEndGenerator::*rv)(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);
        *((void**)&rv) = dlsym("?prepareAndComputeHeights@TheEndGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z");
        return (this->*rv)(std::forward<class BlockVolume&>(a0), std::forward<class ChunkPos const&>(a1), std::forward<std::vector<short>&>(a2), std::forward<bool>(a3), std::forward<int>(a4));
    }
    inline void prepareHeights(class BlockVolume& a0, class ChunkPos const& a1, bool a2){
        void (TheEndGenerator::*rv)(class BlockVolume&, class ChunkPos const&, bool);
        *((void**)&rv) = dlsym("?prepareHeights@TheEndGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z");
        return (this->*rv)(std::forward<class BlockVolume&>(a0), std::forward<class ChunkPos const&>(a1), std::forward<bool>(a2));
    }
    */
    MCAPI TheEndGenerator(class Dimension&, unsigned int, class Biome const*);
    MCAPI void buildSurfaces(class BlockVolume&, class ChunkPos const&, class LevelChunk&);
    MCAPI class Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(class ChunkPos const&) const;
    MCAPI bool isIslandChunk(int, int);

protected:

private:
    MCAPI void _prepareHeights(class BlockVolume&, class ChunkPos const&, bool, std::vector<short>*, int);
    MCAPI float getIslandHeightValue(int, int, int, int) const;

};