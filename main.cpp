/* ch04 ex07
5- Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt
the user to enter three arguments: two double values and a character to
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
program output should be The sum of 35.6 and 24.1 is 59.7.

7- Modify the “mini calculator” from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out.
*/
#include <iostream>
#include "./Calculation.h"
#include "./Calculation.cpp"

using namespace std;

int main()
{
    cout << "This program performs an arithmetic calculation with two single digit numbers." << endl;

    char ch;
    int op1;
    int op2;
    char op1String[10];
    char op2String[10];
    int temp;

    char input[100];
    Calculation cal('*', 0, 0);

    do {
        try {
        cout << "Enter one of the operators + - * / followed by two single digit numbers or their english names in lowercase: ";
        fgets(input, 100, stdin);
        if (sscanf(input, "%c %d %d", &ch, &op1, &op2) == 3)
            cal.setAll(ch, op1, op2);
        else if (sscanf(input, "%c %d %s", &ch, &op1, op2String) == 3)
            cal.setAll(ch, op1, op2String);
        else if (sscanf(input, "%c %s %d", &ch, op1String, &op2) == 3)
            cal.setAll(ch, op1String, op2);
        else if (sscanf(input, "%c %s %s", &ch, op1String, op2String) == 3)
            cal.setAll(ch, op1String, op2String);
        else
            cout << "Invalid input. Correct input ex: * eight 4, - seven two, / 6 3" << endl;

        } catch (const char* e) {
            cerr << e << endl;
            exit(-1);
        }
        
    } while (ch != '+' && ch != '-' && ch != '*' && ch != '/');

    cal.printOperation();

}
