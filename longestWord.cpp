/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20
*/

#include <iostream>
using namespace std;
int main()
{
    string longest_word;
    longest_word = "pseudopseudohypoparathyroidism";
    cout << "The length of pseudopseudohypoparathyroidism is "<< longest_word.length()<< " letters.\n";
    cout << longest_word.substr(0,6) << endl;
    cout << longest_word.substr(14,3) << endl;
    cout << longest_word.substr(20,7) << endl;
    cout << longest_word.substr(4,2) <<endl;
    return 0;
}
