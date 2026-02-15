#include <iostream>
#include <string>
#include <unistd.h> // sleep(1) = 1 second
#include <windows.h> // Sleep(1000) = 1 second 


using namespace std;
void checkAlphabet(string input_string){
    for (int letter = 0; letter < input_string.length(); letter++)
    {
        // Ye sirf capital letters ke liye hai 
        if (input_string[letter] >= 'A' && input_string[letter] <= 'Z') {
            
            for (char ch = 'A'; ch <= input_string[letter]; ch++) {
                cout << input_string.substr(0, letter) << ch << endl;
                Sleep(100); // delay (0.1) sec
            }
            cout << endl;
        } 

        // Ye sirf small letters ke liye hai 
        else if (input_string[letter] >= 'a' && input_string[letter] <= 'z') {
            
            for (char ch = 'a'; ch <= input_string[letter]; ch++) {
                cout << input_string.substr(0, letter) << ch << endl;
                Sleep(100); // delay (0.1) sec
            }
            cout << endl;
        }    
    }
 }

int main(){
    string input;
    cout << "ENTER  : " ;
    cin>>input;

    checkAlphabet(input);

    return 0;
}
