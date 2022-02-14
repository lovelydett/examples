#include "shape_factory.h"

using std::make_shared;
using std::dynamic_pointer_cast;

ShapeFactory* ShapeFactory::instance_ = nullptr;

ShapeFactory::ShapeFactory(){}

ShapeFactory& ShapeFactory::Instance() {
    if (instance_ == nullptr) {
        instance_ = new ShapeFactory();
    }
    return *instance_;
}

shared_ptr<Shape> ShapeFactory::createShape(ShapeSpec spec) {
    shared_ptr<Shape> shape;
    if (spec == ShapeSpec::CIRCLE) {
        shape = dynamic_pointer_cast<Shape> (shared_ptr<Circle>(new Circle("red", 10.f)));
    } else if (spec == ShapeSpec::RECTANGLE) {
        shape = dynamic_pointer_cast<Shape> (shared_ptr<Rectangle>(new Rectangle("blue", 10.f, 20.f)));
    }
    return shape;
}