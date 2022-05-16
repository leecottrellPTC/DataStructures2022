#ifndef FAKECLASS_H
#define FAKECLASS_H
#pragma once

using namespace std;
#include <string>
class FakeClass
{
public:
    FakeClass(int age, string name);
    FakeClass();
    ~FakeClass();
    string to_string();
private:
    int _age;
    string _name;

};

#endif