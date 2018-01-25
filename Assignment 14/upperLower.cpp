/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

int main ()
{

    string sentence, sentence2;
    string lowerCase, upperCase;

    cout << "Please enter a sentence: ";
    getline(cin, sentence);


    for(int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] >= 65 && sentence[i] <= 90)
        {
            sentence[i] += 32;
        }
        lowerCase += sentence[i];


        if (sentence[i] >= 97 && sentence[i] <= 122)
        {
            sentence[i] -= 32;
        }
        upperCase += sentence[i];
    }

    cout << "Your sentence in all lower case: " << lowerCase << endl;
    cout << "Your sentence in all capitals: " << upperCase;
    cout << endl;

}
