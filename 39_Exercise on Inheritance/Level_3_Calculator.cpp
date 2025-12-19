#include <iostream>
#include <cmath>
#include <string>
// So this is basically my max knowledge till this point, date 9/29/24
// these all 3 levels of calculator took me 6 hours to think, modify and improve the code
// This code can be written so simpler and easier manner but, I am doing as question asked me to do 

using namespace std;

// SimpleCalculator Class
class SimpleCalculator {
protected:
    float result;

public:
    void input_numbers(float num_1, char oprtr, float num_2) {
        switch (oprtr) {
            case '+':
                result = num_1 + num_2;
                break;
            case '-':
                result = num_1 - num_2;
                break;
            case '*':
                result = num_1 * num_2;
                break;
            case '/':
                if (num_2 != 0) {
                    result = num_1 / num_2;
                } else {
                    cout << "Division by zero error!" << endl;
                    return;
                }
                break;
            default:
                cout << "Invalid Operator for Simple Calculator" << endl;
                return;
        }
    }

    void display_result() {
        cout << "Simple Calculator Result: " << result << endl;
    }
};

// ScientificCalculator Class
class ScientificCalculator {
protected:
    float result_Scientific;

public:
    void input_numbers(float num_1, string operation) {
        if (operation == "sin") {
            result_Scientific = sin(num_1 * M_PI / 180); // Sin in degrees
        } else if (operation == "cos") {
            result_Scientific = cos(num_1 * M_PI / 180); // Cos in degrees
        } else if (operation == "tan") {
            result_Scientific = tan(num_1 * M_PI / 180); // Tan in degrees
        } else if (operation == "log") {
            if (num_1 > 0)
                result_Scientific = log(num_1); // Natural log
            else {
                cout << "Logarithm of non-positive number is undefined!" << endl;
                return;
            }
        } else {
            cout << "Invalid Operation for Scientific Calculator!" << endl;
            return;
        }
    }

    void display_result_Scientific() {
        cout << "Scientific Calculator Result: " << result_Scientific << endl;
    }
};

// HybridCalculator Class - Multiple Inheritance
class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void calculate(float num_1, string operation, float num_2 = 0) {
        if (operation == "+" || operation == "-" || operation == "*" || operation == "/") {
            SimpleCalculator::input_numbers(num_1, operation[0], num_2); // First character of operation as it's a string
            SimpleCalculator::display_result();
        } else if (operation == "sin" || operation == "cos" || operation == "tan" || operation == "log") {
            ScientificCalculator::input_numbers(num_1, operation);
            ScientificCalculator::display_result_Scientific();
        } else {
            cout << "Invalid Operation!" << endl;
        }
    }
};

int main() {
    HybridCalculator hybrid;

    float num1, num2 = 0; // Yaha pe (num_2 = 0) lekin agar user ne simple calculator wale operator choose kiye toh user se (num_2) ki value bhi lege aur (num_2) overwrite hojeyga new value se 
    string operation;
    
    // Take first number as input
    cout << "Enter the first number: ";
    cin >> num1;

    // Take operation as input
    cout << "Choose an operation (+, -, *, /, sin, cos, tan, log): ";
    cin >> operation;

    // If the operation is arithmetic, we need a second number
    if (operation == "+" || operation == "-" || operation == "*" || operation == "/") {
        cout << "Enter the second number: ";
        cin >> num2;
    }

    // Perform the calculation based on the operation
    hybrid.calculate(num1, operation, num2);

    return 0;
}
