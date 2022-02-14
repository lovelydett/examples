#include "circle.h"
#include "rectangle.h"

#include <memory>

using std::shared_ptr;

class ShapeFactory {
private:
    ShapeFactory() = delete;
    ShapeFactory(const ShapeFactory&) = delete;
public:
    static ShapeFactory& Instance();
    shared_ptr<Shape> createShape(const ShapeSpec spec);
};