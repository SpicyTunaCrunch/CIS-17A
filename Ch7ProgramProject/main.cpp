/*
Luis Roldan
*/

#include <iostream>
#include "Car.h"
#include <string>
using namespace std;

int main(){
    Car car1(2019, "Toyota");
    
    //accelerating 5 times
    for (int i = 0; i < 5; i++){
        cout << "\nAccelerating!\n";
        car1.accelerate();
        cout << "Current Speed: " << car1.getSpeed();
    }
    cout << endl;
    //decelerating 5 times
    for (int i = 5; i > 0; i--){
        cout << "\nBreaking!\n";
        car1.brake();
        cout << "Curent Speed: " << car1.getSpeed();
    }
    cout << endl << endl;
    //accessor function test
    cout << "Testing accessor functions!\n" <<
            "Car Info\n" <<
            "Year: " << car1.getYear() << endl <<
            "Make: " << car1.getMake() << endl << endl;
            
            return 0;
}