#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// enum is just a numbering system with custom names
// enumeration

// declare the function here - prototype
// prototype is function header followed by ;
void printMyName(); // prototype
int someFunction(int x);
// int someFunction(int );//old school
string buildALine(int size = 10); // default parameter
// int fun(int, double, string);

// prototype and define function at the same time
double grossPay(double hours, double rate)
{
    double pay = hours * rate;

    return pay;
}

// DRY = Dont Repeat Yourself

enum year
{
    Jan=1,    Feb=2,    Mar=3,    Apr=4,    May=5,    Jun=6,    Jul=7,    Aug=8,    Sep=9, Oct=10, Nov=11, Dec=12
    };

int main()
{

    for (int y = Jan; y <= Dec; y++)
    {
        cout << y << endl;
    }
    /*
        //call the function - somewhere
        printMyName();
        cout << someFunction(5) << endl;
        cout << someFunction(10) << endl;
        int theAnswer = someFunction(100);
        int whoaNelly = someFunction(someFunction(someFunction(5)));
        cout << "Big numner " << theAnswer << endl;

        cout << buildALine() << endl;
        cout << buildALine(20) << endl;
    */
    return 0;
}

// function creation and body
void printMyName()
{
    cout << "Lee Cottrell" << endl;
}

int someFunction(int x)
{
    int answer;

    answer = x * x;

    return x * x;
}

string buildALine(int size)
{
    string line;
    for (int x = 0; x < size; x++)
    {
        line += "-";
    }

    return line;
}