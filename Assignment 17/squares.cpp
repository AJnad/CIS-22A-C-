/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

void printSquares(int size)
{

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printTriangle(int b)
{
    for(int i = 0; i <= b; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printRectangle(int l, int w)
{
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < l; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int length;
    int width;
    int base;
    string shape;
    string repeat;

    while (repeat != "n")
    {
        cout << "\nI will print squares for you!\n";
        cout << "Rectangles and triangles, too!" << endl;

        cout << "\nEnter the shape that you would like to print (rectangle, triangle, square): ";
        cin >> shape;

        if(shape == "square" || shape == "Square")
        {
            cout << "Enter the length of the side of the square: ";
            cin >> length;
            printSquares(length);
        }
        else if (shape == "rectangle" || shape == "Rectangle")
        {
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            printRectangle(length, width);
        }

        else if (shape == "triangle" || shape == "Triangle")
        {
            cout << "Enter the length of the triangle's base: ";
            cin >> base;
            printTriangle(base);
        }
        else
            cout << "You entered an invalid shape!\n" << endl;

        cout << "Would you like me to print more shapes for you? (y/n) ";
        cin >> repeat;
    }
    cout << "\nThanks for \"square\" dancing with me!" << endl;

    return 0;
}

