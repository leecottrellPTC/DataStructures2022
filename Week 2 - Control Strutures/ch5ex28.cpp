#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    double profit=30000, oldprofit=-1;
    double rent = 600;
    double units = 50;
    //as rent goes up by 40, units drop by 1

    while(profit > oldprofit){
        //profit is current units and rent, old is the previios
        oldprofit = profit; //keep the current value, make it old
        rent += 39;
        units--;
        profit = units * rent;
    }
    //beyond equlibrium point, need to undo the last math
    units ++;
    rent -= 39;
    profit = units * rent;
    cout << "Units " << units << endl;
    cout << "Rent " << rent << endl;
    cout << "Profit " << profit << endl;

    return 0;

}