#include "shape.h"

class Circle : protected Shape {
private:
    float radius;
public:
    Circle(string color, float radius);
    float getC() override;
    float getS() override;
};