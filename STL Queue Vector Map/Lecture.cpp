#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <time.h>
#include <cmath>

using namespace std;

void queueLecture()
{
    queue<string> directions;
    string aStep;
    int count = 1;

    directions.push("Heat up the oven");
    directions.push("Mix ingredients");
    directions.push("Pour into pan");
    directions.push("Bake until done");

    // remove first entry from queue
    while (!directions.empty())//walk through entire queue
    {
        aStep = directions.front();
        directions.pop();
        cout << "Step " << count << " " << aStep << endl;
        count ++;
    }
}

void vectorLecture(){
    //vector is unlimited size array
    //array will size itself as needed
    vector<int> numberVec;
    srand(time(NULL));
    double vectorSize = (int)(rand() %5000) + 1000;
    cout << "Vector size is " << vectorSize << endl << endl;
   
    for(int x=0; x < vectorSize; x++){
        numberVec.push_back(rand()%5000);
        //numberVec.
    }

    //walk through the vector
    //show first 10
    vector<int>::iterator itr;
      vector<int> counter;
    

    for(itr = numberVec.begin(); itr != numberVec.begin()+10; itr++){
        cout << *itr << endl;
        //counter[*itr] ++;
    }

  

}

void mapLecture(){
    /*
        maps are like a dictionary
        key - value pair
        key must be unique
        key is a O(1) search
    */

        //key   value
    map<string, double> gradePoints;
    gradePoints["A+"] = 4.25;
    gradePoints["A"] = 4.0;
    gradePoints["A-"] = 3.75;


    cout << "A is worth " << gradePoints["A"] << endl;
    cout << "B is worth " << gradePoints["B"] << endl;


}

int main()
{

    //queueLecture();
    //vectorLecture();
    mapLecture();

    return 1;
}