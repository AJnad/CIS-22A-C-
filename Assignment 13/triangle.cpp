/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 M/W
*/

#include <iostream>
using namespace std;

int main()
{
    int base;
    string repeat = "y";


    while(repeat == "y")
    {
        cout << "I will print squares for you!\n";
        cout << "Enter the width of the square: ";
        int size;
        cin >> size;
        cout << endl;
        for (int row = 1; row <= size; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;

        for(int row = size; row >= 1; row--)
        {
            for(int col = 1; col <= row; col++)
            {
                cout<< "*";
            }
            cout << endl;
        }

        cout << "\nWould you like me to print more triangles for you? (y/n)? ";
        cin >> repeat;
        cout << endl;
    }
    cout << "Thank you!" << endl;
    cout << "And, remember: programming is easy if you approach it from the right angle." << endl;

    return 0;
}
