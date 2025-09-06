#pragma once

#include "Modules/ModuleManager.h"

class FGASPExtrasModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
