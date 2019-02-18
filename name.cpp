/*
*Qianqian Zhao;
*Aaron John
*T/Th C++
*/

#include <iostream>;
using namespace std;
int main()
{
    string first_name;
    string last_name;
    string full_name;
    cout <<"Hi! I want to learn your name!" <<endl;
    cout <<"Please enter your first name and last name: ";
    cin >> first_name;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you " << full_name << "!" << endl;
    cout << "The length of your first name is " << first_name.length() << " letters\n";
    cout << "The length of your last name is " << last_name.length() << " letters\n";
    cout << "The length of your full name is " << full_name.length() -1 << " letters\n";
    string subf = first_name.substr(0,1);
    string subl = last_name.substr(0,1);
    cout << "Your initials are: " << subf << subl << endl;




}
