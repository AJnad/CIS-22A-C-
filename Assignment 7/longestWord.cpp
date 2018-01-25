/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am
*   Takes the longest word in the English dictionary and prints
*   some statistics about the word
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string longest_word = "pseudopseudohypoparathyroidism";
    cout << "The length of pseudopseudohypoparathyroidism is " << longest_word.length() << " letters." << endl;

    cout << longest_word.substr(20,7) << endl; // thyroid
    cout << longest_word.substr(0,6) << endl; // pseudo
    cout << longest_word.substr(4,2) << endl; // do
    cout << longest_word.substr(12,4) << endl; // hypo
}
