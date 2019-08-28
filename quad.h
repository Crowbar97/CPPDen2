#include <iostream>
#include "shape.h"

namespace shape {

class Quad : public Shape {

protected:
    double a;

public:
    Quad(double a) {
        this->a = a;
    }

    std::string to_string() {
        return "Квадрат(" + std::to_string(a) + ")";
    }

    double square() {
        return a * a;
    }

    double perimeter() {
        return 4 * a;
    }

    friend std::ostream& operator<<(std::ostream &stream, const Quad &quad);
    friend std::istream& operator>>(std::istream &stream, Quad &quad);
};

// оператор вывода
std::ostream& operator<<(std::ostream &stream, const Quad &quad) {
    stream << "Квадрат(" << quad.a << ")";
    return stream;
}
// оператор ввода
std::istream& operator>>(std::istream &stream, Quad &quad) {
    std::cout << "a = ";
    stream >> quad.a;
    return stream;
}

}