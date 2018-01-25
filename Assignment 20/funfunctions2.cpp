/**
 *  Ajay Nadhavajhala
 *  CIS 22A 9:30-11:20 am M/Ws
 */

#include <iostream>
using namespace std;

bool is10DigitPhone(string phone_number)
{
    int count = 0;
    for (int i = 0; i < phone_number.length(); i++)
    {
        count++;
    }
    if (count == 10)
        return true;
    else
        return false;
}
//Given a string, which contains a phone number
//Return true if the string is 10 characters long
//Return false if the string is more or less than 10 characters long


bool isLetter(char letter)
{
    if (((int) letter >= 65 && (int) letter <= 90) || ((int) letter >= 97 && (int) letter <= 122))
        return true;
    else
        return false;
}
//Given a char, uses ASCII to determine if it is a letter
//Returns true if is a letter (a-z or A-Z)
//Returns false if it is not a letter


bool isNumber(char num)
{
    if ((int) num >= 48 && (int) num <= 57)
        return true;
    else
        return false;
}
//Given a char, uses ASCII to determine if it is a number
//Returns true if is a number (0-9)
//Returns false if it is not a number


void capitalize(char& letter)
{
    if (((int) letter >= 65 && (int) letter <= 90) || ((int) letter >= 97 && (int) letter <= 122))
    {
        if((int) letter >= 97 && (int) letter <= 122)
        {
            int ascii = (int)letter;
            ascii -= 32;
            letter = (char)ascii;
            cout << letter;
        }
        else
            cout << letter;
    }
}
//Given a char that is a valid letter (a-z or A-Z)
//Capitalizes the letter if it is a lower case,
//Leaves the letter unaltered if it is an upperCase

void spaceToComma(string& list)
{
    for(int i = 0; i < list.length(); i++)
    {
        if(list[i] == ' ')
            list[i] = ',';
    }

}
//Given a string, alters any blank spaces in the string
//to be commas. Hint: Use a for loop, and string indexing

int main()
{
    int result;
    bool answer;
    string value;
    cout << "***is10DigitPhone***"<< endl << endl;
    answer = is10DigitPhone("123456789212121");
    cout << "Should print false: " << boolalpha << false << endl;
    answer = is10DigitPhone("2");
    cout << "Should print false: " << answer <<endl;
    answer = is10DigitPhone("1111111111");
    cout << "Should print true: " << answer << endl << endl;

    cout << "***Testing isLetter***"<< endl << endl;
    answer = isLetter('d');
    cout << "Should be true: " << answer << endl;
    answer = isLetter('D');
    cout << "Should be true: " << answer << endl;
    answer = isLetter('!');
    cout << "Should be false: " << false << endl;

    cout << "***Testing isNumber***"<< endl << endl;
    answer = isNumber('a');
    cout << "Should be false: " << answer << endl;
    answer = isNumber('9');
    cout << "Should be true: " << answer << endl << endl;

    cout << "***Testing capitalize***"<< endl << endl;
    char lower = 'a';
    capitalize(lower);
    cout << "Should print A: " << lower << endl;
    char upper = 'A';
    capitalize(upper);
    cout << "Should print A: " << upper << endl << endl;

    cout << "***Testing spaceToComma***"<< endl << endl;
    string list = "cats hats bats";
    spaceToComma(list);
    cout << "Should be cats,hats,bats: " << list << endl;
    list = "I love cookies! ";
    spaceToComma(list);
    cout << "Should be I,love,cookies!,: " << list << endl << endl;

    cout << "***End of Tests***" << endl;

    return 0;

}
