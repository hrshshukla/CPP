#include <iostream>
// LEARNING :   exit(0)

using namespace std;

int main(){
    string sttring;
    cin>>sttring;

        for (int i = 0; i < sttring.length(); i++){
        if (sttring.at(i)!='0' && sttring.at(i)!='1'){ 
        
            cout << "It is not a Binary Number"  << endl;
            exit(0); // Ye poore program ko terminate kar dega seedha int main() function hi end kr dega

        }
        else
        {
            cout << "It is a Binary Number"  << endl;
            exit(0);
        }
        }
    return 0;
}