/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
using namespace std;

int main () {
    string Name;
    string Color;
    string Birth;
    cout << "Welcome! This program will tell you your \"Rock\" Star Name\n";
    cout << "Please enter your first name: " << Name;
    cin >> Name;
    cout << "please enter your favorite color: " << Color;
    cin >> Color;
    cout << "please enter your birthstone: " << Birth;
    cin >> Birth;
    cout << "Your \"Rock\" Star Name is " << Name << " the " << Color << " " << Birth << ". "<<endl;
    return 0;
}



