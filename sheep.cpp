/*
*Tianqi Yang
*Qiying Wu
*CIS 22A M/W
*/

#include <iostream>
using namespace std;
int main()
{
    int numSheep = 1;
    int targetSheep;
    cout << "I will help you fall asleep!" <<endl;
    cout << "Enter the number of sheep you wish to count:";
    cin >> targetSheep;
    for(numSheep;numSheep <= targetSheep;numSheep++)
    {
        cout << numSheep << " sheep" << endl;
    }
    cout << "\n\nYou counted " <<targetSheep << " sheep.\n";
    cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ\n";
return 0;
}
