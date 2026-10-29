//Car.cpp is the Car class function implemention
#include "Car.h"
#include <string>
using namespace std;

Car::Car(){
    year = 9999;
    make = "unknown";
    speed = 0;
}
Car::Car(int y, string m){
    year = y;
    make = m;
    speed = 0;
}
void Car::setYear(int y){
    year = y;
}
void Car::setMake(string m){
    make = m;
}
void Car::setSpeed(int s){
    speed = s;
}
int Car::getYear(){
    return year;
}
string Car::getMake(){
    return make;
}
int Car::getSpeed(){
    return speed;
}
void Car::accelerate(){
    speed += 5;
}
void Car::brake(){
    speed -= 5;
}