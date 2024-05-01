#include <iostream>
using namespace std;

void SwapNumbers(int *pVar1, int *pVar2); // function Prototype

int main() {

    int VarA = 25;
    int VarB = 100;
    
    cout << "VarA before Swapping: " << VarA << endl; // VarA is 25
    cout << "VarB before Swapping: " << VarB << endl; // VarB i 100

    SwapNumbers(&VarA,&VarB); // passes by reference through pointers 

    cout << "VarA after Swapping: " << VarA << endl;
    cout << "VarB after Swapping: " << VarB << endl;

return 0;

}
//  function definition
void SwapNumbers(int *pVar1, int *pVar2) {
    int tempVar = *pVar1;
    *pVar1 = *Var2;
    *pVar2 = tempVar;
}

