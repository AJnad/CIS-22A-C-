/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <iostream>
using namespace std;

int vowels(string line)
{
    int vowelCount = 0;
    for(int i = 0; i < line.length(); i++)
    {
        if(line[i] == 'a' || line[i] == 'A' || line[i] == 'e'|| line[i] == 'E'||
           line[i] == 'i' || line[i] == 'I' || line[i] == 'o' || line[i] == 'O'
           || line[i] == 'u' || line[i] == 'U' )
        {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main()
{
    string sentence;

    cout << "Welcome! Give me a sentence and I will count its vowels" << endl;
    cout << "Please enter a sentence: ";

    cin >> ws;
    getline(cin, sentence);

    cout << "There are " << vowels(sentence) << " vowels in your sentence." << endl;
}
