#ifndef FOODITEM_H
#define FOODITEM_H

#pragma once

#include <string>
using namespace std;

class FoodItem
{
public:
    FoodItem();
    FoodItem(string Name, int Calories, double Cost);
    ~FoodItem(); // destructor

    void setName(string Name);
    string getName();

    void setCalories(int Calories);
    int getCalories();

    void setCost(double Cost);
    double getCost();

    string to_string();

    //functionality
    double perCalorieCost();

    // methods
private:
    // variables
    string name;
    int calories;
    double cost;
};

#endif