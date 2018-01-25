/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am
*   Asks the user to enter in a card with a specific suit.
*   They will only enter the first initial of each card/suit.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string card;
    string input;

    cout << "Welcome!" << endl;
    cout << "Enter the Card Notation: ";
    cin >> input;
    cout << "You Entered: ";

    if(input.substr(0,1) == "Q")
        card = "Queen";
    else if(input.substr(0,1) == "J")
        card = "Jack";
    else if(input.substr(0,1) == "K")
        card = "King";
    else if(input.substr(0,1) == "A")
        card = "Ace";
    else
        card = input.substr(0,1);


    if(input.substr(1,1) == "D")
        card += " of Diamonds";
    else if(input.substr(1,1) == "H")
        card += " of Hearts";
    else if(input.substr(1,1) == "S")
        card += " of Spades";
    else if(input.substr(1,1) == "C")
        card += " of Clubs";

    cout << card << endl;

}
