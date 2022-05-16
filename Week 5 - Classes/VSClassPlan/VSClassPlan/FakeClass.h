#pragma once
#include <string>
using namespace std;
class FakeClass
{
private:
	int _age;
	string _name;
public:
	FakeClass();
	FakeClass(int age, string name);
	string to_string();
	~FakeClass();
};

