#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

int main(){

    int age = 52;
    int dogAge;
    string yourName;

    cout << "Enter your name please ";
    cin >> yourName;
    

    cout << "Your age is " << age << endl;
     cout << "Enter your age ";
    cin >> age; //input

    dogAge = age * 7;

    cout << "Your age in dog years is " << dogAge << endl;

    return 0;
}
