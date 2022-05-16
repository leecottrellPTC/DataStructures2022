#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

#define STUDS 10
#define GRADES 5

string students[STUDS];
int grades[STUDS][GRADES];
double averages[STUDS];

int fillArrays()
{
    int row = 0;
    int aGrade;
    string aStud;
    ifstream fin;

    fin.open("ch8num13.data");

    if (fin.fail())
    {
        cout << "Could not open the file\n";
        return -1;
    }

    while (!fin.eof() && row < STUDS)
    {
        fin >> aStud;
        students[row] = aStud;
        for (int g = 0; g < GRADES; g++)
        {
            fin >> aGrade; // should error check this
            // cout << row << " row " << g << " g " << aGrade << endl;
            grades[row][g] = aGrade;
        }
        row++;
    }

    return row;
}

double calcAverages()
{
    double classAverage = 0;
    double rowAvg = 0;
    int rowTotal = 0;
    int classTotal = 0;

    for (int row = 0; row < STUDS; row++)
    {
        for (int col = 0; col < GRADES; col++)
        {
            rowTotal += grades[row][col];
        } // end of cols
        rowAvg = (float) rowTotal/GRADES;
        averages[row] = rowAvg;
        classTotal += rowTotal;
        rowTotal =0;//reset the row total
    }// end of rows

    classAverage = (float) classTotal / (GRADES * STUDS);
    return classAverage;
}

void reportCard(){
    for(int s = 0; s < STUDS; s++){
        cout << setw(14) << left << students[s] << averages[s] << endl;
    }
}

int main()
{

    int rowsRead = 0;

    rowsRead = fillArrays();
    if (rowsRead <= 0)
    {
        cout << "Problem with file, quitting\n";
        return -1;
    }

    cout << rowsRead << " rows read from file\n";

    cout << "Class Average " << calcAverages() << endl;

    reportCard();
    return 0;
}