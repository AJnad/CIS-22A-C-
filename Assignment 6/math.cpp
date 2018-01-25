/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30-11:20
*   Math
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double inputVal;
    cout << "Enter a number: ";
    cin >> inputVal;
    cout << "The square of " << inputVal << " is: " << pow(inputVal, 2) << endl;
    cout << "The cube of " << inputVal << " is: " << pow(inputVal, 3) << endl;
    cout << "The quartic (fourth power) of " << inputVal << " is: " << pow(inputVal, 4) << endl;
    cout << "The ceiling of " << inputVal << " is: " << ceil(inputVal) << endl;
    cout << "The floor of " << inputVal << " is: " << floor(inputVal) << endl;
    cout << "The square root of " << inputVal << " is: " << sqrt(inputVal) << endl;
}
