/**
 * @file  BaseContainerMenu.hpp
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
 * @brief MC class BaseContainerMenu.
 *
 */
class BaseContainerMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const &) = delete;
    BaseContainerMenu(class BaseContainerMenu const &) = delete;
    BaseContainerMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    /**
     * @symbol ?broadcastChanges@BaseContainerMenu@@UEAAXXZ
     * @hash   -651356278
     */
    MCVAPI void broadcastChanges();
    /**
     * @symbol ?containerContentChanged@BaseContainerMenu@@UEAAXH@Z
     * @hash   864038779
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @symbol ?getContainerId@BaseContainerMenu@@UEBA?AW4ContainerID@@XZ
     * @hash   1636522705
     */
    MCVAPI enum class ContainerID getContainerId() const;
    /**
     * @symbol ?getContainerType@BaseContainerMenu@@UEBA?AW4ContainerType@@XZ
     * @hash   83310737
     */
    MCVAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol ?isResultSlot@BaseContainerMenu@@UEAA_NH@Z
     * @hash   -2071922112
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @symbol ?isSlotDirty@BaseContainerMenu@@UEAA_NH@Z
     * @hash   -533762405
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @symbol ?setContainerId@BaseContainerMenu@@UEAAXW4ContainerID@@@Z
     * @hash   1026576732
     */
    MCVAPI void setContainerId(enum class ContainerID);
    /**
     * @symbol ?setContainerType@BaseContainerMenu@@UEAAXW4ContainerType@@@Z
     * @hash   1988584142
     */
    MCVAPI void setContainerType(enum class ContainerType);
    /**
     * @symbol ?setData@BaseContainerMenu@@UEAAXHH@Z
     * @hash   -1754584348
     */
    MCVAPI void setData(int, int);
    /**
     * @symbol ??1BaseContainerMenu@@UEAA@XZ
     * @hash   -360194984
     */
    MCVAPI ~BaseContainerMenu();
#endif
    /**
     * @symbol ??0BaseContainerMenu@@QEAA@AEAVPlayer@@W4ContainerType@@@Z
     * @hash   485582461
     */
    MCAPI BaseContainerMenu(class Player &, enum class ContainerType);

//protected:
    /**
     * @symbol ?_saveLastSlots@BaseContainerMenu@@IEAAXPEAVContainer@@@Z
     * @hash   1164928864
     */
    MCAPI void _saveLastSlots(class Container *);

protected:

};