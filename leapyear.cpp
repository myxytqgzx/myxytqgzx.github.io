/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
using namespace std;

int main ()
{
    int Year;
    int Remainder;
    cout << "Welcome! Enter a year and I will tell you wether it is a leap year!\n\n";
    cout << "Please enter a year: ";
    cin >> Year;
    Remainder = Year % 4;

    if (Remainder == 0) {
       cout << Year << " is Leap Year.\n";
    } else {
     cout << Year << " is not a Leap Year.\n";
    }






}
