#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int number = 8784204;
    int digit = 0;
    int total =0;
    int count =0;

    cout << "Number is " << number << endl;
    while(number > 0){
        digit = number % 10;//GETS THE RIGHT MOST DIGIT
        number = number / 10;
       // cout << digit << endl;
        if(count %2 == 0){
            //even, add to total
            total += digit;
        }
        else{
            total -= digit;
        }
        count ++;
    }//end of while loop
    //cout << "Total " << total << endl;
    if(total % 11 == 0){
        cout << "Divisible by 11" << endl;
    }
    else{
        cout << "NOT divisible by 11" << endl;
    }
}