/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
#include <iostream>
using namespace std;

int main()
{
    string phrase;
    ifstream fin;
    ofstream fout;

    fin.open("phrases.txt");
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    fout.open("password.txt");
    if (fout.fail())
    {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    fout << "The passwords are: " << endl;
    while(getline(fin, phrase))
    {
        for(int i = 0; i < phrase.length(); i++)
        {
            if (phrase[i] == ' ')
                phrase.erase(i, 1);
            else if(phrase[i] == 'a' || phrase [i] == 'A')
                phrase[i] = '@';
            else if (phrase[i] == 'e' || phrase[i] == 'E')
                phrase[i] ='3';
            else if (phrase[i] == 'o' || phrase[i] == 'O')
                phrase[i] = '0';
            else if (phrase[i] == 'i' || phrase[i] == 'I')
                phrase[i] = '!';
            else if (phrase[i] == 'u' || phrase[i] == 'U')
                phrase[i] = '^';
        }
        fout << phrase << endl;
    }

}
