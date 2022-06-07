// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackClientResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCLIENTRESPONSEPACKET
public:
    class ResourcePackClientResponsePacket& operator=(class ResourcePackClientResponsePacket const &) = delete;
    ResourcePackClientResponsePacket(class ResourcePackClientResponsePacket const &) = delete;
#endif


public:
    /*0*/ virtual ~ResourcePackClientResponsePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKCLIENTRESPONSEPACKET
public:
#endif
    MCAPI ResourcePackClientResponsePacket();
    MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> const & getDownloadingPacks() const;
    MCAPI bool isResponse(enum ResourcePackResponse) const;


};