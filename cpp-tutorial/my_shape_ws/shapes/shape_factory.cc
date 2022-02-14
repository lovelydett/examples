#include "shape_factory.h"

using std::make_shared;

shared_ptr<Shape> ShapeFactory::createShape(ShapeSpec spec) {
    shared_ptr<Shape> shape;
    if (spec == ShapeSpec::CIRCLE) {
        shape = make_shared<Circle>("red", 10.f);
    }


    return shape;
}