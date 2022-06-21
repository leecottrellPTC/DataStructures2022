#include <iostream>
#include <iomanip>
#include <fstream>
#include <queue>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    queue<string> directions;
    string aStep;
    int count = 1;

    directions.push("Heat oven to 225");
    directions.push("Mix ingredients");
    directions.push("Put in pan");
    directions.push("Put pan oven");
    directions.push("Cook until done");

    while(!directions.empty()){
        aStep = directions.front();
        cout << "Step " << count << " " << aStep << endl;
        count ++;
        directions.pop();
    }
}