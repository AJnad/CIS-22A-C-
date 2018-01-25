/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am
*   Plays the game of madlib
*/

#include <iostream>
using namespace std;

int main()
{
    string first_name, professor_last_name, food;
    int threeDigitNumber;
    string adjective, color, animal;
    cout << "Welcome to Madlibs!" << endl;
    cout << "\nPlease enter your first name: ";
    cin >> first_name;
    cout << "Please enter your instructor's last name: ";
    cin >> professor_last_name;
    cout << "Please enter a food: ";
    cin >> food;
    cout << "Please enter a number between 100 and 120: ";
    cin >> threeDigitNumber;
    cout << "Please enter an adjective: ";
    cin >> adjective;
    cout << "Please enter a color: ";
    cin >> color;
    cout << "Please enter an animal: ";
    cin >> animal;

    cout << "\nDear Instructor " << professor_last_name << " : " << endl;
    cout << "\nI am sorry that I am unable to turn in my homework today. First I ate a rotten " << food << ", which made me \nturn " << color <<
        " and very sick. I came down with a fever of " << threeDigitNumber << ". " << "Next, my amazing pet " << animal << " must have smelled" <<
        "\nthe remains of the " << food << " on my homework, because my pet ate my homework." << endl;
    cout << "\nI knew I should not have ordered that " << animal << " on eBay!";
    cout << "\n\nI know you do not accept late homework but I am hoping you will make an exception in my case.";
    cout << "\n\nSincerely,";
    cout << "\n" << first_name << endl;
}
