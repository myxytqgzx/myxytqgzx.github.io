/*
* Tianqi Yang
* CIS 22A
*/

#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << "i\tj\n";
    double i = -5.0;
    double j;
    for ( i ; i <= 5.0; i=i+0.5)
    {
        j = pow(i,3.0);
        cout << i << "\t" << j << endl;
        cout << fixed << setprecision(1);
    }
    return 0;
}

