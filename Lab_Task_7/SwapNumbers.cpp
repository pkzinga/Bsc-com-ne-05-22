#include <iostream>
using namespace std;

void SwapNumbers (int &var1, int &var2); // function prototype

int main() {

    int VarA = 25;
    int VarB = 100;

    cout << "VarA before swap: " << VarA << endl; // VarA is 25
    cout << "VarB before swap: " << VarB << endl; // VarB is 100

    SwapNumbers(VarA,VarB); // swaps the numbers and passes arguments by reference

    cout << "VarA after swap: " << VarA << endl; // VarA is 100
    cout << "VarB after swap: " << VarB << endl; // VarB is 25

    return 0;

}
// function definition
void SwapNumbers(int &Var1, int &Var2) {
    int tempVar = Var1;
    Var1 = Var2;
    Var2 = tempVar;
}