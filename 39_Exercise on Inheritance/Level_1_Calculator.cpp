#include <iostream>
#include <string>
#include <cmath>


using namespace std;

class simpleCalculator{
    protected:
        int result;
        
    public:
        int input_numbers(int num_1, char oprtr, int num_2){
                switch (oprtr)
                {
                    case '+':
                    result = (num_1+num_2);
                    break;

                    case '-':
                    result = (num_1-num_2) ;
                    break;
                    

                    case '*':
                    result = (num_1*num_2);
                    break;
                    

                    case '/':
                    result = (num_1/num_2);
                    break;
                    
                    default:
                    cout << "Invalid Input" << endl;
                    break;
                }
                return result;
        }
        
        void display_result(void){
            cout << "Result : " << result << endl;
        }
        
};

class scientificCalculator{
    protected:
        double result_Scientific;
     public:

                int factorial(int a_num){
                    if (a_num<=1)
                    {
                        return 1;
                    } 
                    return (a_num * factorial(a_num-1));
                }

        int input_numbers(int a_num, int oprtr){

                switch (oprtr)
                {
                    case 1:
                    result_Scientific = factorial(a_num);
                    break;

                    case 2:
                    result_Scientific = sin((a_num * 3.14 )/ 180);
                    break;

                    case 3:
                    result_Scientific = cos((a_num * 3.14 )/ 180);
                    break;

                    case 4:
                    result_Scientific = tan((a_num * 3.14 )/ 180);
                    break;

                    
                    default:
                    cout << "Invalid Input" << endl;
                    break;
                }
                return result_Scientific;
        }

          void display_result_Scientific(void){
            cout << "Result : " << result_Scientific << endl;
        }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator{};

int main(){
    cout << "Choose any one calculator: \n"
            <<"press (1) for Simple Calculator \n"
            <<"press (2) for Scientific Calculator \n"
            <<"press (3) for hybrid Calculator"<< endl;

    int choice;
    cin>>choice;

    if (choice==1)
    {
    
    int num_1, num_2;
    char oprtr;

    cout << "Enter Number 1" << "\t";
    cin>>num_1;

    cout << "Enter operator (+, -, *, /)" << "\t";
    cin>>oprtr;

    cout << "Enter Number 2" << "\t";
    cin>>num_2;


    simpleCalculator obj1;
    obj1.input_numbers(num_1, oprtr, num_2);
    obj1.display_result();
    }

    else if (choice==2)
    {
         int num_1;
         int oprtr;

        cout << "Enter Number : " << "\t";
        cin>>num_1;

        cout << "Choose anyone \n (1) factorial \n (2) sin \n (3) cos \n (4) tan \n";
        cin>>oprtr;


        scientificCalculator obj1;
        obj1.input_numbers(num_1, oprtr);
        obj1.display_result_Scientific();
    }
    
    else if (choice==3)
    {
        int num_1, num_2;
        char simple_oprtr;

        cout << "Enter Number 1" << "\t";
        cin>>num_1;

        cout << "Enter operator" << "\t";
        cin>>simple_oprtr;

        cout << "Enter Number 2" << "\t";
        cin>>num_2;


        simpleCalculator obj1;
        obj1.input_numbers(num_1, simple_oprtr, num_2);
        obj1.display_result();

        int num_3, sci_oprtr;
        cout << "Enter Number :" << "\t";
        cin>>num_3;

        cout << "Choose anyone (1) factorial \n (2) sin \n (3) cos \n (4) tan \n" << "\t";
        cin>>sci_oprtr;

        scientificCalculator obj2;
        obj2.input_numbers(num_3, sci_oprtr);
        obj2.display_result_Scientific();

    }
    
    return 0;
}