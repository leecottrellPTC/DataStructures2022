#include "FoodItem.h"

FoodItem::FoodItem()
{
    name = "no name";
    calories = 0;
    cost = 0;
}

FoodItem::FoodItem(string Name, int Calories, double Cost) {
    name = Name;
    calories = Calories;
    this->cost = Cost;
}

FoodItem::~FoodItem()
{

}

//setters and getters

void FoodItem::setName(string Name) {
    this->name = Name;
}
string FoodItem::getName() {
    return name;
}
void FoodItem::setCalories(int Calories) {
    calories = Calories;
}
int FoodItem::getCalories() {
    return calories;
}
void FoodItem::setCost(double Cost) {
    cost = Cost;
}
double FoodItem::getCost() {
    return cost;
}

string FoodItem::to_string() {
    return name + " calories " + std::to_string(calories)
        + " costs " + std::to_string(cost);
}

double FoodItem::perCalorieCost() {
    return cost / calories;
}