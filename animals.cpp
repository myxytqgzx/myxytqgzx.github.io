/*
* Tianqi Yang
* CIS 22A M/W
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("infile.txt");
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    fout.open("outfile.txt");
    if(fout.fail())
    {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    int first, second, third, forth, fifth;
    fin >> first >> second >> third >> forth >>fifth;
    fout << "Animals at our farm" << endl;
    fout << first << " chickens" << endl;
    fout << second << " cows" << endl;
    fout << third <<" ducks" << endl;
    fout << forth << " horses" << endl;
    fout << fifth << " pigs" << endl;
    fin.close();
    fout.close();
    return 0;
}
