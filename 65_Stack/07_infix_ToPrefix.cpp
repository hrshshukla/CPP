// Infix to Prefix is easy, 
// STEP (1) : Copy-Paste infixToPostfix code and do these 3 changes :
// CHANGE 1: reverse(infixExp.begin(), infixExp.end());
// CHANGE 2: ">=" instead of ">" in : else if (precedence(infixExp[i]) > precedence(operatorStack->stackTop()))
// CHANGE 3: reverse(postfixExp.begin(), postfixExp.end());


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class stack
{
public:
    char operators[20]; 
    int top = -1;

    bool isEmpty()
    {
        return (top == -1); 
    }

    char stackTop(){
        if (isEmpty()) return '\0';
        return operators[top];
    }

    void push(char value){
        operators[++top]= value; 
    }

    char pop(){
        return operators[top--]; 
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

    reverse(infixExp.begin(), infixExp.end());
    for (int i = 0; i < infixExp.size();) 
    {
        if(!isOperator(infixExp[i])){ 
            postfixExp += infixExp[i]; 
            i++; 
        }
        else if (precedence(infixExp[i]) > precedence(operatorStack->stackTop())) 
        { 
            operatorStack->push(infixExp[i]); 
            i++;
        }
        else
        {
            
            postfixExp += operatorStack->pop(); 
        }
    }

    
    while (!operatorStack->isEmpty())
    {
        postfixExp += operatorStack->pop();
    }

    reverse(postfixExp.begin(), postfixExp.end()); // After reversing the final postfix we get prefix
    string prefix = postfixExp; // Now the postfix became = prefix 
    return prefix;
}

int main()
{

    string infixExp = "x-y/z-k*d";
    cout << infixToPostfix(infixExp);

    return 0;
}