/**
 * @file  FeatureRegistryPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FeatureRegistry.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureRegistryPacket.
 *
 */
class FeatureRegistryPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRYPACKET
public:
    class FeatureRegistryPacket& operator=(class FeatureRegistryPacket const &) = delete;
    FeatureRegistryPacket(class FeatureRegistryPacket const &) = delete;
    FeatureRegistryPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1883623689
     */
    virtual ~FeatureRegistryPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@FeatureRegistryPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   362580819
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@FeatureRegistryPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1634706944
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@FeatureRegistryPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1573867705
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@FeatureRegistryPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1477321145
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0FeatureRegistryPacket@@QEAA@AEBV?$vector@UFeatureBinaryJsonFormat@FeatureRegistry@@V?$allocator@UFeatureBinaryJsonFormat@FeatureRegistry@@@std@@@std@@@Z
     * @hash   787937536
     */
    MCAPI FeatureRegistryPacket(std::vector<struct FeatureRegistry::FeatureBinaryJsonFormat> const &);

};