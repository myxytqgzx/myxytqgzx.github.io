/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
using namespace std;

int main ()
{
    string First;
    string Ilast;
    string Food;
    string Number;
    string Adj;
    string Color;
    string Animal;
    cout << "Welcome to Madlibs!\n\n";
    cout << "Please enter your first name: " << First << endl;
    cin >> First;
    cout << "Please enter your instructor's first name: " << Ilast << endl;
    cin >> Ilast;
    cout << "Please enter a food: " << Food << endl;
    cin >> Food;
    cout << "Please enter a number between 100 and 120: " << Number << endl;
    cin >> Number;
    cout << "Please enter an adjective: " << Adj << endl;
    cin >> Adj;
    cout << "Please enter a color: " << Color << endl;
    cin >> Color;
    cout << "Please enter an animal: "<< Animal << endl;
    cin >> Animal;
    cout << "\n\n";
    cout << "Dear Instructor " << Ilast << ":\n\n";
    cout << "I am sorry that I am unable to turn in my homework today. ";
    cout << "First I ate a rotten " << Food << ", " << "which made me turn " << Color << " and very sick. ";
    cout << "I came down with a fever of " << Number << ". ";
    cout << "Next, my " << Adj << " pet " << Animal << " must have smelled the remains of the " << Food << " on my homework, because my pet ate my homework.\n\n";
    cout << "I knew I should not have ordered that " << Animal << " on eBay!\n\n";
    cout << "I know you do not accept late homework but I am hoping you will make an exception in my case.\n\nSincerely,\n" << First ;
    return 0;
    }
