/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*   User enters a number that represents the month in the year
*   and the program will return how many days are in that month
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int month;

    cout << "I will print the number of days in a month." << endl;
    cout << "Enter the month (1-12): ";
    cin >> month;
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    }
    else if (month == 2)
        cout << "28 or 29 days" << endl;
    else
        cout << "31 days" << endl;
}
