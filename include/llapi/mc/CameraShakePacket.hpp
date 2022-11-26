/**
 * @file  CameraShakePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class CameraShakePacket.
 *
 */
class CameraShakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKEPACKET
public:
    class CameraShakePacket& operator=(class CameraShakePacket const &) = delete;
    CameraShakePacket(class CameraShakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   483502615
     */
    virtual ~CameraShakePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CameraShakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1427844011
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CameraShakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   174993154
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CameraShakePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   289865637
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CameraShakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1759929909
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CameraShakePacket@@QEAA@XZ
     * @hash   -1311588155
     */
    MCAPI CameraShakePacket();
    /**
     * @symbol ??0CameraShakePacket@@QEAA@W4CameraShakeAction@@@Z
     * @hash   -2098117256
     */
    MCAPI CameraShakePacket(enum class CameraShakeAction);
    /**
     * @symbol ??0CameraShakePacket@@QEAA@MMW4CameraShakeType@@@Z
     * @hash   1211812480
     */
    MCAPI CameraShakePacket(float, float, enum class CameraShakeType);

};