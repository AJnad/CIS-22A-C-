/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
#include <iomanip>
using namespace std;

void add_tax(double& pizza_price);

void calculate_bill(double& pizza_price);

void calculate_tip (double& pizza_price);

void display_price (double& pizza_price);

int main()
{
    cout << "Welcome to Mama Domino's Pizzaria!\n";
    cout << "\nEnter the price of the pizza: ";
    double price;
    cin >> price;
    calculate_bill(price);

}

// adds the tax of the pizza (1.085%) to the total price of the pizza
void add_tax(double& pizza_price)
{
    pizza_price *= 1.085;

}

// adds a tip to the total price of the pizza
void calculate_tip (double& pizza_price)
{
    double tip = pizza_price * .15;
    pizza_price += tip;
}

// formats the price to two decimal places and prints the total amount of the pizza after taxes and tip
void format_price (double& pizza_price)
{
    cout << "\nWith taxes and tip, your total comes to $" << fixed << setprecision(2) << pizza_price << endl;
}


void calculate_bill(double& pizza_price)
{
    add_tax(pizza_price);
    calculate_tip(pizza_price);
    format_price (pizza_price);
}

