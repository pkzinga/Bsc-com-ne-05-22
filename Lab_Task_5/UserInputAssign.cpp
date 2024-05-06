#include <iostream>
#include <limits>

 using namespace std;

int main() {

    int num;

     cout << "Enter an integer value between 5 and 10: "<< endl;
 
    while(true) {
               cin >> num;

        if (!num) {
            cout << "Sorry, you have entered an invalid integer value please try again."<< endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else if (num > 5 && num < 10) {
            cout << "Your integer (" << num << ") has been accepted."<<endl;
            break;
        } else {
            cout << "You entered "<< num << " Please enter a number between 5 and 10." << endl;
        } 
            

        }
        
      
}


