#include<iostream>
#include<iomanip>
#include<string>
#include "FakeClass.cpp"
using namespace std;

int main(){
    
    FakeClass hi(52, "Lee");
    cout << hi.to_string();
    return 0;
}