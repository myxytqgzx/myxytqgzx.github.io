/*
*Tianqi Yang
*CIS 22A M/W 9:30-11:20am
*/
#include <iostream>
using namespace std;
int main()
{
    double weight;
    string planet;
    const double Mercury = 0.38;
    const double Venus = 0.91;
    const double Mars = 0.38;
    const double Jupiter = 2.54;
    const double Saturn = 1.08;
    const double Uranus = 0.91;
    const double Neptune = 1.19;
    const double Pluto = 0.06;
    cout << "Welcome! This program can calculate how much you weigh on any of the planets in our solar system!" <<endl;
    cout << "First, please enter your weight in pounds: ";
    cin >> weight;
    cout << "Next, please choose one of the following planets: \n";
    cout << "\t\t\t\tMercury\n";
    cout << "\t\t\t\tVenus\n";
    cout << "\t\t\t\tMars\n";
    cout << "\t\t\t\tJupiter\n";
    cout << "\t\t\t\tSaturn\n";
    cout << "\t\t\t\tUranus\n";
    cout << "\t\t\t\tNeptune\n";
    cout << "\t\t\t\tPluto\n";
    cout << "Please enter the name of a planet: ";
    cin >> planet;

    if (planet=="Mercury"){
        cout<< "Your weight on Mercury is " <<weight*Mercury <<"."<<endl;
    }else if (planet=="Venus"){
        cout<< "Your weight on Venus is "<<weight*Venus <<"."<<endl;
    }else if (planet=="Mars"){
        cout<< "Your weight on Mars is "<<weight*Mars<<"."<<endl;
    }else if (planet=="Jupiter"){
        cout<< "Your weight on Jupiter is "<<weight*Jupiter<<"."<<endl;
    }else if (planet=="Saturn"){
        cout<< "Your weight on Saturn is "<<weight*Saturn<<"."<<endl;
    }else if (planet=="Uranus"){
        cout<< "Your weight on Uranus is "<<weight*Uranus<<"."<<endl;
    }else if (planet=="Neptune"){
        cout<< "Your weight on Neptune is "<<weight*Neptune<<"."<<endl;
    }else if (planet=="Pluto"){
        cout<< "Your weight on Pluto is "<<weight*Pluto<<"."<<endl;
    }else{
        cout << "You entered an invalid name for a planet. Please re-run the program to try again. ";
    }
return 0;
}
