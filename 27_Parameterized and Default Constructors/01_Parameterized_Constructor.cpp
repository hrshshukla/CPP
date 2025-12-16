#include <iostream>
/* Parameterized Constructor function Jo hote hai wo ARGUMENT leta hai ---> complex :: complex(int x, int y)
 * Ab arguments pass kaise kre is function ke andar : iske 2 
    > complex obj_1(5,6)
    > complex obj_2 = complex(5,6)
 
 */

using namespace std;


class complex{
     int a, b;

 public:
    complex(int x, int y); //----------> Parameterized Constructor ka declaration 
    void print_value(void){
        
        cout << "The value of A and B is : " << a << " and " << b << endl;
    }
    
};

complex :: complex(int x, int y){// -------> Parameterized Constructor ki definition
    a = x;
    b = y;
}

int main(){
    complex obj_1(5,6);//------>  Ye hai 1 tareeka PRAMETERRIZED CONSTRUCTOR me value pass krne ka
    obj_1.print_value(); // Output : 5 and 6
    
    complex obj_2 = complex(5,6);//---->  Ye hai 2 tareeka PRAMETERRIZED CONSTRUCTOR me value pass krne ka
    obj_1.print_value(); // Output : 5 and 6

    return 0;
}