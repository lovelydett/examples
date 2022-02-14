#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "circle.h"
#include "rectangle.h"

#include <memory>

using std::shared_ptr;

class ShapeFactory {
private:
    ShapeFactory();
    ShapeFactory(const ShapeFactory&) = delete;
    ~ShapeFactory();
    static ShapeFactory* instance_;
public:
    static ShapeFactory& Instance();
    shared_ptr<Shape> createShape(const ShapeSpec spec);
};

#endif