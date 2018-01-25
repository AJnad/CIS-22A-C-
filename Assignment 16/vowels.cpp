/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

int countVowels(string s)
{
    int vowelCount = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e'|| s[i] == 'E'||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O'
                || s[i] == 'u' || s[i] == 'U' )
        {
            vowelCount++;
        }
    }
    return vowelCount;

}

int countLetters(string s)
{
    int letterCount = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            letterCount++;
    }
    return letterCount;
}


int main()
{
    string sentence;
    int numVowels;
    int numLetters;

    while(sentence != "q" && sentence != "Q" && sentence != "quit" && sentence != "Quit")
    {
        cout << "Enter a sentence or q to quit: ";
        getline(cin, sentence);
        if(sentence == "q" || sentence == "Q" || sentence == "quit" || sentence == "Quit")
            break;
        numVowels = countVowels(sentence);
        numLetters = countLetters(sentence);
        cout << "\nThere are " << numVowels << " vowels in your sentence, and " << numLetters << " letters.\n" << endl;
    }
    cout << "\nGoodbye!\n";
}
