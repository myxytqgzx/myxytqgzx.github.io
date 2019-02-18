/*
* Tianqi Yang
* CIS 22A M/W
*/

#include <iostream>
using namespace std;
int main ()
{
    int bottle;
    cout << "Hello, let's sing the \"99 bottles of beer\" song!\n";
    cout << "Enter the number of bottle(s): ";
    cin >> bottle;
    while (bottle > 0)
    {
        if ( bottle >= 1)
        {
            cout << bottle << " bottles of beer on the wall!\n"
                 << bottle << " bottles of beer!" << endl;
        }
        else
            cout << bottle << " bottle of beer on the wall!\n"
                 << bottle << " bottle of beer!" << endl;
        bottle--;
        if ( bottle >= 1)
        {
            cout << "Take one down, pass it around.\n" << bottle << " "
                 << "bottles of beer on the wall.\n" << endl;
        }
        else
        {
            cout << "Take one down, pass it around.\n"
                 << "No more bottles of beer on the wall.\n" << endl;
        }
    }
return 0;
}
