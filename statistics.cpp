/*
*Tianqi Yang
*Qiying Wu
*CIS 22A M/W
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    int count = 0;
    string word, line;
    ifstream fin;
    ofstream fout;
    fin.open("sonnet.txt");
    if(fin.fail())
    {
        cout << "Input file failed!" <<endl;
    }
    while (fin >> word)
    {
        count++;
    }
    fout.open("statistics.txt");
    if(fout.fail())
    {
        cout << "Output file failed!" <<endl;
    }
    fout << "The sonnet has " << count << " words\n";
    fin.close();

    ifstream fin2;
    fin2.open("sonnet.txt");
    if(fin2.fail())
    {
        cout << "Input2 file failed!";
    }
    count = 0;
    while(getline(fin2,line))
    {
        count++;
    }

    if(fout.fail())
    {
        cout << "Output2 file failed!" << endl;
    }
    fout << "The sonnet has " << count << " lines." << endl;
    fin2.close();
    fout.close();
    return 0;
}
