#ifndef SHAPE_H
#define SHAPE_H

#include <string>

#define PI (3.14f)

using std::string;

enum ShapeSpec {CIRCLE, RECTANGLE};

class Shape {
private:
    string color;
public:
    Shape(string color);
    virtual float getC() = 0;
    virtual float getS() = 0;
};

#endif