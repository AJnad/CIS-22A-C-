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
    cout << "i\tj" << endl;
    for (double i = -5.0; i <= 5; i+=0.5)
    {
        double j = pow(i, 3);
        cout << fixed << setprecision(1) << i << "\t" << j << endl;
    }
}
