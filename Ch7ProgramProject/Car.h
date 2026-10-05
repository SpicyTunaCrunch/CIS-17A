//Car.h is the Car class specification file
#ifndef CAR_h
#define CAR_h
#include <string>
using namespace std;

//Car class declaration
class Car{
    private:
        int year;
        string make;
        int speed;
    public:
        Car();
        Car(int, string);
        void setYear(int);
        void setMake(string);
        void setSpeed(int);
        int getYear();
        int getSpeed();
        string getMake();
        void accelerate();
        void brake();

};

#endif