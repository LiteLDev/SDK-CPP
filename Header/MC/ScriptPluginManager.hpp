// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ResourceInformation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptPluginManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINMANAGER
public:
    class ScriptPluginManager& operator=(class ScriptPluginManager const &) = delete;
    ScriptPluginManager(class ScriptPluginManager const &) = delete;
    ScriptPluginManager() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINMANAGER
public:
#endif
    MCAPI ScriptPluginManager(class Scripting::ScriptEngine &, class Scripting::IPrinter *);
    MCAPI class ScriptPluginManagerResult discoverPlugins(enum ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator const &);
    MCAPI void releasePlugins();
    MCAPI class ScriptPluginManagerResult runAll();
    MCAPI ~ScriptPluginManager();

//private:
    MCAPI std::vector<struct Scripting::ModuleDescriptor> _generateModuleDependencies(std::vector<struct PackIdVersion> const &, std::vector<struct PackIdVersion> const &) const;
    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const &, class ScriptPluginResult &);

private:


};