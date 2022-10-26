/**
 * @file  DispenserContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DispenserContainerManagerModel.
 *
 */
class DispenserContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPENSERCONTAINERMANAGERMODEL
public:
    class DispenserContainerManagerModel& operator=(class DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel(class DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1281072562
     */
    virtual ~DispenserContainerManagerModel();
    /**
     * @vftbl  17
     * @symbol ?_postInit@DispenserContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   -1010946850
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0DispenserContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1159491885
     */
    MCAPI DispenserContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};