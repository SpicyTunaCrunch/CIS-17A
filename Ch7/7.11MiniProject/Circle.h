// Circle.h is the Circle class specificaition file
#ifndef CIRCLE_H
#define CIRCLE_H

//Circle class declaration
class Circle{
    private:
        double radius;
    public: 
        Circle ();
        Circle (double);
        void setRadius(double);
        double calcArea();
        double calcDiameter();
        double calcCircumference();
        double getRadius();
};
#endif