/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

void print(const int values[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
}
// this function will print out the contents of the int array

void print(const double tempVal[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << tempVal[i] << " ";
    }
    cout << endl;
}
// this function will print out the contents of the double array


int main()
{
    const int NUM_SCORES = 10;
    int scores[NUM_SCORES] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    const int TEMP_VAL = 3;
    double temperature[TEMP_VAL] = {25.7, 30.3, 40.9};

    cout << "Integer scores:\n";
    print(scores, NUM_SCORES);

    cout << "Double temperatures:" << endl;
    print(temperature, TEMP_VAL);
}
