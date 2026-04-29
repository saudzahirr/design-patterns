#include "object.hpp"
#include <iostream>

struct Object::Impl {
    int id;
    char* name;
};

Object::Object(int x) : impl(new Impl{x, nullptr}) {}

void Object::show() noexcept {
    std::printf("Object id: %d\n", impl->id);
}
