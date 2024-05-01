#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle rect;

    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
