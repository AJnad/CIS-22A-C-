/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30-11:20 am
*   Asks user for a year and determines if it is a leap year or not
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cout << "Welcome! Enter a year and I will tell you whether it is a Leap Year!\n";
    cout << "\nPlease enter the year: ";
    cin >> year;

    if(year % 4 == 0)
    {
        cout << year << " is a Leap Year." << endl;
    }
    else
    {
        cout << year << " is not a Leap Year." << endl;
    }
}
