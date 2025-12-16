#include <iostream>
#include <cmath>
// <cmath> q ki mathematical language usi hogi
// Question : Ek aisa Parameterized Constructor Function jo input le 2 values (int x, int y) mtlb X axis aur Y axis
// Aur us constructor ke andar jo command ho wo X axis aur Y axis ka distance nikal le

using namespace std;

class Points
{
    int x, y;

public:
    Points(int num_1, int num_2){
        x = num_1;
        y = num_2;
    }

    friend Points calculate_distance(Points obj_1, Points obj_2);

};

Points calculate_distance(Points coordinate_1, Points coordinate_2){
    float distance = sqrt(pow(coordinate_2.x - coordinate_1.x, 2) + pow(coordinate_2.y - coordinate_1.y, 2));
    cout << "Distance is = " << distance << endl;
}

int main(){

    Points coordinate_1(2,2);
    Points coordinate_2(3,8);

    calculate_distance(coordinate_1,coordinate_2);
    
    return 0;
}