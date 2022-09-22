/**
 * @file  MC/OceanMonumentPenthouse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentPenthouse.
 *
 */
class OceanMonumentPenthouse : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPENTHOUSE
public:
    class OceanMonumentPenthouse& operator=(class OceanMonumentPenthouse const &) = delete;
    OceanMonumentPenthouse(class OceanMonumentPenthouse const &) = delete;
    OceanMonumentPenthouse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentPenthouse();
    /**
     * @hash   239692811
     * @vftbl  2
     * @symbol ?getType@OceanMonumentPenthouse@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -216914867
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentPenthouse@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   149991097
     * @vftbl  5
     * @symbol ?postProcessMobsAt@OceanMonumentPenthouse@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

};