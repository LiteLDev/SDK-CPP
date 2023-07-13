/**
 * @file  MapCreateLockedCopyPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapCreateLockedCopyPacket.
 *
 */
class MapCreateLockedCopyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCREATELOCKEDCOPYPACKET
public:
    class MapCreateLockedCopyPacket& operator=(class MapCreateLockedCopyPacket const &) = delete;
    MapCreateLockedCopyPacket(class MapCreateLockedCopyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MapCreateLockedCopyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MapCreateLockedCopyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MapCreateLockedCopyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MapCreateLockedCopyPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPCREATELOCKEDCOPYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MapCreateLockedCopyPacket();
#endif
    /**
     * @symbol ??0MapCreateLockedCopyPacket\@\@QEAA\@UActorUniqueID\@\@0\@Z
     */
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol ??0MapCreateLockedCopyPacket\@\@QEAA\@XZ
     */
    MCAPI MapCreateLockedCopyPacket();
    /**
     * @symbol ?getNewMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getNewMapId() const;
    /**
     * @symbol ?getOriginalMapId\@MapCreateLockedCopyPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOriginalMapId() const;

};
