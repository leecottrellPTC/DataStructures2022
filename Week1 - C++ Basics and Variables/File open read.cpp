#include <iostream>
#include<iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    string word;
    int count = 0;
    fin.open("words.txt");

    if(fin.fail())  //always check for file opening. Either quit or solve
    {
        cout << "words.txt did not open, closing program";
        return -1;
    }

    cout << "Word file opened!!\n";

    while(!fin.eof()){  //read until end of file
        count ++;
        fin >> word;    //read the word on the line
                        //spaces in line will messup the read
        cout << "Word # " << count << ": " << word << endl;
    }

    fin.close();

    return 0;
}