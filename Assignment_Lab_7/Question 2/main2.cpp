#include <iostream>
#include "Rectangle2.h"
using namespace std;

int main() {
    
    Rectangle2 rect1;

    float length1, width1;
    cout << "Enter the length of rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of rectangle 1: ";
    cin >> width1;
 
    rect1.setLength(length1);
    rect1.setWidth(width1);

     
    cout << "The Area of rectangle 1 is: " << rect1.calculateArea() << endl;


    float length2, width2;
    cout << "Enter the length of rectangle 2: ";
    cin >> length2;
    cout << "Enter  the width of rectangle 2: ";
    cin >> width2;

    Rectangle2 rect2(length2, width2);

    
    cout << " The Area of rectangle 2 is: " << rect2.calculateArea() << endl;

    return 0;
}
