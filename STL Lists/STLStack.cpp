#include <iostream>
#include <iomanip>
#include <fstream>
#include <stack>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;
bool balanced(string exp){
    stack<char> parens;
    for(char ch : exp){
        if(ch == '('){
            parens.push(ch);    //add to stack
        }

        if(ch == ')'){
            
            if(parens.empty()){
                return false;
            }
            
            char top = parens.top();    //get element from top of stack
            parens.pop();   //remove element from stack

            if(top == '(' && ch != ')'){
                return false;
            }


        }//pop if
    }//for loop

    return parens.empty();
    
}
int main(){
    string exp = "(23 - (4 * 5)))))";
    if(balanced(exp)){
        cout << exp<< " is balanced\n";
    }
    else{
        cout << exp<< " is NOT balanced\n";
    }
    return 0;
}