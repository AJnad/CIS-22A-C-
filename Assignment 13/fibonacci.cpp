/**
*   Ajay Nadhavajhala
*   CIS 22A M/W 9:30-11:20 AM
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int fib1 = 0;
    int fib2 = 1;
    cout << "The first 14 Fibonacci numbers are: \n";

    for(int i=0; i < 14; i++)
    {
        cout << " " << fib1;
        int thirdTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = thirdTerm;
    }
    cout << endl;
}
