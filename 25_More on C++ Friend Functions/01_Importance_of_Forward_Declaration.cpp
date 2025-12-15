#include <iostream>
// Forward declaration hum pehle bhi use kr chuke hai jisme hum pehle DECLARATION dete hai phir DEFINITION dete hai
// Ab usi ka ek simple sa example dekhege 
using namespace std;

class Y;// Declaration

class X{
    int a;

public :
    void input_value(int num_1){
        a=num_1;
    }
    friend int sum_XY(X obj_1, Y obj_2); // Agar declare nhi krte toh compiler bolta, Ye (Y) ky hai 
};

class Y{ // Definition
    int a;

public :
    void input_value(int num_1){
        a=num_1;
    }
    friend int sum_XY(X obj_1, Y obj_2);

};

int sum_XY(X obj_1, Y obj_2){
    return obj_1.a + obj_2.a;
}

int main(){
    X obj_x;
    obj_x.input_value(3);

    Y obj_y;
    obj_y.input_value(5);

    int total = sum_XY(obj_x,obj_y);
    cout << "Total :" << total << endl;
    return 0;
}