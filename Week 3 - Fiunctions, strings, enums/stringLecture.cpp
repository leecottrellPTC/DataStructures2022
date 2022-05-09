#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h> //need for strcpy and other functions
#include <algorithm>

using namespace std;

int main()
{

    /*
        old school C++ strings are arrays of char
        char name[] = "Lee";    //L e e \0
        char *fname = new char[11];
    */

    char name[] = "Lee";
    //name ="RAIN";
    //VSC
    strcpy(name, "Rain");
    //vs
    strcpy_s(name, 4, "Rain");
    cout << "HI " << name << endl;

    //new school string
    string word = "hi";
    if(word == "hi"){
        cout << "HI back\n";
    }
    string sentence = "Four score and seven years ago";
    int pos = 0;
    pos = sentence.find("and");
    cout << "and is a posiiton " << pos;

    //replace e with 3
    //keep replacing until out of e
    //while loop
    /*
    while((pos = sentence.find("e")) != string::npos){
        sentence.replace(pos, 1, "3");
    }
    */
   replace(sentence.begin(), sentence.end(), 'e', '3');
    cout << sentence << endl;

    //tokenize the string

    char *theString = new char[sentence.length() + 1];
    strcpy(theString, sentence.c_str());//vsc
    //strcpy_s(theString,sentence.length() + 1, sentence.c_str() );//vs

    char *token;
    char *nextToken;

    token = strtok_s(theString, " ", &nextToken);
    //find the first token - up to the nextToken
    while(token != NULL){
        cout << token << endl;
        token = strtok_s(NULL, " ", &nextToken);
    }

    return 0;
}
//STL - Standard Template Library