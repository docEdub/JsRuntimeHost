#pragma once

#include <napi/env.h>
#include <Babylon/Api.h>

namespace Babylon::Polyfills::XMLHttpRequest
{
    void BABYLON_API Initialize(Napi::Env env);
}
