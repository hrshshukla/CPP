#include <iostream>
// What is classes in C++ ?
// DEFININATION : class is like a blueprint or design for creating objects. It defines what properties (attributes) and behaviors (methods) the objects created from it will have.
// Abhi hum seekhege ki class ke bahar se private data kaise access aur manage kre 
// LEARNING : (X = a) and (a = x) are different 

using namespace std;
class student
{
        int a, b, c;

    public:
        int d, e;
        void set_data(int x, int y, int z); // Ye function Class ke anadr declare krdia taki PRIVATE folder ko access kr sake  declare krdia aur baad me isko edit krege 
        void get_data(){
            cout << "The value of (a) (b) (c) is :" << a << b<< c<< endl;
        }  
}; 

        void student :: set_data(int x, int y, int z){ 
            // Private folder me jo (a, b, c) hai unki value = (x, y, z) karege
            // x = a; WRONG! (a) -> (x) me ajayega 
            a = x;
            b = y;
            c = z;
        }

int main(){

    student harsh; // Ab ye line (harsh) ki khud ki ek (class) bana degi (student harsh) ke naam se, jisme (student) ke sabhi feature hoge, humko bas harsh ka data dena hai aur wo (student harsh) me store hojatega 

    // For Private Folder
    harsh.set_data(5,10,15); // (student harsh) ke andar jo (set_data) naam ka function hai usko call kia 
    harsh.get_data(); 


    // For Public Folder 
    harsh.d = 20; // Ye public folder ka data hai isiliye direct acsess ya manage kr sakta hu
    harsh.e = 80;

    // Ab aisa lagega ki (harsh.d = 20) hoskata hai toh (harsh.a = 5) bhi hoskat hai, Par ye galat hai
    // Q ki (harsh.d) PUBLIC hai aur (harhs.a) PRIVATE hai

    return 0;
}