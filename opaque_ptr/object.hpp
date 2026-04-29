#pragma once

#include <string>

class Object {
    public:
        explicit Object(const std::string& name);
        ~Object();

        void show() noexcept;
    private:
        std::string name;
};
