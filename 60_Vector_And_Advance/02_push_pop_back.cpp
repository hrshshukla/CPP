#include <iostream>
#include <vector>
// Hum seekhge <vector> me elemnts ko add krne aur delet krne ka method.
// (1) push_back() -----> <vector> ke last me [ek element] create karega means agar tumne likha, push_back(4) toh (last_element = 4) hojayega.
// (2) pop_back()  -----> <vector> ke last [ek element] ko delet kardega means agar tumne likha, pop_back() toh (last_element = deleted).

// Benefit of Using pop_back() : we can add unlimited (elements) in a <vector> 

// Learning :
// ------> for (int num : number ); means (num) ke andar ek-ek krke (vector) ki har value dalo, means
// ------> 1st iteration me : (num = 5)
// ------> 2nd Iteration me : (num = 10)
// ------> 3rd Iteration me : (num = 15)
// Ye (for loop) kitne iteration run hoga ye (number of elemnts in vector) pe depend krta hai 
using namespace std;

int main() {
    vector<int> vectorr; // Step 1: Start with an empty vector

    // Step 2: Adding elements with push_back
    vectorr.push_back(5);  // Vector becomes: [5]
    vectorr.push_back(10); // Vector becomes: [5, 10]
    vectorr.push_back(15); // Vector becomes: [5, 10, 15]

    // Step 3: Displaying elements in the vector
    cout << "Vector elements: ";
    for (int num : vectorr) { // ---> (vectorr) ki har value (num) me update hogi in the starting of every iteration 
        cout << num << " ";
    }


    // Last ke element ko remove rahe hain
    vectorr.pop_back();   
     
    cout << "After pop_back: "; 
    for (int num : vectorr) {
        cout << num << " "; // Output : Vector after pop_back: [5, 10]
    }

    return 0;
}
