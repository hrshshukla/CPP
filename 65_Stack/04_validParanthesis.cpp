// -- isFull() condition will never happen

#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    string expression;    // string of expression given by user
    char *arrParenthesis; // stack of parenthesis using char array
    int size;
    int top;

    stack(string exp)
    {
        expression = exp;
        size = exp.length();
        arrParenthesis = new char[size];
        top = -1;
    }

    bool isEmpty()
    {
        return (top == -1); // if stack empty then return 1, else return 0;
    }

    void push(char currentLetter)
    {
        arrParenthesis[++top] = currentLetter; // ++top : pre increment
    }

    void pop(char currentLetter)
    {

        if ((currentLetter == ')' && arrParenthesis[top] == '(') ||
            (currentLetter == ']' && arrParenthesis[top] == '[') ||
            (currentLetter == '}' && arrParenthesis[top] == '{'))
        {
            --top; // successfull pop
        }
        else
        {
            cout << "Expression Unbalanced : ";
            return;
        }
    }

    int validParanthesis()
    {
        // Pushing and Poping values
        for (char currentLetter : expression)
        {
            if (currentLetter == '(' || currentLetter == '[' || currentLetter == '{')
            {
                push(currentLetter);
            }
            else if (currentLetter == ')' || currentLetter == ']' || currentLetter == '}')
            {
                if (isEmpty())return 0;

                pop(currentLetter);
            }
        }

        // if any parenthesis is left in stack then, invalid parenthesis
        return isEmpty(); // true = valid paranthesis, false = invalid parenthesis
    }

    // destructor
    ~stack()
    {
        delete[] arrParenthesis;
    }
};

int main()
{

    stack expOne("[(24)");

    expOne.validParanthesis() ? cout << "Valid Prarenthesis" : cout << "Invalid Prarenthesis";

    return 0;
}