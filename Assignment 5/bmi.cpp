/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30 am
*   BMI Calculator
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int weight, height;
    double bmi;
    cout << "\nWelcome to the BMI calculator. Let's calculate your Body Mass Index.";
    cout << "\nPlease enter your weight in pounds: ";
    cin >> weight;
    cout << "Please enter your height in inches: ";
    cin >> height;
    bmi = (weight * 703)/ (pow(height, 2));
    cout << "Your BMI is: " << bmi << endl;

}
