#include <iostream>
#include <limits>

using namespace std;

// Function Prototypes
void InputPage();
void AreaOfTriangle();
void AreaOfSquare();
 void AreaOFRectangle();

int main() {
    InputPage();
    
}

    
 void InputPage () {
        cout << "Please select the area of the shape to calculate"<<endl;
        cout << "1. Square"<<endl;
        cout << "2. Rectangle"<<endl;
        cout << "3. Triangle"<<endl;
        cout << "4. Quit Program" <<endl;
        cout <<""  <<endl;
    int condition;
       cin >> condition;
    if(!condition){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        InputPage();
    } else if (condition == 1){
         AreaOfSquare();
    }else if (condition == 2){
        AreaOFRectangle();
    }else if(condition == 3) {
         AreaOfTriangle();
    }else if(condition == 4){
        cout << "Quitting Program, Byee" << endl;
    }else {
        cout << "You Have Entered an Invalid Input, Please Try again !!!" << endl;
        cout << "" <<endl;
        InputPage();
    }

 }

 void AreaOfSquare() {
    double side;
    cout << "Please enter the length of the side of the Square :"<< endl;
    cout << "Length of side is :";
    cin >> side;

    if(!side){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You Have Entered An Invalid Input, Please Input a valid Number !!!\n\n";
        AreaOfSquare();
 } else if(side >= 0){
    double AreaS = side * side ;
    cout << "The Area Of The Square Is: " << AreaS << endl;
    cout << ""<< endl;
    InputPage();
 }
 
 }

 void AreaOFRectangle() {
    double length,width;
    cout << "Please enter the length and width of the Rectangle " <<endl;
    cin >> length;
    cin >> width ;
    
    if(!length || !width) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "You have entered invalid inputs, try again" << endl;
    AreaOFRectangle();
     } else if(length >= 0 && width >=0){
    double AreaR = length * width ;
    cout << "The Area Of The Rectangle Is: " << AreaR << endl;
    cout << ""<< endl;
    InputPage();
 } 
  
 }

 void AreaOfTriangle() {
    double base,height;
 cout << "Please enter the base and height of the Triangle " <<endl;
    cin >> base;
    cin >> height ;
    
    if(!base || !height) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "You have entered invalid inputs, try again" << endl;
    AreaOfTriangle();
     } else if(base >= 0 && height >=0){
    double AreaT = 0.5 * (base * height);
    cout << "The Area Of The Triangle Is: " << AreaT<< endl;
    cout << ""<< endl;
    InputPage();
 } 
 }