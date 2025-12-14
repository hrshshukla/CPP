#include <iostream>
// What is object ?
// Jab ek class (class Car) ko use krke ek specific instance create karte hain, jaise ki(mycar), to wo instance (mycar) ek object hota hai
// jo Car class ke blueprint ko follow karta hai.

// What is Function, Method, Behaviour ?
// Fuction : Jo ek specific task perform kre 
// Methods : Jo FUNCTION (class) ke anadar hota hai us FUNCTION ko hum METHOD bolte hai
// Behaviour : Class ke Anadar jo Object hai (car) wo ky ky "Action" kregi jaise ki car ka (accelerate) krna aur (break) krna uska Behaviour hai 


using namespace std;

class Car {
public:

    string number; // Properties hai
    int speed;     // 

    // Methods
    void accelerate() {
        speed += 10;
        cout << number << " is accelerating. Current speed: " << speed << " km/h" << endl;
    }

    void brake() {
        speed -= 10;
        cout << number << " is braking. Current speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.number = "MP 19 5608"; // Car ke anadar jo (number) naam ka object hai uski value (MP 19 5608) kardo
    myCar.speed = 50;

    myCar.accelerate(); // Behavior: Accelerate
    myCar.brake();      // Behavior: Brake

    return 0;
}
