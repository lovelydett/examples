#include "rectangle.h"

Rectangle::Rectangle(string color, float width, float height)
    : Shape(color), width(width), height(height) {}

float Rectangle::getC() {
    return 2 * (width + height);
}

float Rectangle::getS() {
    return width * height;
}