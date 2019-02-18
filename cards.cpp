/*
*Tianqi Yang
*CIS 22A W/M
*/

#include <iostream>
using namespace std;
int main()
{
    string card;
    cout << "Welcome!" <<endl;
    cout << "Enter the Card Notation: ";
    cin >> card;
    string value_code;
    string suit_code;
    if(card.length() == 3){
      value_code = card.substr(0, 2);
      suit_code = card.substr(2, 1);
    }
    else{
      value_code = card.substr(0, 1);
      suit_code = card.substr(1, 1);
    }
    string value;
    if(value_code == "A"){
      value = "Ace";
    }
    else if(value_code == "K"){
      value = "King";
    }
    else if(value_code == "Q"){
      value = "Queen";
    }
    else if(value_code == "J"){
      value = "Jack";
    }
    else{
      value = value_code;
    }
    string suit;
    if(suit_code == "H"){
      suit = "Hearts";
    }
    else if(suit_code == "D"){
      suit = "Diamonds";
    }
    else if(suit_code == "C"){
      suit = "Clubs";
    }
    else{
      suit = "Spades";
    }
    cout << "You Entered: " << value << " of " << suit << endl;
return 0;
}
