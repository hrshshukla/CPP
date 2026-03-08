// There will be 1 Main Stack:
// -- operatorArr, this will store operators in the expression, and do push() and pop()

// -- isFull() condition will never happen

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class stack
{
public:
    char operators[20]; // mostly  (+, -, /, *) = 4 operators are used but 20 will be a good size 
    int top = -1;

    bool isEmpty()
    {
        return (top == -1); // if stack empty then return 1, else return 0;
    }

    char stackTop(){
        if (isEmpty()) return '\0';
        return operators[top];
    }

    void push(char value){
        operators[++top]= value; // ++top : pre increment
    }

    char pop(){
        return operators[top--]; // update top to 2nd last value
    }

};


int isOperator(char currentLetter){
    if (currentLetter == '+' || currentLetter == '-' || currentLetter =='*' || currentLetter =='/' )
    {
        return 1;
    }
    return 0;
}

int precedence(char currentLetter){
    if (currentLetter == '*' || currentLetter == '/') return 3;

    else if (currentLetter == '+' || currentLetter == '-') return 2;

    return 0;
}

string infixToPostfix(string infixExp){
    stack *operatorStack = new stack;
    string postfixExp;


    for (int i = 0; i < infixExp.size();) 
    {
        if(!isOperator(infixExp[i])){ // if letter is not operator then,
            postfixExp += infixExp[i]; // push in the postfixExpression
            i++; // move to the next letter of infixExp
        }
        else if (precedence(infixExp[i]) > precedence(operatorStack->stackTop())) // if current operator have more precedence than stack operator then, 
        { 
            operatorStack->push(infixExp[i]); // push the operator in the operatorStack
            i++;
        }
        else
        {
            // if current operator have less precedence than stack operator then, 
            postfixExp += operatorStack->pop(); // pop the stack operator and add into postfixExpression 
        }
    }

    // After scanning whole expression pop() the remaining operators in the stack
    while (!operatorStack->isEmpty())
    {
        postfixExp += operatorStack->pop();
    }

    return postfixExp;
}

int main()
{

    string infixExp = "x-y/z-k*d";
    cout << infixToPostfix(infixExp);

    return 0;
}