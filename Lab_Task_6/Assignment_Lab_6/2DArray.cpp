#include <iostream>
#include <limits> 
using namespace std;

int main() {

    int numberOfRows, numberOfColumns;

    // Prompt user for the dimensions of the array
    do {
        cout << "Enter the number of rows the number should not exceed 3: ";
        while (!(cin >> numberOfRows) || numberOfRows <= 0 || numberOfRows > 3) {
            cout << "Invalid input. Please enter a number between 1 and 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "Enter the number of columns the number should not exceed 3): ";
        while (!(cin >> numberOfColumns) || numberOfColumns <= 0 || numberOfColumns > 3) {
            cout << "Invalid input. Please enter a number between 1 and 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (numberOfRows <= 0 || numberOfRows > 3 || numberOfColumns <= 0 || numberOfColumns > 3);

    // Dynamically allocate values in the array
    double** array = new double*[numberOfRows];
    for (int i = 0; i < numberOfRows; ++i) {
        array[i] = new double[numberOfColumns];
    }

    // Assign values to each element of the array
    cout << "Enter the values for the " << numberOfRows << "x" << numberOfColumns << " array:" << endl;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cout << "Enter value for element on index [" << i << "][" << j << "]: ";
            while (!(cin >> array[i][j])) {
                // If input is not a double, ignore the input and try again
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a double: ";
            }
        }
    }

    // Output values of each element of the array
    cout << "Values of the array are :" << endl;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < numberOfRows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
