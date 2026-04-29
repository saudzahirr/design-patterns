#include "object.hpp"
#include "object.h"

#include <iostream>

Object::Object(const std::string& name) : name(name) {
    std::cout << "Object " << name << " created." << std::endl;
}

Object::~Object() {
    std::cout << "Object " << name << " destroyed." << std::endl;
}

void Object::show() noexcept {
    std::cout << "Object name: " << name << std::endl;
}


extern "C" {
    OpaqueObject create(const char* name) {
        try {
            return static_cast<OpaqueObject>(new Object(name));  // erase type
        }
        catch (...) {
            return nullptr;
        }
    }

    void destroy(OpaqueObject obj) {
        if (!obj) return;

        delete static_cast<Object*>(obj);
    }

    void show(OpaqueObject obj) {
        static_cast<Object*>(obj)->show();
    }
}
