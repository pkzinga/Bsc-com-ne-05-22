#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int totalNumOfVowels(const string& data) 
{
    int CountOfVowel = 0;
    for (char c : data) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            CountOfVowel++;
        }
    }
    return CountOfVowel;
}

int totalNumOfWords(const string& data) 
{
    int CountOfWords = 1;                              
    for (char c : data) {
        if (c == ' ') {
            CountOfWords++;
        }
    }
    return CountOfWords;
}

string reverseStatement(string data) 
{
    reverse(data.begin(), data.end());
    return data;
}

string capitaliseSecondLetter(string data)
{   
    int i;
    
    for (i = 0; i < data.length(); i++)
    {
        if(i == 0 && data[i] != ' ')
        {
            data[i+1] = toupper(data[i+1]);
            data[i] = tolower (data[i]);
        }
        else if((data[i]) == ' ' && data[i+1] != ' ')
        {
            data[i+2] = toupper(data[i+2]);
            data[i+1] = tolower (data[i+1]);
        }
    }
    return data;

}

int main() {
    string fileData;
    int vowelCount = 0, wordCount = 1;

    ifstream myFile("advanced.txt");

    if (myFile.is_open()) {
        while (getline(myFile, fileData)) 
        {
            vowelCount = totalNumOfVowels(fileData);
            wordCount = totalNumOfWords(fileData);
            string reversedData = reverseStatement(fileData);
            string capitalizedSecondLetters = capitaliseSecondLetter(fileData);

            cout << vowelCount << endl;
            cout << wordCount << endl;
            cout << reversedData << endl;
            cout <<   capitalizedSecondLetters <<endl;
        }
        myFile.close();
    } else {
        cout << "Unable to open file"; 
    }
    
    return 0;
}
