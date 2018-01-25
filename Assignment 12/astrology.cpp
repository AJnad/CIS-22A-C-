/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int month, day;
    char play = 'y';

    while (play == 'y')
    {
        cout << "What's your sign?" << endl;
        cout << "Please enter the month of your birth (1-12): ";
        cin >> month;
        cout << "Please enter the day of your birth (1-31): ";
        cin >> day;

        if((month == 3 && (day >= 21 && day <= 31)) || (month == 4 && (day >= 1 && day <= 19)))
            cout << "Your sign is Aries." << endl;

        else if ((month == 4 && (day >= 20 && day <= 31)) || (month == 5 && (day >= 1 && day <= 20)))
            cout << "Your sign is Taurus." << endl;

        else if ((month == 5 && (day >= 21 && day <= 31)) || (month == 6 && (day >= 1 && day <= 21)))
            cout << "Your sign is Gemini." << endl;

        else if ((month == 6 && (day >= 22 && day <= 31)) || (month == 7 && (day >= 1 && day <= 22)))
            cout << "Your sign is Cancer." << endl;

        else if ((month == 7 && (day >= 23 && day <= 31)) || (month == 7 && (day >= 1 && day <= 22)))
            cout << "Your sign is Leo." << endl;

        else if ((month == 8 && (day >= 23 && day <= 31)) || (month == 9 && (day >= 1 && day <= 22)))
            cout << "Your sign is Virgo." << endl;

        else if ((month == 9 && (day >= 23 && day <= 31)) || (month == 10 && (day >= 1 && day <= 22)))
            cout << "Your sign is Taurus." << endl;

        else if ((month == 10 && (day >= 23 && day <= 31)) || (month == 11 && (day >= 1 && day <= 21)))
            cout << "Your sign is Scorpio." << endl;

        else if ((month == 11 && (day >= 22 && day <= 31)) || (month == 12 && (day >= 1 && day <= 21)))
            cout << "Your sign is Sagittarius." << endl;

        else if ((month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day >= 1 && day <= 19)))
            cout << "Your sign is Capricorn." << endl;

        else if ((month == 1 && (day >= 20 && day <= 31)) || (month == 2 && (day >= 1 && day <= 18)))
            cout << "Your sign is Aquarius." << endl;

        else if ((month == 2 && (day >= 19 && day <= 31)) || (month == 3 && (day >= 1 && day <= 20)))
            cout << "Your sign is Pisces." << endl;

        cout << "Would you like to run this program again? (y/n) ";
        cin >> play;
    }

}
