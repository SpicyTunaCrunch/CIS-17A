/*
7.10 Mini Programing Project B
Luis ROldan
*/
#include <iostream> 
#include <iomanip>
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

class Pizza{
    private:
        double price;
        Circle size;
    public:
        Pizza(){
            setPrice(5.00);
            size.setRadius(6);
        }
        Pizza(double p, double s){
            price = p;
            size.setRadius(s);
        }
        void setPrice(double p){
            price = p;
        }
        void setSize(double r){
            size.setRadius(r);
        }
        double costPerSqIn(){
            return price / size.calcArea();
        }
        double getPrice(){
            return price;
        }
        double getSize(){
            return size.calcDiameter();
        }
};

int main() {

 Pizza p1;
 Pizza p2(12.00, 5);

 cout << "Here's the default pizza: " << endl;
 cout << "Price: $" << fixed << setprecision(2) << p1.getPrice() << endl;
 cout << "Size: " << setprecision(0) << p1.getSize() << endl;
 cout << "Changing price to $10 now..." << endl;
 p1.setPrice(10.00);
 cout << "Price: $" << setprecision(2) << p1.getPrice() << endl << endl;

 cout << "Here's the parameter pizza with a price of $12 and a radius of 5 inches: " << endl;
 cout << "Price: $" << setprecision(2) << p2.getPrice() << endl;
 cout << "Size: " << setprecision(0) << p2.getSize() << endl;
 cout << "Changing the radius to 3 inches now..." << endl;
 p2.setSize(3);
 cout << "Size: " << p2.getSize() << endl;
 cout << "Cost Per Square Inch: $" << setprecision(2) << p2.costPerSqIn() << endl;

return 0;
}