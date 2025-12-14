#include <iostream>
// LEARNING : ( .at), ( .length)

#include <string>
using namespace std;

class binary {
    string sttring;

    public :
        void input(void);   // Aage is function ko modify krege....poora likehege
        void check_binary(void);  // Aage is function ko modify krege...poora likhege
        void shuffle_binary(void);
        void display_sttring (void);

};

// Input Function linked with class
void binary :: input(void){
    cout<<"Enter number :";
    cin>> sttring;
    }

// Output Function linked with class
void binary :: check_binary (void){
    for (int i = 0; i < sttring.length(); i++){     // Learning : ( .length)
   
        if (sttring.at(i)!='0' && sttring.at(i)!='1'){ // Learning : ( .at)
        
            cout << "It is not a Binary Number"  << endl;
            exit(0);// Agar ek bhi sttring binary nhi hui, poora int main() termiante hojeyga = program end
            }
          }
    cout << "It is a Binary Number" << endl;
} 

// Shuffle Function
void binary :: shuffle_binary (void){
    cout << "The shuffle value is :" << endl;
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
    object.display_sttring(); // shuffle krne se pehle sttring ki value 
    object.shuffle_binary();
    object.display_sttring(); // shuffle krne ke baad sttring ki value
    
    return 0;
}