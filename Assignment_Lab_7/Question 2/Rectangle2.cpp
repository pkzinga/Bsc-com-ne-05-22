#include "Rectangle2.h"

Rectangle2::Rectangle2() : length(0.0f), width(0.0f) {}

Rectangle2::Rectangle2(float l, float w) : length(l), width(w) {}

Rectangle2::~Rectangle2() {}


void Rectangle2::setLength(float l) {
    length = l;
}

void Rectangle2::setWidth(float w) {
    width = w;
}

float Rectangle2::getLength() const {
    return length;
}

float Rectangle2::getWidth() const {
    return width;
}

float Rectangle2::calculateArea() const {
    return length * width;
}
