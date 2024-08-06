#include "addon.h"

const char *methodName = "hello";
Napi::String Method(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::String::New(env, "hello_world~");
}

void MountExport(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, methodName),
                Napi::Function::New(env, Method));
};