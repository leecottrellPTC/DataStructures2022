#include <iostream>
#include <iomanip>

#include "FoodItem.cpp"
#include <string>
using namespace std;

#define ITEMS 10
FoodItem order[ITEMS]; // default constructor is already called,
FoodItem menu[ITEMS];

void fillMenu()
{
    menu[0] = FoodItem("Pizza", 500, 5.5);
    menu[1] = FoodItem("Soda", 200, 2);
    menu[2] = FoodItem("Cookie", 250, 2.5);
    menu[3] = FoodItem("Cheesburger", 300, 5);
    menu[4] = FoodItem("French Fries", 400, 3);
    menu[5] = FoodItem("Eggs", 100, 1);
    menu[6] = FoodItem("Candy", 400, 3.5);
    menu[7] = FoodItem("Chicken Drumstrick", 250, 3);
    menu[8] = FoodItem("Steak", 400, 12);
    menu[9] = FoodItem("Salmon", 300, 15);
}


void showMenu()
{
    cout << left << setw(4) << "Num" << setw(20) << left << "Menu Item" << setw(5) << "Cost" << endl;
    for (int x = 0; x < ITEMS; x++)
    {
        // cout << menu[x].to_string() << endl;
        cout << left << setw(4) << x << setw(20) << left << menu[x].getName() << setw(5)
             << right << fixed << setprecision(2)
             << menu[x].getCost() << endl;
    }
}
int numItemsOrdered = 0;
double totalPrice = 0;
void addToMenu(){
    string choice;  //make all input string or char
    int menuItem = -1;
    do{
        cout << "Which menu number? ";
        cin >> choice;
        if(choice >="0" && choice <="9"){
            menuItem = stoi(choice);
        }
    }while(menuItem <0 || menuItem >=ITEMS);
    cout << "ordered " << menu[menuItem].to_string() << endl;
    order[numItemsOrdered] = menu[menuItem];
    totalPrice += menu[menuItem].getCost();
    numItemsOrdered ++;
}
/*
void addToMenu(){
    int menuItem = -1;
    do{
        cout << "Which menu number? ";
        cin >> menuItem;
    }while(menuItem <0 || menuItem >=ITEMS);
    cout << "ordered " << menu[menuItem].to_string() << endl;
    order[numItemsOrdered] = menu[menuItem];
    totalPrice += menu[menuItem].getCost();
    numItemsOrdered ++;
}
*/

void showOrder(){
    for(int x=0; x < numItemsOrdered; x++){
        cout << setw(20) << left << order[x].getName() << setw(5)
             << right << fixed << setprecision(2)
             << order[x].getCost() << endl; 
    }
    cout << "Total price" << setw(14) << right 
        << fixed << setprecision(2) << totalPrice << endl;
}


int main()
{
    char choice = 0; // char helps to avoid accidental entering of string into int
   
    fillMenu();
    showMenu();
    cout << "---------------------------------------------------" << endl;
    do
    {
        cout << "1: Add item to order " << endl;
        cout << "2: Show menu " << endl;
        cout << "3: Show order " << endl;
        cout << "9: Finish order" << endl;
        cout << "Choice - ";
        cin >> choice;
        switch (choice)//cannot switch on string in C++
        {
        case ('2'):
            showMenu();
            break;
        case ('1'):
            //Add item, intentionally ignoring the break  
            if(numItemsOrdered < ITEMS){   
                addToMenu(); 
            }
            else{
                cout << "No more items in this order" << endl;
            }
        case ('3'):
            //show the order
            showOrder();
            break;
        case ('9'):
            //quitting
            break;
        default:
            cout << choice << " is not valid\n";
        };
    } while (choice != '9');
    cout << "Thanks for ordering, here is your order\n\n";
    showOrder();

    return 0;
}