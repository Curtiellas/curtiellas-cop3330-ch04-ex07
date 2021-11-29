#include "Calculation.h"

#include <string.h>
#include <iostream>

using namespace std;

/* constructor */
Calculation::Calculation(char op, int operand1, int operand2)
{
    this->op = op;
    this->operand1 = operand1;
    this->operand2 = operand2;

    result = calculateResult();
}

/* setters */
int Calculation::setAll(char op, int operand1, int operand2)
{
    this->op = op;
    this->operand1 = operand1;
    this->operand2 = operand2;

    result = calculateResult();
}

/* setters */
int Calculation::setAll(char op, char operand1[10], char operand2[10])
{
    this->op = op;
    this->operand1 = stringToInteger(operand1);
    this->operand2 = stringToInteger(operand2);

    result = calculateResult();
}

/* setters */
int Calculation::setAll(char op, int operand1, char operand2[10])
{
    this->op = op;
    this->operand1 = operand1;
    this->operand2 = stringToInteger(operand2);

    result = calculateResult();
}

/* setters */
int Calculation::setAll(char op, char operand1[10], int operand2)
{
    this->op = op;
    this->operand1 = stringToInteger(operand1);
    this->operand2 = operand2;

    result = calculateResult();
}

/* helper */
double Calculation::calculateResult() {
    if (op == '+')
        return operand1 + operand2;
    else if (op == '-')
        return operand1 - operand2;
    else if (op == '*')
        return operand1 * operand2;
    else if (op == '/') {
        if (operand2 == 0)
            throw "!! You tried to divide by zero !!";
        
        return operand1 / operand2;
    }
}

/* helper */
int Calculation::stringToInteger(char num[10])
{
    if (strcmp("zero", num) == 0)
        return 0;
    else if (strcmp("one", num) == 0)
        return 1;
    else if (strcmp("two", num) == 0)
        return 2;
    else if (strcmp("three", num) == 0)
        return 3;
    else if (strcmp("four", num) == 0)
        return 4;
    else if (strcmp("five", num) == 0)
        return 5;
    else if (strcmp("six", num) == 0)
        return 6;
    else if (strcmp("seven", num) == 0)
        return 7;
    else if (strcmp("eight", num) == 0)
        return 8;
    else if (strcmp("nine", num) == 0)
        return 9;
    
    else
        throw "!! Your number's name was not recognized. It was misspelled, used uppercase, or was greater than 9 !!";
    
}

/* getters */
char Calculation::getOp()
{
    return op;
}
int Calculation::getOperand1()
{
    return operand1;
}
int Calculation::getOperand2()
{
    return operand2;
}

double Calculation::getResult()
{
    return result;
}

/* print result */
int Calculation::printOperation()
{
    cout << getOperand1() << " " << getOp() << " " << getOperand2() << " = " << getResult() << endl;
}