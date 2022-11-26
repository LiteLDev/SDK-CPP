/**
 * @file  StructurePiece.hpp
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
 * @brief MC class StructurePiece.
 *
 */
class StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPIECE
public:
    class StructurePiece& operator=(class StructurePiece const &) = delete;
    StructurePiece(class StructurePiece const &) = delete;
    StructurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1108535675
     */
    virtual ~StructurePiece();
    /**
     * @vftbl  1
     * @symbol ?moveBoundingBox@StructurePiece@@UEAAXHHH@Z
     * @hash   501362989
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl  2
     * @symbol ?getType@StructurePiece@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -895189920
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@StructurePiece@@UEAAXAEAV1@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -1157967712
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   178103619
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &) = 0;
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@StructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -740337948
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  6
     * @symbol ?isInInvalidLocation@StructurePiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
     * @hash   -2016227623
     */
    virtual bool isInInvalidLocation(class BlockSource &, class BoundingBox const &);
    /**
     * @vftbl  7
     * @symbol ?getWorldX@StructurePiece@@UEAAHHH@Z
     * @hash   1401106301
     */
    virtual int getWorldX(int, int);
    /**
     * @vftbl  8
     * @symbol ?getWorldZ@StructurePiece@@UEAAHHH@Z
     * @hash   294993567
     */
    virtual int getWorldZ(int, int);
    /**
     * @vftbl  9
     * @symbol ?placeBlock@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
     * @hash   1122916125
     */
    virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /**
     * @vftbl  10
     * @symbol ?canBeReplaced@StructurePiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
     * @hash   -1866965274
     */
    virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @vftbl  11
     * @symbol ?generateBox@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@2_N@Z
     * @hash   -93744436
     */
    virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    /**
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@StructurePiece@@UEBAXAEAVLevelChunk@@@Z
     * @hash   1704178024
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol ?_getWorldPos@StructurePiece@@QEAA?AVBlockPos@@HHH@Z
     * @hash   -1761838473
     */
    MCAPI class BlockPos _getWorldPos(int, int, int);
    /**
     * @symbol ?addTerrainAdjustmentToken@StructurePiece@@QEAAXV?$shared_ptr@_N@std@@@Z
     * @hash   -989739474
     */
    MCAPI void addTerrainAdjustmentToken(class std::shared_ptr<bool>);
    /**
     * @symbol ?generateAirBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH@Z
     * @hash   -828682197
     */
    MCAPI void generateAirBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int);
    /**
     * @symbol ?generateBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH_NAEAVRandom@@AEBVBlockSelector@@@Z
     * @hash   1299559202
     */
    MCAPI void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, bool, class Random &, class BlockSelector const &);
    /**
     * @symbol ?generateMaybeBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHHHHAEBVBlock@@3_N4@Z
     * @hash   -1507480834
     */
    MCAPI void generateMaybeBox(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, int, int, int, class Block const &, class Block const &, bool, bool);
    /**
     * @symbol ?generateUpperHalfSphere@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@_N@Z
     * @hash   1512184923
     */
    MCAPI void generateUpperHalfSphere(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, bool);
    /**
     * @symbol ?getBlock@StructurePiece@@QEAAAEBVBlock@@AEAVBlockSource@@HHHAEBVBoundingBox@@@Z
     * @hash   26600875
     */
    MCAPI class Block const & getBlock(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @symbol ?getOrientationData@StructurePiece@@QEAAGPEBVBlock@@G@Z
     * @hash   421464835
     */
    MCAPI unsigned short getOrientationData(class Block const *, unsigned short);
    /**
     * @symbol ?getWorldY@StructurePiece@@QEAAHH@Z
     * @hash   1350187331
     */
    MCAPI int getWorldY(int);
    /**
     * @symbol ?isAboveGround@StructurePiece@@QEAA_NHHHAEAVBlockSource@@@Z
     * @hash   624136052
     */
    MCAPI bool isAboveGround(int, int, int, class BlockSource &);
    /**
     * @symbol ?isAir@StructurePiece@@QEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
     * @hash   -1077857429
     */
    MCAPI bool isAir(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @symbol ?isReplaceableBlock@StructurePiece@@QEAA_NAEBVBlock@@@Z
     * @hash   -83614047
     */
    MCAPI bool isReplaceableBlock(class Block const &);
    /**
     * @symbol ?maybeGenerateBlock@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
     * @hash   1399965747
     */
    MCAPI void maybeGenerateBlock(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    /**
     * @symbol ?maybeGenerateBlockIfNotFloating@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
     * @hash   -1445032883
     */
    MCAPI void maybeGenerateBlockIfNotFloating(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    /**
     * @symbol ?findCollisionPiece@StructurePiece@@SAPEAV1@AEBV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBoundingBox@@@Z
     * @hash   1100032956
     */
    MCAPI static class StructurePiece * findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const &, class BoundingBox const &);
    /**
     * @symbol ?getTotalWeight@StructurePiece@@SAHAEBV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@std@@@Z
     * @hash   1015078077
     */
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const &);

};