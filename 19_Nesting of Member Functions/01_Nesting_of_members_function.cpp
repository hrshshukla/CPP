#include <iostream>
// Nesting of Members function mtlb ek method(function) ke andar doosra method(function)
// Example :
// void binary :: check_binary(void){  <---Function 1
//      shuffle_binary();              <---Function 2
//    }

// Benefit : * Now user will not have any headache to use (shuffle_binary) as it will automatically RUN with (check_binary)
//           * Also i can now make (shuffle_binary) a private folder and it will be still accessable bcoz (check_binary) which is inside class is using it.


#include <string>
using namespace std;

class binary {
    string sttring;
    void shuffle_binary(void); // <----------- Shuffle become PRIVATE now

    public :
        void input(void);    // Aage is function ko modify krege....poora likehege
        void check_binary(void);  // Aage is function ko modify krege...poora likhege
        void display_sttring (void);

};

// Input Function linked with class
void binary :: input(void){
    cout<<"Enter number :";
    cin>> sttring;
    }

// Output Function linked with class
void binary :: check_binary (void){
    shuffle_binary(); // <------------------------------------ ** Nesting Member Function **
    for (int i = 0; i < sttring.length(); i++){   
   
        if (sttring.at(i)!='0' && sttring.at(i)!='1'){ 
        
            cout << "It is not a Binary Number"  << endl;
            exit(0);
            }
          }
    cout << "It is a Binary Number" << endl;
} 

// Shuffle Function
void binary :: shuffle_binary (void){
    
        for (int i = 0; i < sttring.length(); i++){    
   
        if (sttring.at(i)=='0')
        { 
            sttring.at(i)= '1';
        }
        else
        {
            sttring.at(i)='0';
        }
       }
    }

// Display function 
void binary :: display_sttring (void){
        for (int i = 0; i < sttring.length(); i++){    
            cout << sttring.at(i);
       }
    }

int main(){
    binary object;

    object.input();
    object.check_binary();
//  object.shuffle_binary();  Inaccessable hogya q ki Ye ab PRIVATE folder me shift hogya 
    object.display_sttring(); 
    
    return 0;
}