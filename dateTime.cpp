/*
* Tianqi Yang
* CIS 22A M/W
*/
#include<iostream>
using namespace std;
void dateAmerica (int m, int d, int y);
void dateEuropean (int d, int m, int y);
void timeAmerica ( int hours, int mins, string mo );
void timeEuropean ( int hours, int mins, string mo );

int main() {
    int year;
    int day;
    int month;
    int hour;
    int minutes;
    string dayEve;

    cout << "Welcome! This program will print dates and times in both the American and European styles!\n\n";

    cout <<"First, let's print a formatted date.\n\n";

    cout << "Please enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << endl;

    dateAmerica(month,day,year);
    dateEuropean(day,month,year);

    cout << "\nNow, let's print a formatted time.\n\n";

    cout << "Please enter the current hour: ";
    cin >> hour;
    cout << "Please enter the current minutes: ";
    cin >> minutes;
    cout << "Please enter whether it is \"morning\" or \"evening\": ";
    cin >> dayEve;
    cout << endl;

    timeAmerica(hour,minutes,dayEve);
    timeEuropean(hour,minutes,dayEve);

    cout << "\nBye! See you another day!" << endl;

    return 0;
}
void dateAmerica (int m, int d, int y)
{
    cout << m << "/" << d << "/" << y <<endl;
}
void dateEuropean (int d, int m, int y)
{
    cout << d << "." << m << "." << y <<endl;
}
void timeAmerica ( int hours, int mins, string mo)
{

    if( mo == "morning")
    {
        if (mins< 10)
            cout <<"The current time written in American style: " << hours << ":" << "0" << mins << "am" << endl;
        else
        cout << "The current time written in American style: " << hours << ":" << mins << "am" << endl;
    }
    else
    {
        if (mins < 10)
            cout <<"The current time written in American style: " << hours << ":" << "0" << mins << "am" << endl;
        else
        cout << "The current time written in American style: " << hours << ":" << mins << "pm" << endl;
    }
}
void timeEuropean ( int hours, int mins, string mo)
{

    if( mo == "morning")
    {
        if (mins <10)
            cout <<"The current time according to the 24 hour clock: " << hours << ":" << "0" << mins << endl;
        else
        cout << "The current time according to the 24 hour clock: " << hours << ":" << mins << endl;
    }
    else
    {
        if (mins< 10)
            cout <<"The current time according to the 24 hour clock: " << hours << ":" << "0" << mins << endl;
        else
        cout << "The current time according to the 24 hour clock: " << hours + 12 << ":" << mins << endl;
    }
}

