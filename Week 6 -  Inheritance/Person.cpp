#include "Person.hpp"
#include <iostream>
using namespace std;

#pragma region setters and getters
void person::setName(string first, string last)
{
    firstName = first;
    lastName = last;

}
void person::setFirstName(string first)
{
    firstName = first;
}

void person::setLastName(string last)
{
    lastName = last;
}
string person::getFirstName()
{
    return firstName;
}
string person::getLastName()
{
    return lastName;
}

#pragma endregion

#pragma region constructors
person::person(string first, string last)
{

    firstName = first;
    lastName = last;
    //cout << "Creating a person\n";
}
person::person()
{
    firstName = "";
    lastName = "";
}
#pragma endregion