#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
/*
        open the file
        walk through the file (parse)
        encrypt the letters
        write the encryption out to a file
        close the files
    */
using namespace std;

int main(){
    string line;
    string encrypted;
    ifstream fin;
    ofstream fout;
    int rotation = 5;

    //open the files
    fin.open("frost.txt");
    if(fin.fail()){
        cout << "Frost.txt not opened\n";
        return -1;
    }
    fout.open("frost.enc");
    if(fout.fail()){
        cout << "Frost.enc not opened\n";
        return -2;
    }

    //do something

    while(getline(fin, line)){
        //keep looping as long as there are lines in the file
        //cout << line << endl;
        encrypted = "";//clear out the encryption
        for(int c=0; c < line.length(); c++){
            encrypted += line.at(c) + rotation;
        }
        fout << encrypted << endl;


    }

    fout.close();
    fin.close();

    return 0;
}