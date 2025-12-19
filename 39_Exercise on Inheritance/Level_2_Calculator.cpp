#include <iostream>
#include <cmath>
// This calculator is better becoz ye koi choice nhi deta, Ye dono calculators ko run kr deta hai 
// Par mujhe isse behtar chiye, jo sirf ek ko run, aur ye decision wo kis base pe lega ki, kon sa wo ek calculator hai jo run hoga
// Wo operator ke base pe ye decision lega, aur input bhi usi hisab se q ki, simple calculator me (num_1, oprtr, num_2) chiye hoga 
// Jabki scientific calculator me (num_1 , oprtr) bas chiye hoga 

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
                cout << "Invalid Operator" << endl;
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
    void input_numbers(float num_1, int choice) {
        switch (choice) {
            case 1:
                result_Scientific = sin(num_1 * M_PI / 180); // Sin in degrees
                break;
            case 2:
                result_Scientific = cos(num_1 * M_PI / 180); // Cos in degrees
                break;
            case 3:
                result_Scientific = tan(num_1 * M_PI / 180); // Tan in degrees
                break;
            case 4:
                result_Scientific = log(num_1); // Natural log
                break;
            default:
                cout << "Invalid choice for scientific operation!" << endl;
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
    void input_simple(float num_1, char oprtr, float num_2) {
        SimpleCalculator::input_numbers(num_1, oprtr, num_2);
    }

    void input_scientific(float num_1, int choice) {
        ScientificCalculator::input_numbers(num_1, choice);
    }

    void display_results() {
        SimpleCalculator::display_result();
        ScientificCalculator::display_result_Scientific();
    }
};

int main() {
    HybridCalculator hybrid;

    // Simple Calculator
    float num1, num2;
    char oper;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter second number: ";
    cin >> num2;
    hybrid.input_simple(num1, oper, num2);  
    hybrid.display_result();

    // Scientific Calculator
    int sci_choice;
    cout << "\nEnter a number for scientific operations: ";
    cin >> num1;
    cout << "Choose an operation by typing :\n (1) for Sin\n (2) for Cos\n (3) for Tan\n (4) for Log\n";
    cin >> sci_choice;
    hybrid.input_scientific(num1, sci_choice);  // Explicitly call the scientific calculator
    hybrid.display_result_Scientific();

    return 0;
}
