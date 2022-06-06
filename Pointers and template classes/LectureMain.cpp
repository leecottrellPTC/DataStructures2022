#include <iostream>
#include <iomanip>
#include <string>
#include "TemplateClass.h"

using namespace std;

template <class someType>
someType bigger(someType a, someType b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <class T1, class T2>
void addEm(T1 firstVar, T2 secondVar){
    cout << firstVar + secondVar << endl;
}


/*int bigger(int a, int b){
    //checking to see if a is > b
    //return larger of the two
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

double bigger(double a, double b){
    //checking to see if a is > b
    //return larger of the two
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}*/
// DRY = Dont Repeat Yourself
int main()
{
    string w1 = "Lee", w2="Hi";
    int a =1, b = 15;
    double x = -3, y = -4;

    cout << bigger(w1, w2) << endl;
    cout << bigger(a, b) << endl;
    cout << bigger(x, y) << endl;
    //cout << bigger(a, w2) << endl;//two differetn datatype
    cout << "addem output\n";
    addEm(a, x);
    addEm(x, y);    
    cout << "Template class output\n";

    GenClass<string> C1("Lee");
            //specify type
    GenClass<int> C2(42);
    cout << C2.getTheValue() << endl;

    //GenClass<FoodItem>


    // generic classes and functions
    // can use a variety of datatypes, and specify them at RUNTIME

    /*double payroll = 12345.67;
    double tax = payroll * .07;

    cout << "Payroll " << payroll << endl;
    cout << "Tax " << tax << endl;

    //pointers
    double *payrollPtr, *taxPtr;    //hold memory address of a double

    payrollPtr = &payroll;  //get the memory address of payroll
                            //& is the address of operator

    cout << "Payroll address is " << payrollPtr << endl;
    cout << "Value at payroll address is " <<  *payrollPtr << endl;

    //this->someVar;
*/
    return 0;
}