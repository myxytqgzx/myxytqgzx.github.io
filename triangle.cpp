/*
*Qianqian Zhao
*CIS 22A T/Th
*/

#include <iostream>
using namespace std;

int main()
{
    int base;
    string repeat = "y";
    do
    {

        cout << "I will print triangles for you!\n";
        cout << "Enter the width of the triangle's base: ";
        int size;
        cin >> size;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a positive whole number." << endl;
            cout << "Enter the width of the triangle's base: ";
            cin >>size;


        }
        for (int row = 1; row <= size; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        for (int row = size; row >= 1 ; row--)
        {
            for(int col = 1 ; col <=row ; col ++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "Would you like me to print more triangles for you (y/n)?";
        cin >> repeat ;
    }
    while (repeat == "y");
    cout << "Thank you!\nAnd, remember: programming is easy if you approach it from the right angle.";
    return 0;
}
