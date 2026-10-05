/*
7.10 Mini-Programming Project A
Luis Roldan
*/

#include <iostream> 
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        Circle(){
            radius = 1;
        }
        Circle ( double rad){
            radius = rad; 
        }
        void setRadius(double r){
            radius = r;
        }
        double calcArea(){
            return (radius * radius) * 3.1415;
        }
        double calcDiameter(){
            return 2 * radius;
        }
        double calcCircumference(){
            return 2 * 3.1415 * radius;
        }
        double getRadius(){
            return radius; 
        }
};

int main() {

 Circle obj1; // Default constructor
 Circle obj2(4); // Parameter constructor

 cout << "This is the default Circle object:" << endl;
 cout << "Current radius: " << obj1.getRadius() << endl;
 cout << "Changing to new radius  of 2 now..." << endl;
 obj1.setRadius(2);
 cout << "Current radius: " << obj1.getRadius() << endl << endl;

 cout << "This is the parameter Circle object with a redius set to 4:" << endl;
 cout << "Current radius: " << obj2.getRadius() << endl;
 cout << "Area: " << obj2.calcArea() << endl;
 cout << "Diameter: " << obj2.calcDiameter() << endl;
 cout << "Circumference: " << obj2.calcCircumference() << endl;
 
 return 0;
}