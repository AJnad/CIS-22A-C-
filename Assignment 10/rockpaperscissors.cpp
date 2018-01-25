/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 AM M/W
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string player1, player2, choice1, choice2;

    cout << "Let's play Rock-Paper-Scissors!" << endl;
    cout << "Player one, please enter your name: ";
    cin >> player1;
    cout << "Player two, please enter your name: ";
    cin >> player2;
    cout << "" << player1 << ", please enter \"Rock\", \"Paper\" or \"Scissors\": ";
    cin >> choice1;
    cout << "" << player2 << ", please enter \"Rock\", \"Paper\" or \"Scissors\": ";
    cin >> choice2;

    if(choice1 == "Rock" && choice2 == "Paper")
    {
        cout << "Paper beats Rock." << endl;
        cout << player2 << " wins!" << endl;
    }
    else if (choice1 == "Rock" && choice2 == "Rock")
        cout << "It's a tie!" << endl;

    else if (choice1 == "Rock" && choice2 == "Scissors")
    {
        cout << "Rock beats Scissors." << endl;
        cout << player1 << " wins!" << endl;
    }

    else if(choice1 == "Paper" && choice2 == "Scissors")
    {
        cout << "Scissors beats Paper." << endl;
        cout << player2 << " wins!" << endl;
    }
    else if (choice1 == "Paper" && choice2 == "Paper")
        cout << "It's a tie!" << endl;

    else if (choice1 == "Paper" && choice2 == "Rock")
    {
        cout << "Paper beats Rocks." << endl;
        cout << player1 << " wins!" << endl;
    }

    else if(choice1 == "Scissors" && choice2 == "Rock")
    {
        cout << "Rock beats Scissors." << endl;
        cout << player2 << " wins!" << endl;
    }
    else if (choice1 == "Scissors" && choice2 == "Scissors")
        cout << "It's a tie!" << endl;

    else if (choice1 == "Scissors" && choice2 == "Paper")
    {
        cout << "Scissors beats Paper." << endl;
        cout << player1 << " wins!" << endl;
    }
}
