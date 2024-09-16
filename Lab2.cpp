//Owen Zhao
//Lecture 2
//09/16/24

#include <iostream>

using namespace std;

int main()
{
    //Creating Variables
    int myNum = 6;
    float myFloat = 1.68;
    double myDouble = 6.58;
    char myChar = 'A';
    bool myBool = false;
    string myString = "Chicken";

    //Print Variable Values
    cout << "int: " << myNum << endl;
    cout << "float: " << myFloat << endl;
    cout << "double: " << myDouble << endl;
    cout << "char: " << myChar << endl;
    cout << "bool: " << myBool << endl;
    cout << "string: " << myString << endl << endl;

    //Comparing Characters
    char Char1 = 'A';
    char Char2 = 'B';

    //Creating Variables for Arithmetic Expressions
    double Expression1 = 2 + 3.5;
    double Expression2 = 6 / 4 + 3.9;
    double Expression3 = 5.4 * 2 - (13.6 + 18 / 2);

    //Printing Expression and Answers
    cout << "2 + 3.5 = " << Expression1 << endl;
    cout << "6 / 4 + 3.9 = " << Expression2 << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << Expression3;

    return 0;
}