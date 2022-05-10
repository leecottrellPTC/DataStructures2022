#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#define SIZE 1000
//#define aargh cout
using namespace std;

//datatype variable[size];
int numbers[1000];

void fillArrayFile(string path);
void calcAverage(int &avg);
double calcStd(int avg);

int main(){
//    aargh << "Hello world " << endl;
    fillArrayFile("normalnumbers.txt");

    int average = 0;
    calcAverage(average);
    cout << average << " average of array\n";

    double std = 0;
    std = calcStd(average);
    cout << std << " standard deviation\n";

    return 0;
}


double calcStd(int avg){
    double std  = 0;
    double total = 0;

    for(int x=0; x < SIZE; x++){
        total += pow(numbers[x] - avg, 2);
    }//end of sigma loop
    std = sqrt(total / SIZE);

    return std;
}
void calcAverage(int &avg){
    int total = 0;
    for(int x=0; x < SIZE; x++){
        total += numbers[x];
    }
    avg = total/SIZE;
}

void fillArrayFile(string path){
    int index = 0;
    ifstream fin;
    fin.open(path);
    if(fin.fail()){
        cout << path << " did not open - quitting\n";
        exit(-1);   //die out of C++
    }
    string input;
    //while(!fin.eof())
   for(index = 0; index < SIZE; index++) {
        //cout << index << endl;
        fin >> numbers[index];
        cout << numbers[index]<< endl;
        //index ++;
    }
    cout << "Read " << index << " numbers from " << path << endl;
    fin.close();

}
