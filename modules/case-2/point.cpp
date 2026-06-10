export module point;

export {
    template <typename T>
    class Point final {
        public:
            Point() = default;

            Point(T x, T y): _x(x), _y(y) {};

            Point(const Point&) noexcept = default;
            Point(Point&&) = default;

            Point& operator=(const Point&) = default;
            Point& operator=(Point&&) = default;

            T dot(const Point&);

        private:
            T _x{};
            T _y{};
    };
}

template <typename T>
inline T Point<T>::dot(const Point& other) {
    return (this->_x * other._x) + (this->_y * other._y);
}
