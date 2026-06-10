module point;

Point::Point(int x, int y): _x(x), _y(y) {}

int Point::x() const { return this->_x; }
int Point::y() const { return this->_y; }

int Point::dot(const Point& other) {
    return (this->_x * other._x) + (this->_y * other._y);
}
