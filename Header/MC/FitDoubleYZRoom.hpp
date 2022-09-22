/**
 * @file  FitDoubleYZRoom.hpp
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
 * @brief MC class FitDoubleYZRoom.
 *
 */
class FitDoubleYZRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEYZROOM
public:
    class FitDoubleYZRoom& operator=(class FitDoubleYZRoom const &) = delete;
    FitDoubleYZRoom(class FitDoubleYZRoom const &) = delete;
    FitDoubleYZRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1928155820
     */
    virtual ~FitDoubleYZRoom();
    /**
     * @vftbl  1
     * @symbol ?fits@FitDoubleYZRoom@@UEBA_NAEBVRoomDefinition@@@Z
     * @hash   1068911141
     */
    virtual bool fits(class RoomDefinition const &) const;
    /**
     * @vftbl  2
     * @symbol ?create@FitDoubleYZRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
     * @hash   890411326
     */
    virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);

};