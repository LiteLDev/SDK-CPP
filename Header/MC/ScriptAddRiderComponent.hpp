// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptAddRiderComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTADDRIDERCOMPONENT
public:
    class ScriptAddRiderComponent& operator=(class ScriptAddRiderComponent const &) = delete;
    ScriptAddRiderComponent(class ScriptAddRiderComponent const &) = delete;
    ScriptAddRiderComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptAddRiderComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTADDRIDERCOMPONENT
public:
#endif
    MCAPI ScriptAddRiderComponent(class WeakEntityRef const &, class Scripting::WeakLifetimeScope const &, std::string const &);
    MCAPI class Scripting::Result<std::string> getEntityType() const;
    MCAPI class Scripting::Result<std::string> getSpawnEvent() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptAddRiderComponent> bind(struct Scripting::Version);


};