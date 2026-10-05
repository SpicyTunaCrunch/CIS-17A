//Circle.cpp is the circle class function implementation
#include "Circle.h"

Circle::Circle() {      
    radius = 1;
}

Circle::Circle(double rad){
    radius = rad;
}
void Circle::setRadius(double r){
    radius = r;
}
double Circle::calcArea(){
    return (radius * radius) * 3.1415;
}
double Circle::calcDiameter(){
    return (2 * radius );
}
double Circle::calcCircumference(){
    return 2 * 3.1415 * radius;
}
double Circle::getRadius(){
    return radius;
}