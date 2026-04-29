#pragma once

// Pointer Implementation (Pimpl).

class Object {
    public:
        explicit Object(int x);

        void show() noexcept;

    private:
        struct Impl; // Forward declaration.
        Impl* impl; // Pointer to the implementation.
};
