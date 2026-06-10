import point;

#include <iostream>

int main() {
    Point p{1, 2};
    Point q{3, 4};

    std::cout << p.dot(q) << std::endl;

    return 0;
}
