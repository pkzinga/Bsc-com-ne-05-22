#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    Person Jane = Person("Jane", 60.0f,25);
    Person John = Person("John", 75.0f,50);

    float totalWeight = Jane + John;
    int johnAge = John;
    string janeFirstName = Jane;
    float janeWeight = Jane;
    
    cout << "Total Weight: " << totalWeight << endl;
    cout << "John's Age: " << johnAge << endl;
    cout << "Jane's FirstName: " << janeFirstName << endl;
    cout << "Jane's weight: " << janeWeight << endl;
    if (Jane == John){
        cout << "This is the same person" << endl;
    }
    if(Jane != John){
        cout << "This Is Not The Same Person" << endl;
    }
    return 0;
}
