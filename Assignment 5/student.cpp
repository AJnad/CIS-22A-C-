/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30 am
*   Student
*/

#include <iostream>
using namespace std;

int main()
{
    char first_letter_LastName;
    int student_ID;
    double numYears;

    cout << "Collecting Student Data!\n";
    cout << "\nPlease enter the first letter of your last name: ";
    cin >> first_letter_LastName;
    cout << "Please enter your student ID number: ";
    cin >> student_ID;
    cout << "Please enter the number of years you have attended De Anza: ";
    cin >> numYears;

    cout << "\n" << first_letter_LastName << " is the first initial of your last name.";
    cout << "\nYour student ID number is " << student_ID << ".";
    cout << "\nYou have attended De Anza for " << numYears << "." << endl;
}
