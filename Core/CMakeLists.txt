if(NAPI_JAVASCRIPT_ENGINE STREQUAL "JSI")
    add_subdirectory(Node-API-JSI)
elseif(NAPI_JAVASCRIPT_ENGINE STREQUAL "Napi-c-external")
    add_subdirectory(Node-API-C-External)
else()
    add_subdirectory(Node-API)
endif()

add_subdirectory(JsRuntime)

if(JSRUNTIMEHOST_CORE_APPRUNTIME)
    add_subdirectory(AppRuntime)
endif()

if(JSRUNTIMEHOST_CORE_SCRIPTLOADER)
    add_subdirectory(ScriptLoader)
endif()
