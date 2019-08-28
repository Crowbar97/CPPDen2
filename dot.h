#include <cmath>
#include <iostream>
#include "shape.h"

namespace shape {

class Dot : public Shape {

protected:
    double x, y;

public:
    Dot(double x1, double x2) {
        this->x = x1;
        this->y = x2;
    }

    std::string to_string() {
        return "Точка(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }

    double square() {
        return 0;
    }

    double perimeter() {
        return 0;
    }

    double dist() {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    friend std::ostream& operator<<(std::ostream &stream, const Dot &dot);
    friend std::istream& operator>>(std::istream &stream, Dot &dot);
};

// оператор вывода
std::ostream& operator<<(std::ostream &stream, const Dot &dot) {
    stream << "Точка(" << dot.x << ", " << dot.y << ")";
    return stream;
}
// оператор ввода
std::istream& operator>>(std::istream &stream, Dot &dot) {
    std::cout << "x = ";
    stream >> dot.x;
    std::cout << "y = ";
    stream >> dot.y;
    return stream;
}

}