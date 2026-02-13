#include <iostream>
using namespace std;
// LEARNING : 
// ---------> (Default_value) 

template <class data_type, int size>// -----> yaha pe (typename) aur (class) yhai do keywords hai aur parameters jo ki use hote hai
class Complex {
public:
    data_type array[size];

    void set(){
        for (int i = 0; i< size; i++)
        {   
            array[i] = i; // arr[0] = 0, arr[1] = 1, arr[2] = 2, ...
        } 
    }

    int get(int index){
        return array[index];
    }

    int getSize(){
         return size; 
    }
};

int main() {
    Complex<int, 5> Obj;  // yaha se template ko do parameter pass horhe hai toh (data_type = int) hojayega aur ( int size = 5 )hojayega
    Obj.set();
    cout << "Element at index 0: " << Obj.get(1) << endl;
    cout << "Size of arrayay : " << Obj.getSize() << endl;

    return 0;
}


// Learning : default_value 

//     void return_something() {
//         if (false){}        ------> Agar ye (if) block nhi run hua means (if) block ki condition false hogyi hai toh ---> return data_type(); run hoga
//         return data_type(); ------> Ye ek (default_value) return karega means agar (data_type = int) hai toh (0) return karega 
//                             ------> aur agar (data_type = float) hai toh (0.0) return karega.
//     }