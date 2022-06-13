#include <iostream>
#include <iomanip>
#include "FoodItem.cpp"
#include <array>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

array<int, 100> numbers;
array<string, 10> critters = {"cat", "dog", "squirrel", "donkey", "fish", "deer", 
"monkey", "raccoon", "hawk", "shark" };
array<FoodItem, 3> menu = {FoodItem("Cookies", 100, 3), 
    FoodItem("Milk", 200, 5), FoodItem("Eggs", 75, 1)};



int main(){

sort(menu.begin(), menu.end());

array<FoodItem, 3>::iterator foodItr;
for(foodItr = menu.begin(); foodItr < menu.end(); foodItr++){
    cout << foodItr->to_string() << endl;
}

//search by a property
//find food with calories < 200
cout << "\n\nFood less than 200\n\n";
for(foodItr = menu.begin(); foodItr < menu.end(); foodItr++){
    if(foodItr->getCalories() < 200){
        cout << foodItr->to_string() << endl;
        //do something
    }
}

  /*  cout << "Cool features of array\n";
    //int raySize = sizeof(critters) / sizeof(string);
    cout << "Critters has " << critters.size() << endl;
    cout << "First critter " << critters.front() << endl;
    cout << "Last critter " << critters.back() << endl;
    cout << "Critter in 3rd position " << critters[3] << " " << critters.at(3) << endl;

    //parse array with iterator
    array<string, 10>::iterator itr;
    sort(critters.begin(), critters.end());

    for(itr = critters.begin(); itr < critters.end(); itr++){
        cout << *itr << " ";
    }

    //searching
    //brute force
    //input choice here
    string search = "chicken";
    int found = -1;

    //binary search technique
    //sort first
    array<string, 10>::iterator foundItr;
    //see if it is there
    if(binary_search(critters.begin(), critters.end(), search)){
        //found
        foundItr = lower_bound(critters.begin(), critters.end(), search);
        //foundItr = upper_bound(critters.begin(), critters.end(), search);
        //find index
        found = foundItr - critters.begin();
        cout << search << " is in the list at position " << found << endl;
    }
    else{
        //not found
        cout << search << " is NOT in the list" << endl;
    }

*/
//brute force
   /* for(int x=0; x < critters.size() ; x++){
        if(critters[x] == search){
            //do something
            //find the location and quit
            found = x;
            break;//stop the loop
        }
    }
    cout << "\n\n";
    if(found > -1){
        cout << search << " is in the loop at position " << found << endl;
    }
    else{
        cout << search << " is NOT in the loop" << endl;
    }

*/
 
    return 1;
}