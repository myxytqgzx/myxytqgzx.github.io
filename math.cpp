/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The square of " << number << " is: " << pow(number,2.0) << endl;
    cout << "The cube of " << number << " is: " << pow(number,3.0) << endl;
    cout << "The quartic (fouth power) of " << number << " is: " << pow(number, 4.0) << endl;
    cout << "The ceiling of " << number << " is: " << ceil(number) << endl;
    cout << "The floor of " << number << " is: " << floor(number) << endl;
    cout << "The square root of " << number << " is: " << sqrt(number) << endl;
    return 0;

}
