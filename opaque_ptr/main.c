#include "object.h"

int main(void) {
    OpaqueObject obj = create("MyObject");
    if (!obj) {
        return 1; // Handle creation failure
    }

    show(obj);
    destroy(obj);

    return 0;
}
