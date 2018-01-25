/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

void printArrays(int array1[], string array2[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array1[i] << " " << array2[i] << endl;
    }
}
// this function prints out the contents of array1 and array2

int main()
{

    const int SIZE = 5;
    string animals[SIZE] = {"sheep", "donkeys", "goats", "geese", "cats"};
    int number_animals[] = {5, 3, 8, 2, 4};
    cout << "Other animals at our farm" << endl;
    printArrays(number_animals, animals, SIZE);

    return 0;
}
