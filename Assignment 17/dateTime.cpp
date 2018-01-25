/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include<iostream>
using namespace std;

void formatDateAmerican(int y, int m, int d)
{
    cout << "Today's date in the U.S.: " << m << "/" << d << "/" << y << endl;
}
// returns the date that in the manner that is commonly written in America

void formatDateEuropean(int y, int m, int d)
{
    cout << "Today's date in Europe: " << d << "." << m << "." << y << endl;
}
// returns the date in the form that is commonly written in Europe

void formatTimeAmerican (int h, int m, string evenOrMorn)
{
    cout << "The current time written in American style: " << h << ":" << m;
    if(evenOrMorn == "morning")
        cout << "am" << endl;
    else
        cout << "pm" << endl;
}
// returns the time of day in american time format

void formatTimeEuropean (int h, int m, string evenOrMorn)
{
    if (evenOrMorn == "evening")
    {
        if (h >= 1 && h <= 11)
        {
            h += 12;
        }
    }
    cout << "The current time according to the 24 hour clock: " << h << ":" << m << endl;
}
// returns the time of day in military time


int main() {
    int year;
    int day;
    int month;
    int hour;
    int minutes;
    string dayEve;

    cout << "Welcome! This program will print dates and times in both the American and European styles!\n\n";

    cout <<"First, let's print a formatted date.\n\n";

    cout << "Please enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << endl;

    //call to the formatDateAmerican function here
    formatDateAmerican(year, month, day);

    //call to the formatDateEuropean function here
    formatDateEuropean(year, month, day);

    cout << "\nNow, let's print a formatted time.\n\n";

    cout << "Please enter the current hour: ";
    cin >> hour;
    cout << "Please enter the current minutes: ";
    cin >> minutes;
    cout << "Please enter whether it is \"morning\" or \"evening\": ";
    cin >> dayEve;
    cout << endl;


    //call to the formatTimeAmerican function here
    formatTimeAmerican (hour, minutes, dayEve);

    //call to the formatTimeEuropean function here
    formatTimeEuropean (hour, minutes, dayEve);


    cout << "\nBye! See you another day!" << endl;

    return 0;
}

//write functions here
