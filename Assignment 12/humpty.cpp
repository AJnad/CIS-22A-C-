/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    for(int i = 1; i < 151; i++)
    {
        if(i % 7 == 0 && i % 5 == 0)
            cout << "Had a Great Fall" << endl;
        else if (i % 7 == 0)
            cout << "Dumpty" << endl;
        else if (i % 5 == 0)
            cout << "Humpty" << endl;
        else
            cout << i << endl;
    }
}
