import point;

#include <iostream>

int main() {
    Point<int> p{1, 2};
    Point<int> q{3, 4};

    std::cout << p.dot(q) << std::endl;

    return 0;
}
