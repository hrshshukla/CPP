#include <iostream>
#include <vector>
// Way to create vector
// (1) Make sure to #include <vector>
// (2) Syntax : 
// -----> vector <type> (vectorName) (size);

// Some keywords :
// push_back(index) and pop_back();
// vector.at() = vector[0];
// vector.size()

using namespace std;

int main(){
// Ways to define vector
    vector<int> vector1; // <---- zero lenght vector
    vector<int> vector2(10); // <------ Vector of size (10);
    vector<int> vector4(6, 3); // Output : 3 3 3 3 3 3     Hence, vector.size = (6)
    vector<int> vector3(vector2); // <----- values inside (vector3) will be copied in (vector2)

// Using push_back() & pop_back();   + resize();  
    int element_value, size;  
    cout << "Enter : ";
    cin>>size;
    vector<int> vector5;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value of element " << i << " : ";
        cin>>element_value;
        vector5.push_back(element_value); // ------> Ye (push_back) ek element create kreag vector ke last me aur (last_element = element_value) kr dega .
    }                                      

    for (int i = 0; i < vector5.size(); i++)
    {
        cout << " Vector [" << i << "] "<< vector5[i] << endl;
    }
    
   return 0;
}