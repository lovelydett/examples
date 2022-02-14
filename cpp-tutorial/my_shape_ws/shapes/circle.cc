#include "circle.h"

Circle::Circle(string color, float radius) : Shape(color), radius(radius) {}

float Circle::getC() {
    return 2 * PI * radius;
}

float Circle::getS() {
    return PI * radius * radius;
}