#include <iostream>
#include <iomanip>

#include "FoodItem.cpp"
using namespace std;

int main(){

    FoodItem cookies("Oreos", 100, 2.4);
    cout << cookies.to_string() << endl;

    FoodItem drink;
    drink.setName("Mountain Dew");
    drink.setCalories(200);
    drink.setCost(1.75);

    cout << drink.to_string() << endl;

    double totalCost = drink.getCost() + cookies.getCost();

    return 0;
}