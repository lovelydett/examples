#include "shape.h"

class Rectangle : protected Shape {
private:
    float width;
    float height;
    Rectangle(string color, float width, float height);
public:
    float getC() override;  
    float getS() override;
};