#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfIntegers, numberOfStrings;

    // Prompt user for the number of integers
    cout << "How many integers do you want to enter? ";
    cin >> numberOfIntegers;

    // Dynamically allocate an array for integers
    int* dynamicIntegers = new int[numberOfIntegers];

    // Prompt user to enter integers
    for (int i = 0; i < numberOfIntegers; ++i) {
        cin >> dynamicIntegers[i];
    }

    // Prompt user for the number of strings
    cout << "How many strings do you want to enter? ";
    cin >> numberOfStrings;

    // Dynamically allocate an array for strings
    string* dynamicStrings = new std::string[numberOfStrings];

    // Prompt user to enter strings
    cin.ignore(); // Ignore the input
    for (int i = 0; i < numberOfStrings; ++i) {
        getline(cin, dynamicStrings[i]);
    }

    // Output the integers
    cout << "Dynamically allocated integers: ";
    for (int i = 0; i < numberOfIntegers; ++i) {
        cout << dynamicIntegers[i] << ",";
    }
    cout << std::endl;

    // Output the strings
    cout << "Dynamically allocated strings: ";
    for (int i = 0; i < numberOfStrings; ++i) {
        cout << dynamicStrings[i] << ",";
    }
    cout << std::endl;

    // Free memory
    delete[] dynamicIntegers;
    delete[] dynamicStrings;

    return 0;
}
