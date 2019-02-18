/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
using namespace std;

int main()
{
    char p1;
    char p2;
    string rps1;
    string rps2;

    cout << "Let's play Rock-Paper-Scissors!\n";
    cout << "Player one, please enter your name: ";
    cin >> p1;
    cout << "Player two, please enter your name: ";
    cin >> p2;
    cout << p1 << ", please enter \"Rock\", \"Paper\" or \"Scissors\": " ;
    cin  >> rps1;
    cout << p2 << ", please enter \"Rock\", \"Paper\" or \"Scissors\": " ;
    cin >> rps2 ;
    bool tie = (rps1 == rps2);
    if (!tie){
        if(rps1 == "Rock" && rps2 == "Scissors"){
            cout << "Rock breaks scissors." <<endl;
            cout << p1 << " wins!";
        }else if (rps1 == "Rock" && rps2 == "Paper"){
            cout << "Paper covers rock." <<endl;
            cout << p2 << " wins!";
        }else if ( rps1 == "Paper" && rps2 == "Rock"){
            cout << "Paper covers rock." <<endl;
            cout << p1 << " wins!";
        }else if ( rps1 == "Scissors" && rps2 == "Rock"){
            cout << "Rock breaks scissors." <<endl;
            cout << p2 << " wins!";
        }else if ( rps1 == "paper" && rps2 == "Scissors"){
            cout << "Scissors cut paper." <<endl;
            cout << p2 << " wins!";
        }else{
            cout << "Scissors cut paper." <<endl;
            cout << p1 << " wins!";
        }
        }else {
            cout << "It's a tie";
            }
    }










