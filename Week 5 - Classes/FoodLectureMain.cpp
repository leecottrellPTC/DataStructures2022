#include <iostream>
#include <iomanip>
#include <string>

#include "FoodItem.cpp"
using namespace std;

#define ITEMS 10

FoodItem menu[ITEMS];
FoodItem order[ITEMS];
int numItemsOrdered = 0;
double totalPrice = 0;

void addToOrder(){
    string choice;
    int menuItem = -1;
    do{
        cout << "Which menu item? ";
        cin >> choice;
        if(choice >="0" && choice <="9"){
            menuItem = stoi(choice);//string to int
        }
    }while(menuItem <0 || menuItem >= ITEMS);

    cout << "ordered " << menu[menuItem].getName() << endl;
    order[numItemsOrdered] = menu[menuItem];
    totalPrice += menu[menuItem].getCost();
    numItemsOrdered ++;
}

void showOrder(){
    for(int x=0; x < numItemsOrdered; x++){
        cout << order[x].getName() << " " << order[x].getCost() << endl;
    }
    cout << "Total cost = " << totalPrice << endl;
}

void fillMenu()
{
    menu[0] = FoodItem("Pizza", 500, 5.5);
    menu[1] = FoodItem("Soda", 500, 2);
    menu[2] = FoodItem("Cookies", 500, 2);
    menu[3] = FoodItem("Hamburger", 500, 5.0);
    menu[4] = FoodItem("Cheeseburger", 500, 5.5);
    menu[5] = FoodItem("French Fries", 500, 3.5);
    menu[6] = FoodItem("Eggs", 500, 1);
    menu[7] = FoodItem("Candy", 500, 1.0);
    menu[8] = FoodItem("Chicken", 500, 8.5);
    // menu[9] = FoodItem("Salmon", 500, 12);
    menu[9].setName("Salmon");
    menu[9].setCalories(500);
    menu[9].setCost(12);
}

void showMenu()
{

    cout << setw(4) << left << "Num" << setw(20) << "Food Name" << setw(5) << right << "Cost" << endl;
    cout << "--------------------------------------\n";
    for (int x = 0; x < ITEMS; x++)
    {
        // cout << menu[x].to_string() << endl;
        cout << setw(4) << left << x << setw(20) << left << menu[x].getName() << setw(5) << right << menu[x].getCost() << endl;
    }
    cout << "--------------------------------------\n";
}

int main()
{
    fillMenu();
    showMenu();
    // menu
    char choice;
    // 1 to add food to order, 2 show menu, 3show order, 9 quit
    do
    {
        cout << "1 - Enter an item in the order\n";
        cout << "2 - Show the menu\n";
        cout << "3 - Show the current order\n";
        cout << "9 - Quit\n";
        cout << "Enter choice -> ";
        cin >> choice;
        switch (choice)
        {
            case('2'):
                showMenu();
                break;
            case('1'):
                //add to order
                if(numItemsOrdered < ITEMS){
                    addToOrder();
                }
                else{
                    cout << "Out of space in order\n";
                }
            case('3'):
                //show order
                showOrder();
                break;
            case ('9'):
                cout << "Good bye, here is your order\n\n";
                break;
            default:
                cout << choice << " is not a valid choice \n";
                break;
        };
    } while (choice != '9');

    return 0;
}