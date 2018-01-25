/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30 am
*   Cookies
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int choc_chip, choc_mint, peanut_butter, oatmeal_raisin;
    double choc_total, chocM_total, peanut_total, oat_total, total;
    const double PRICE_CHOC_CHIP = 1.95;
    const double PRICE_CHOC_MINT = 2.15;
    const double PRICE_PEANUT_BUTTER = 2.05;
    const double PRICE_OAT_RAISIN = 1.85;

    cout << fixed << setprecision(2);

    cout << "Welcome to Cookie Magic, where every bite is magical!\n";
    cout << "Allow me to assist you with your order!\n" << endl;

    cout << "We sell the following flavors: " << endl;
    cout << "Chocolate Chip Cookies -- $1.95 each" << endl;
    cout << "Chocolate Mint Cookies -- $2.15 each" << endl;
    cout << "Peanut Butter Cookies -- $2.05 each " << endl;
    cout << "Oatmeal Raisin Cookies -- $1.85 each " << endl;



    cout << "\nPlease enter the number of chocolate chip cookies you would like to purchase: ";
    cin >> choc_chip;
    choc_total = choc_chip * 1.95;
    cout << "Please enter the number of chocolate mint cookies you would like to purchase: ";
    cin >> choc_mint;
    chocM_total = choc_mint * 2.15;
    cout << "Please enter the number of peanut butter cookies you would like to purchase: ";
    cin >> peanut_butter;
    peanut_total = peanut_butter * 2.05;
    cout << "Please enter the number of oatmeal raisin cookies you would like to purchase: ";
    cin >> oatmeal_raisin;
    oat_total = oatmeal_raisin * 1.85;

    cout << "\nYou Ordered the following:" << endl;
    cout << "Chocolate Chip Cookies: " << choc_chip << " @ " << PRICE_CHOC_CHIP << " each..." << "   $" << choc_total << endl;
    cout << "Chocolate Mint Cookies: " << choc_mint << " @ " << PRICE_CHOC_MINT << " each..." << "   $" << chocM_total << endl;
    cout << "Peanut Butter Cookies: " << peanut_butter << " @ " << PRICE_PEANUT_BUTTER << " each..." << "    $" << peanut_total << endl;
    cout << "Oatmeal Raisin Cookies: " << oatmeal_raisin << " @ " << PRICE_OAT_RAISIN << " each..." << "   $" << oat_total << endl;
    total =choc_total+chocM_total+peanut_total+oat_total;
    cout << "\nTotal:\t\t\t\t\t   $" << total << endl;
    cout << "\nThank you for your order! Please come again!" << endl;

}
