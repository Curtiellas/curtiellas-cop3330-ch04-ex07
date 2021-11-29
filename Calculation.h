/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 luis curtiellas
 */
#ifndef INTEGER_H
#define INTEGER_H

class Calculation {
    char op;
    int operand1;
    int operand2;
    double result;

    public:
    /* constructor */
    Calculation(char op, int operand1, int operand2);           //both integers
    /* setters */
    int setAll(char op, int operand1, int operand2);            //both integers
    int setAll(char op, char operand1[10], char operand2[10]);  //both strings
    int setAll(char op, int operand1, char operand2[10]);       //integer and string
    int setAll(char op, char operand1[10], int operand2);       //string and integer
    /* helpers */
    double calculateResult();
    int stringToInteger(char num[10]);
    /* getters */
    char getOp();
    int getOperand1();
    int getOperand2();
    int getOperand1(char num[10]);
    int getOperand2(char num[10]);
    double getResult();
    /* output */
    int printOperation();
};
#endif