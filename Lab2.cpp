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
    bool Compare2 = Char1 > Char2;

    //Compare and Print the Characters
    cout << "Character 1 is A and Character 2 is B. Is Character 1 greater than Character 2? True = 1 False = 0    Answer: " << Compare2 << endl << endl;

    //Creating Variables for Arithmetic Expressions
    double Expression1 = 2 + 3.5;
    double Thing1 = 6 / 4;
    double Thing2 = 3.9;
    double Expression2 = Thing1 + Thing2;
    double Thing3 = 18 / 2;
    double Thing4 = 5.4 * 2;
    double Thing5 = 13.6 + Thing3;
    double Expression3 = Thing4 - Thing5;

    //Printing Expression and Answers
    cout << "2 + 3.5 = " << Expression1 << endl;
    cout << "6 / 4 + 3.9 = " << Expression2 << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << Expression3;

    return 0;
}

/*Output:
int: 6
float: 1.68
double: 6.58
char: A
bool: 0
string: Chicken

Character 1 is A and Character 2 is B. Is Character 1 greater than Character 2? True = 1 False = 0    Answer: 0

2 + 3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8*/