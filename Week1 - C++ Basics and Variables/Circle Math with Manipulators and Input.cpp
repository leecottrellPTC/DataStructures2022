#include <iostream>
#include <iomanip>//need for endl and other manipulators
#include <math.h>

using namespace std;

int main(){

    double pi = 3.1415927;
    double radius = 3;
    double area, circum;

    cout << "Circle math with manipulators" <<endl;
    cout << "Enter in the circle radius ";
    cin >> radius;
    
    area = 2 * pi * radius;
    circum = pi * pow(radius, 2);

    cout << fixed << setprecision(2);   //force 3 decimal places, sticky
    cout << setw(13) << left << "Radius" << " : " << radius <<endl;
    //setw forces column width, left makes it left aligned
    cout << setw(13) << left << "Diameter" << " : " << radius *2 <<endl;
    cout << setw(13) << left << "Area" << " : " << area <<endl;
    cout << setw(13) << left << "Circumference"<< " : " <<  circum << endl;

    return 0;
}