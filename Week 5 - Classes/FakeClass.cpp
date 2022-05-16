#include "FakeClass.h"
using namespace std;

FakeClass::FakeClass(int age, string name)
{
    _age = age;
    _name = name;
}

FakeClass::FakeClass()
{
    _age = 0;
    _name = "No Name";
}
FakeClass::~FakeClass()
{
    _age = 0;
    _name = "No Name";
}

string FakeClass::to_string(){
    return _name + " " + std::to_string(_age);
}