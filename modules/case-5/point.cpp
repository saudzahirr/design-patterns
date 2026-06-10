export module point;

export {
    class Point final {
        public:
            Point() = default;

            Point(int x, int y): _x(x), _y(y) {};

            Point(const Point&) noexcept = default;
            Point(Point&&) = default;

            Point& operator=(const Point&) = default;
            Point& operator=(Point&&) = default;

            int dot(const Point&);

            int x() const;
            int y() const;

        private:
            int _x{};
            int _y{};
    };
}
