#pragma once
#include <string>

using namespace std;

class Person {
public:
    Person();
    Person(string firstName, float newWeight, int newAge); 
    ~Person();
   
    float operator+(const Person& otherPerson);
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);
    operator int ();
    operator string()const; 
    operator float()const; 
private:
    float mweight;
    string mFirstName;
    int mAge;
};
