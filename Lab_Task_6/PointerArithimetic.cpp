#include <iostream>
using namespace std;

int main() {
  
//   null pointer
int* pPointer = nullptr;

int numbersArray[3] = {10,20,30};

// assign address of first element to pointer
pPointer = numbersArray;

// outur the address of the first element
cout << "Address at pPointer: " << pPointer << endl;
cout << "Address of numbersArray[0]: " << /*&*/numbersArray << endl;

// output the value of the first element using pointer and indirection
cout <<"Value at pPointer: " << *pPointer << endl;

// this outputs the value of the second elemt
cout << "Value at ++pPointer: " << *(++pPointer) << endl;

// assign address of the first element to  pointer
pPointer = numbersArray;

// this outputs the value of the first elemnt 
cout << "Value at pPointer++: " << *(pPointer++) << endl;


return 0;

}