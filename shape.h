#include <iostream>
#include <string>

#ifndef CPPDEN2_SHAPE_H
#define CPPDEN2_SHAPE_H

namespace shape {

class Shape {

public:
    virtual std::string to_string() = 0;
    virtual double square() = 0;
    virtual double perimeter() = 0;

    friend std::ostream& operator<<(std::ostream &stream, const Shape &shape);
};

// оператор вывода
std::ostream& operator<<(std::ostream &stream, const Shape &shape) {
    stream << "()";
    return stream;
}

}
#endif