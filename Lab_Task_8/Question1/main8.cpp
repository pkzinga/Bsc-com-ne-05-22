//main function for the program
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box Box1;  //declare Box1 of typr Box
    Box Box2;  // declare Box2 of type Box
    Box Box3;  //declare Box3 of type Box
    double volume = 0.0;  // store the volume of box here

    // box Specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // Box2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of box 1
    volume = Box1.GetVolume();
    cout << "Volume Of Box1 :  " << volume << endl;

   // volume of box 2
    volume = Box2.GetVolume();
    cout << "Volume Of Box2 :  " << volume << endl;
 
 // add two objects as follows:
    Box3 = Box1 + Box2;
// volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume Of Box3 :  " << volume << endl;

return 0;
}