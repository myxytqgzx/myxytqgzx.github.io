/*
*Tianqi Yang
*CIS 22A M/W
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ChocolateChip;
    int ChocolateMint;
    int PeanutButter;
    int OatmealRaisin;
    double choc_total;
    double mint_total;
    double peanut_total;
    double oatmeal_total;
    const double PRICE_CHOC_CHIP = 1.95;
    const double PRICE_CHOC_MINT = 2.15;
    const double PRICE_PEANUT_BUTTER = 2.05;
    const double PRICE_OATMEAL_RAISIN = 1.85;
    double total;
    cout << "Welcome to Cookie Magic, where every bite of cookie is magical!\n";
    cout << "Allow me to assist you with your order.\n\n";
    cout << "We sell the following flavor:\n";
    cout << "Chocolate Chip Cookies -- $1.95 each\n";
    cout << "Chocolate Mint Cookies -- $2.15 each\n";
    cout << "Peanut Butter Cookies -- $2.05 each\n";
    cout << "Oatmeal Raisin Cookies -- $1.85 each\n";

    cout << "\nPlease enter the number of chocolate chip cookies you would like to purchase: ";
    cin >> ChocolateChip;
    cout << "Please enter the number of chocolate mint cookies you would like to purchase: ";
    cin >> ChocolateMint;
    cout << "Please enter the number of peanut butter cookies you would like to purchase: ";
    cin >> PeanutButter;
    cout << "Please enter the number of oatmeal raisin cookies you would like to purchase: ";
    cin >> OatmealRaisin;
    cout << "\nYou ordered the following:\n";
    cout << ChocolateChip << " chocolate chip cookies"<<endl;
    cout << ChocolateMint << " chocolate mint cookies"<<endl;
    cout << PeanutButter << " peanut butter cookies"<<endl;
    cout << OatmealRaisin << " oatmeal raisin cookies"<<endl;
    choc_total = ChocolateChip * PRICE_CHOC_CHIP;
    mint_total = ChocolateMint * PRICE_CHOC_MINT;
    peanut_total = PeanutButter * PRICE_PEANUT_BUTTER;
    oatmeal_total = OatmealRaisin * PRICE_OATMEAL_RAISIN;
    total = choc_total + mint_total + peanut_total + oatmeal_total;
    cout << fixed << setprecision(2);
    cout << "\nChocolate Chip Cookies:\t" << ChocolateChip << " @ $1.95 each...\t$" << choc_total << endl;
    cout << "Chocolate Mint Cookies:\t" << ChocolateMint << " @ $2.15 each...\t$" << mint_total << endl;
    cout << "Peanut Butter Cookies:\t" << PeanutButter << " @ $2.05 each...\t$" << peanut_total << endl;
    cout << "Oatmeal Raisin Cookies:\t" << OatmealRaisin << " @ $1.85 each...\t$" << oatmeal_total << endl;
    cout << "\nTotal: \t\t\t\t\t\t$" << total << endl << endl;
    cout << "Thank you for your order! Please come again!";
return 0;



}
