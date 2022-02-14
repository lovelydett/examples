#include <iostream>
#include "../shape/shape_factory.h"

using std::cout;

int main() {
    auto circle = ShapeFactory::Instance().createShape(ShapeSpec::CIRCLE);
    auto rectangle = ShapeFactory::Instance().createShape(ShapeSpec::RECTANGLE);

    cout << "Circle: C is " << circle->getC() << " S is " << circle->getS() << '\n';
    cout << "Rectangle: C is " << rectangle->getC() << "S is " << rectangle->getS() << '\n';

    return 0;
}
