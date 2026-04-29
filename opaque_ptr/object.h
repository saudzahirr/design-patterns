#pragma once

#ifdef __cplusplus
extern "C" {
#endif
    typedef void* OpaqueObject;

    OpaqueObject create(const char*);
    void destroy(OpaqueObject obj);
    void show(OpaqueObject obj);

#ifdef __cplusplus
}
#endif
