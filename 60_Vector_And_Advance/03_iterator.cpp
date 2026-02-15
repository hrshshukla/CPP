#include <iostream>
#include <vector>

// <Vector> ke beech me agar hume koi naya element add krna hai toh hum use krte hai (iterators) ka
// iterators : iterators pointer ki tarah kaam krte hai, hum <vector> ke kisi bhi ek element pe inko point kar sakte hai with the help of iterator.

// Synatx vector <int> :: iterator (name) = vecTor.begin() <--- ya ---> vecTor.end() 

using namespace std;

    void printValue(vector<int> Vvector){
        for (int i = 0; i < Vvector.size(); i++)
        {
          cout<< " |" <<Vvector[i] << "| "; 
        }
        cout << endl;
    }

int main(){
    vector <int> vecTor;
    int size = 0;
    cout << "Enter Size "; cin>>size;
    
// Setting the value of vector 
    for(int i = 0; i < size; i++)
    {
        cout << "Enter Value of element " << i << " : ";
        int element_value; 
        cin>>element_value;
        vecTor.push_back(element_value);
    }

    printValue(vecTor); // Output : 1 2 3 4 


// Creating Iterator : Ye iterator manually value ko {vector} ke kisi bhi {index} me {element} ko add kr sakta hai
    vector<int> :: iterator Iter = vecTor.begin(); // begin() ----> ka mtlb {iterator} ko {first element} pe point krwa rahe hai  
//     vecTor.insert(Iter, 456); // ----> vecTor[0] = 456
//     printValue(vecTor);       // Output : 456 1 2 3 4

// // Iter+1
//     vecTor.insert(Iter+1, 456); // ----> vecTor[1] = 456
//     printValue(vecTor);       // Output : 1 456 2 3 4
    

// Iter()
    vecTor.insert(Iter+1, 5, 456); // ----> vecTor[1] to vecTor[5] = 456
    printValue(vecTor);       // Output : 1 456 456 456 456 456 2 3 4

    return 0;
}