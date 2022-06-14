#include <iostream>
#include <iomanip>
#include <fstream>
#include <forward_list>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

void fillListFile(forward_list<string> &theList, string fileName)
{
    string word;
    int count = 0;
    ifstream fin;
    fin.open(fileName);
    if (fin.fail())
    {
        cout << fileName << " did not open\n";
        exit(-1);
    }

    while (!fin.eof())
    {
        fin >> word;
        theList.push_front(word); // add to the list
        count++;
    }

    cout << count << " words read from " << fileName << endl;

    fin.close();
}

void showTheList(forward_list<string> theList, int numDisplay = 50)
{
    forward_list<string>::iterator word;
    int count = 1;
    for (word = theList.begin(); word != theList.end() && count <= numDisplay; word++)
    {
        cout << left << setw(15) << *word;
        if (count % 5 == 0)
        {
            cout << endl;
        }
        count++;
    }
}

void caseWord(string &word){
    //uppsercase word
    for(char &x : word){
        x = toupper(x);
    }
}

int main()
{

    forward_list<string> nouns, adjectives, allWords;
    fillListFile(nouns, "nouns.txt");
    fillListFile(adjectives, "adjective.txt");

    allWords.splice_after(allWords.before_begin(), nouns);
    allWords.splice_after(allWords.before_begin(), adjectives);

    for_each(allWords.begin(), allWords.end(), caseWord);
    

    cout << "Nouns\n";
    showTheList(nouns);
    cout << "\n\nAdjectives\n";

    showTheList(adjectives, 12);

 cout << "\n\nALL THE WORDS\n";

    showTheList(allWords, 100);


    return 0;
}