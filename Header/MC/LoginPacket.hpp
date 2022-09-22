/**
 * @file  MC/LoginPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ConnectionRequest.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class LoginPacket.
 *
 */
class LoginPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
int32_t mClientNetworkVersion;
std::unique_ptr<ConnectionRequest> mConnectionRequest;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOGINPACKET
public:
    class LoginPacket& operator=(class LoginPacket const &) = delete;
    LoginPacket(class LoginPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LoginPacket();
    /**
     * @hash   -1535095411
     * @vftbl  1
     * @symbol ?getId@LoginPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -563303094
     * @vftbl  2
     * @symbol ?getName@LoginPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1443873283
     * @vftbl  3
     * @symbol ?write@LoginPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1562466378
     * @vftbl  5
     * @symbol ?disallowBatching@LoginPacket@@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @hash   -1036619363
     * @vftbl  6
     * @symbol ?_read@LoginPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1410197571
     * @symbol ??0LoginPacket@@QEAA@XZ
     */
    MCAPI LoginPacket();

};