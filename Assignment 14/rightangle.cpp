/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int width;
    string choice;

    do
    {
        cout << "I will print triangles for you!" << endl;
        cout << "Enter the width of the triangle's base: ";
        cin >> width;

        while(cin.fail())
        {
            cout << "Please enter a positive whole number." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Enter the width of the triangle's base: ";
            cin >> width;
        }

        cout << endl;
        if (!(cin.fail()))
        {
            for (int row = 1; row <= width; row++)
            {
                for (int col = 1; col <= row; col++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            cout << endl;

            for(int row = width; row >= 1; row--)
            {
                for(int col = 1; col <= row; col++)
                {
                    cout << "*";
                }
                cout << endl;
            }

        }
        cout << endl;
        cout << "Would you like me to print more triangles for you (y/n)? ";
        cin >> choice;

    }
    while(choice == "y" || choice == "Y" || choice == "yes" || choice == "Yes");

    cout << "\nThank you!" << endl;
    cout << "And, remember: programming is easy if you approach it from the right angle.\n";


}
