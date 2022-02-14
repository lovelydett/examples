#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
private:
    float width;
    float height;
public:
    Rectangle(string color, float width, float height);
    float getC() override;  
    float getS() override;
};

#endif