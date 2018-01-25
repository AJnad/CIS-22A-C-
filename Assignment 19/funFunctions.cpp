/**
 *  Ajay Nadhavajhala
 *  CIS 22A 9:30-11:20 am M/W
 */

#include <iostream>
using namespace std;

//Given two int values, return their sum.
//Unless the two values are the same, then return double their sum.
int sumDouble(int a, int b)
{
    int sum;
    if (a != b)
        sum = a + b;
    else
        sum = (a + b) * 2;
    return sum;
}

//Given 2 ints, a and b, return true if one of them is 10
// or if their sum is 10.
bool makes10(int a, int b)
{
    int sum = a + b;
    if (a == 10 || b == 10)
        return true;
    else if (sum == 10)
        return true;
    else
        return false;
}

//We have two monkeys, a and b, and the parameters
//aSmile and bSmile indicate if each is smiling.
//We are in trouble if they are both smiling
//or if neither of them is smiling.
//Return true if we are in trouble.
bool monkeyTrouble(bool aSmile, bool bSmile)
{
    if(aSmile == true && bSmile == true)
        return true;
    else if (aSmile == false && bSmile == false)
        return true;
    else
        return false;
}

//Return true if the given non-negative number is a multiple of 3
//or a multiple of 5.
bool or35(int a)
{
    if(a % 5 == 0 || a % 3 == 0)
        return true;
    else
        return false;
}


//Given a string, return a new string where "not " has been added to the front.
//However, if the string already begins with "not", return the string unchanged.
string notString(string str)
{
    if (str.length() >= 3 && str.substr(0, 3) == "not")
    {
        return str;
    }
    return "not " + str;
}

//Given a string, return a new string where the first and last chars have been exchanged.
string frontBack(string str)
{
    if(str.length() <= 1)
        return str;

    string first(1, str[0]);
    string last ( 1,str[str.length() - 1]);

    return last + str.substr(1, str.length()-2) + first;
}

//We'll say that a number is "teen" if it is in the range 13..19 inclusive.
//Given 3 int values, return true if 1 or more of them is/are teen.
bool hasTeen(int num1, int num2, int num3)
{
    return ((num1 >= 13 && num1 <= 19) ||
            (num2 >= 13 && num2 <= 19) ||
            (num3 >= 13 && num3 <= 19));
}

int main()
{
    int result;
    bool answer;
    string value;
    cout << "***Testing sumDouble***"<< endl << endl;
    result = sumDouble(1, 2);
    cout << "Should print 3: " << result << endl;
    result = sumDouble(3, 2);
    cout << "Should print 5: " << result <<endl;
    result = sumDouble(2, 2);
    cout << "Should print 8: " << result << endl << endl;

    cout << "***Testing makes10***"<< endl << endl;
    answer = makes10(9, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = makes10(9, 9);
    cout << boolalpha << "Should be false: " << answer << endl;
    answer = makes10(1, 9);
    cout << boolalpha << "Should be true: " << answer << endl;

    cout << "***Testing monkeyTrouble***"<< endl << endl;
    answer = monkeyTrouble(true, true);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = monkeyTrouble(false, false);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = monkeyTrouble(true, false);
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***Testing or35***"<< endl << endl;
    answer = or35(3);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = or35(10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = or35(8);
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***notString***"<< endl << endl;
    value = notString("candy");
    cout << "Should be not candy: " << value << endl;
    value = notString("x");
    cout << "Should be not x: " << value << endl;
    value = notString("not bad");
    cout << "Should be not bac: " << value << endl << endl;

    cout << "***frontBack***"<< endl << endl;
    value = frontBack("code");
    cout << "Should be eodc: " << value << endl;
    value = frontBack("a");
    cout << "Should be a: " << value << endl;
    value = frontBack("ab");
    cout << "Should be ba: " << value << endl << endl;


    cout << "***Testing hasTeen***"<< endl << endl;
    answer = hasTeen(13, 20, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 19, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 13) ;
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 45) ;
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***End of Tests***" << endl;


    return 0;

}
