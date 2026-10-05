//Rectangle.cpp is the Rectagle class function implementation file.
#include "Rectangle.h"

/*******************************************************************
 *                      Rectangle:: setLength                      *                                
 * if the argument passed to the setLength function is zero or     *
 * greater, it is copied into the member variable length, and true *
 * is returned. If the argument is negative, the value of length   *
 * remains unchanged and flase is returned.                        *
 *******************************************************************/
bool Rectangle::setLength(double len){
    bool validData= true;
    if (len >= 0 ){             // If the len is valid
        length = len;           // copy it to length
    }   else {
        validData = false;      // else leave length unchaged
    }
    return validData;
}

/******************************************************************
*                       Rectagnle::setwidth                       *
* If the argument passed to the setWidth function is zero or      *
* greater, it is copied into the member variable width, and true  *
* is returned. If the argument is negative, the value of length   *
* remains unchanged and flase is returned.                        *
*******************************************************************/
 bool Rectangle::setWidth(double w){
    bool validData = true;
    if (w >= 0){                // If the len is valid
        width = w;              // copy it to length
    }   else {
        validData = false;      // else leave width unchanged 
    }
    return validData;
 }

/************************************************************
*                       Rectagnle::getLength                *
* This function returns the value in member varable length. *
*************************************************************/
double Rectangle::getLength(){
    return length;
}

/************************************************************
*                       Rectagnle::getWidth                 *
* This function returns the value in member varable Width.  *
*************************************************************/
double Rectangle::getWidth(){
    return width;
}

/*****************************************************************
*                       Rectagnle::getArea                       *
* This function calcualtes and returns the area of the rectangle *
******************************************************************/
double Rectangle::getArea(){
    return length * width;
}