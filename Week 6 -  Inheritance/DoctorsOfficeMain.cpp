#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Person.cpp"
//#include "Person.hpp"
#include "Patient.cpp"
//#include "Patient.hpp"
#include "Doctor.cpp"

using namespace std;
void menu();
int main()
{
    person lee("Lee", "Cottrell");
    patient joeBob("Joe", "Bob", "Headache");
    cout << lee.to_string() << endl;
    cout << joeBob.to_string() << endl;

    patient Ein;

    Ein.setFirstName("Doggy");
    Ein.setLastName("Ein");
    Ein.setComplaint("Not enough food");

    cout << Ein.to_string() << endl;

    Doctor spock("Joe", "Spock", "Logic", 1701);
    cout << spock.to_string() << endl;

    //menu();
}

void menu(){
   char choice;
    int hourToFind;
    string lname;
    int pos;
    do {
        cout << "Enter 1 to print schedule\n";
        cout << "Enter 2 to add to the schedule\n";
        cout << "Enter 3 to search by hour\n";
        cout << "Enter 4 to search by patient lastname\n";
        cout << "Enter 9 to quit\n";
        cin >> choice;
        switch (choice) {  
        case '2':
            //2 = add to schedule
                      
            break;
            //pass through to the next case
        case '1':
            //1 = print schedule
            
            break;
        case '3':
            //3 = search by hour
            
            break;
        case '4':
            //4 = search by last name
            
            break;
        case '9':
            //9 = quit
            cout << "Bye Bye\n";
            break;
        default:
            cout << choice << " is invalid, enter 1, 2, or 9\n";
            break;
        }

    } while (choice != '9');
}//end of menu
