// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetHealthPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETHEALTHPACKET
public:
    class SetHealthPacket& operator=(class SetHealthPacket const&) = delete;
    SetHealthPacket(class SetHealthPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SetHealthPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~SetHealthPacket(){
         (SetHealthPacket::*rv)();
        *((void**)&rv) = dlsym("??1SetHealthPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SetHealthPacket(int);
    MCAPI SetHealthPacket();

protected:

private:

};