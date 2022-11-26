/**
 * @file  ItemStackRequestActionTransferBase.hpp
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
 * @brief MC class ItemStackRequestActionTransferBase.
 *
 */
class ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    class ItemStackRequestActionTransferBase& operator=(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   646096822
     */
    virtual ~ItemStackRequestActionTransferBase();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -2019447582
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1274290317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionTransferBase@@MEBAXAEAVBinaryStream@@@Z
     * @hash   -1225274546
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionTransferBase@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   -1466381722
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?getAmount@ItemStackRequestActionTransferBase@@QEBAEXZ
     * @hash   -1475600489
     */
    MCAPI unsigned char getAmount() const;
    /**
     * @symbol ?getDst@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
     * @hash   1138460114
     */
    MCAPI struct ItemStackRequestSlotInfo const & getDst() const;
    /**
     * @symbol ?getSrc@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
     * @hash   -1037030176
     */
    MCAPI struct ItemStackRequestSlotInfo const & getSrc() const;

};