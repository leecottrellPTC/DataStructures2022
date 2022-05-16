#include "FakeClass.h"
#include <string>

using namespace std;

FakeClass::FakeClass() {
	_age = 0;
	_name = "No Name";
}

FakeClass::FakeClass(int age, string name) {
	_age = age;
	_name = name;
}
FakeClass::~FakeClass() {

}

string FakeClass::to_string() {
	return _name + " " + std::to_string(_age);
}