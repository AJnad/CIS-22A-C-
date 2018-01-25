/**
*   Ajay Nadhavajhala
*   CIS 22A 9:30-11:20 am M/W
*/

#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
#include <iostream>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;

    fin.open("infile.txt");
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    fout.open("outfile.txt");
    if (fout.fail())
    {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    fout << "Animals at our farm" << endl;

    int first;
    fin >> first;
    int second;
    fin >> second;
    int third;
    fin >> third;
    int fourth;
    fin >> fourth;
    int fifth;
    fin >> fifth;

    fout << first << " chickens" << endl;
    fout << second << " cows" << endl;
    fout << third << " ducks" << endl;
    fout << fourth << " horses" << endl;
    fout << fifth << " pigs" << endl;

    fin.close();
    fout.close();

    return 0;
}
