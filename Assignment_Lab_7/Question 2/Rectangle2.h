#pragma once

class Rectangle2 {
private:
    float length;
    float width;

public:
    Rectangle2();
    Rectangle2(float l, float w);
    ~Rectangle2();

    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
};
