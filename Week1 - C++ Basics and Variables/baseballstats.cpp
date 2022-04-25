#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int hits, atbats, walks;
    hits = atbats = walks = 0;
    double batAvg = 0.0;

    ifstream fin;
    fin.open("stats.txt");

    if(fin.fail()){
        cout << "Stats.txt file not opened :(\n";
        return -1;
    }
    // fin.open("c://data//stats.txt");
    while (!fin.eof())
    {
        fin >> atbats >> hits >> walks;
        // input
 
        // process
        // batAvg = hits / (double) (atbats - walks);
        //handle 0 denominator
        if((atbats - walks) > 0){    
          batAvg = hits / static_cast<double>(atbats - walks);
          
        }
        else{
            batAvg = 0;
        }
  

        // output
        // echo out the input
        cout << "At bats: " << atbats << endl;
        cout << "Hits: " << hits << endl;
        cout << "Walks: " << walks << endl;
        cout << "Bat avg: " << setprecision(3) << fixed << batAvg << endl;
    }
    fin.close();
    return 0;
}