#include "Person.h"

Person::Person() : mweight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(string firstName, float newWeight, int newAge) : mweight(newWeight), mFirstName(firstName), mAge(newAge) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return mweight + otherPerson.mweight;

}

bool Person::operator==(const Person& otherPerson) {
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return mFirstName != otherPerson.mFirstName;
}

 Person::operator int() {
    return mAge;
}

Person::operator string() const {
    return mFirstName;
}

Person::operator float() const {
    return mweight;
}

