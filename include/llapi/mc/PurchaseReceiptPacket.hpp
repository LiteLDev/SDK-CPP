/**
 * @file  PurchaseReceiptPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PurchaseReceiptPacket.
 *
 */
class PurchaseReceiptPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PURCHASERECEIPTPACKET
public:
    class PurchaseReceiptPacket& operator=(class PurchaseReceiptPacket const &) = delete;
    PurchaseReceiptPacket(class PurchaseReceiptPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PurchaseReceiptPacket();
    /**
     * @hash   593738431
     * @vftbl  1
     * @symbol ?getId@PurchaseReceiptPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -897034900
     * @vftbl  2
     * @symbol ?getName@PurchaseReceiptPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2103275653
     * @vftbl  3
     * @symbol ?write@PurchaseReceiptPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1625708869
     * @vftbl  6
     * @symbol ?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   977268299
     * @symbol ??0PurchaseReceiptPacket@@QEAA@XZ
     */
    MCAPI PurchaseReceiptPacket();

};