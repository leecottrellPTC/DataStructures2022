#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

#define STUDS 10
#define GRADES 5

string students[STUDS];    // rows
int grades[STUDS][GRADES]; // rows, columns
double average[STUDS];     // rows
double avgCols[STUDS];

int fillArrays()
{
    int row = 0;
    int aGrade = 0;
    string aStud;
    ifstream fin;
    fin.open("ch8num13.data");
    if (fin.fail())
    {
        cout << "Ch8 num 13 did not open, returing to main\n";
        return -1;
    }
    while (!fin.eof() && row < STUDS) // just being paranoid with the < STUDS
    {
        fin >> aStud;
        // error checking here
        students[row] = aStud;
        // I know there are 5 grades in the file
        for (int g = 0; g < GRADES; g++)
        {
            fin >> aGrade;
            // cout << aStud << " grade " << aGrade << " row " << row << " grade " << g << endl;
            //  error checking here
            grades[row][g] = aGrade;
        }
        row++;
    }
    return row;
}

double avgGrades()
{
    double classAvg = 0;
    double rowAvg = 0;
    int rowTotal = 0;
    int classTotal = 0;

    for (int row = 0; row < STUDS; row++)
    {
        for (int col = 0; col < GRADES; col++)
        {
            rowTotal += grades[row][col];
        } // end of the row
        // calculate student avg
        rowAvg = rowTotal / GRADES;
        average[row] = rowAvg;
        classTotal += rowTotal;
        rowTotal = 0; // reset the count
    }                 // end of the array parse
    classAvg = classTotal / (STUDS * GRADES);
    return classAvg;
}

void avgColumns()
{
    int totCol[STUDS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (int col = 0; col < GRADES; col++)
    {
        for (int row = 0; row < STUDS; row++)
        {
            totCol[col] += grades[row][col];
        }
        avgCols[col] = (float)totCol[col]/STUDS;
        cout << col << " avg " << avgCols[col] <<endl;
    }
}

void reportCard()
{
    for (int row = 0; row < STUDS; row++)
    {
        cout << setw(14) << left << students[row] << average[row] << endl;
    }
}
int main()
{
    int rows = 0;
    // open the file and check for reads
    rows = fillArrays();
    if (rows <= 0)
    {
        cout << "No data is read, quitting\n";
        return -1;
    }
    else
    {
        cout << rows << " rows read from file\n";
    }

    double classAvg = avgGrades();
    if (classAvg > 0)
    {
        cout << "Class average " << classAvg << endl;
    }
    else
    {
        cout << "Error with average, quitting\n";
        return -1;
    }

    reportCard();

    avgColumns();
    return 1;
}