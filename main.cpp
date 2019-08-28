#include <iostream>
#include <vector>
#include "shape.h"
#include "dot.h"
#include "quad.h"
#include "circle.h"

using namespace std;
using namespace shape;

int main() {
    Dot* dot = new Dot(5, 8);
    cout << *dot << endl;

    Quad* quad = new Quad(5);
    cout << *quad << endl;

    Circle* circle = new Circle(7);
    cout << *circle << endl;

    vector<Shape*> shapes;
    shapes.push_back(dot);
    shapes.push_back(quad);
    shapes.push_back(circle);
    for (const auto &shape : shapes)
        cout << shape->to_string() << endl;

    return 0;
}