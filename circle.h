#include <math.h>
#include <iostream>
#include "shape.h"

namespace shape {

class Circle : public Shape {

protected:
    double r;

public:
    Circle(double r) {
        this->r = r;
    }

    std::string to_string() {
        return "Круг(" + std::to_string(r) + ")";
    }

    double square() {
        return M_PI * r * r;
    }

    double perimeter() {
        return 2 * M_PI * r;
    }

    double diameter() {
        return 2 * r;
    }

    friend std::ostream& operator<<(std::ostream &stream, const Circle &circle);
    friend std::istream& operator>>(std::istream &stream, Circle &circle);
};

// оператор вывода
std::ostream& operator<<(std::ostream &stream, const Circle &circle) {
    stream << "Круг(" << circle.r << ")";
    return stream;
}
// оператор ввода
std::istream& operator>>(std::istream &stream, Circle &circle) {
    std::cout << "a = ";
    stream >> circle.r;
    return stream;
}
}