/*
*Tianqi Yang
*CIS 22A M/W
*/

#include <iostream>
#include <iomanip>
using namespace std;

/**

    calculates the tax at 8.5% and adds it to the price of the pizza


    @param pizza_price the price of the pizza
*/
void add_tax(double& pizza_price);

void calculate_tip(double& pizza_price);

void format_price(double& pizza_price);

/**
    calls add_tax, calculate_tip and display_price
    to calculate and display the final price

    @param pizza_price the price of the pizza as entered by the user

*/
void calculate_bill(double& pizza_price);


int main()
{
    cout << "Welcome to Mama Domino's Pizzaria!\n";
    cout << "\nEnter the price of the pizza: ";
    double price;
    cin >> price;
    calculate_bill(price);

}

void add_tax(double& pizza_price)
{
    pizza_price *= 1.085;

}

void calculate_tip (double& pizza_price)
{
    pizza_price *=1.15;
}

void format_price(double& pizza_price)
{
    cout << fixed <<setprecision(2)
         <<  "With tax and tip, your total comes to $" << pizza_price;
}
void calculate_bill(double& pizza_price)
{
    add_tax(pizza_price);
    calculate_tip(pizza_price);
    format_price(pizza_price);

}
