#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "HARSH";
    
// Case (1)
    string result = input.substr(0, 3); // <--- substr(0, 3) se hum starting se 3 characters lenge
    
    cout << result << endl;  // Output: HAR


// Case (2)
    string result = input.substr(1, 3); //  <---- substr(1, 3) se hum index 1 se start karke 3 characters nikaalenge
    
    cout << result << endl;  // Output: ARS

    
    return 0;
}
