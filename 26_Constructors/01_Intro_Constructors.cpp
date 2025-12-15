#include <iostream>
/* What are Constructors ?
 * Ye ek SPECIAL function hote hai jo Automatic invoke mtlb run hote hai = inko call nhi kroge toh bhi RUN hojayege
 * Inko CLASS > PUBLIC Section ke andar hi declare krte hai, PRIVATE me nhi krte 
 * Inko INITALIZE krne ke liye CLASS ka hi naam use krte hai
 * Ye CLASS ke object ko intialze  krne me bhi use hote hai
 * Ye koi RETURN value nhi dete mtlb kind of VOID function hote hai, Bas jo inke andar likh doge wo CHAL jayega itna hi 
 * Is function ke agruments DEFAULT hote hai                                                                                                     */

using namespace std;

class complex{
     int a, b;

 public:
    complex(void); // Constructor ka declaration (class_name)+(void) YE ek DEFAULT CONSTRUCTOR

    void print_value(void){
        
        cout << "The value of A and B is : " << a << " and " << b << endl;
    }
    
};

complex :: complex(void){
    a = 10;
    b = 20;
}

int main(){
    complex obj_1;
    obj_1.print_value(); // Output : 10 and 20
    
    return 0;
}