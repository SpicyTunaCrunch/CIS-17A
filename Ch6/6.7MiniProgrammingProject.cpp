/*
File: 6.7 Mini Programming Project
Author: Luis Roldan
*/

#include <iostream>
using namespace std;

//prototypes
long hms_to_secs(int hr, int min, int sec);

//main f(x)
int main(){
    int
    min, hr, sec;
    
    cout << "This program takes yout inputed hours, minutes and seconds and returns the total seconds\n"
            << "Input the following\nHour(s): ";
    cin >> hr;
    cout << "Minutes: ";
    cin >> min;
    cout << "Seconds: ";
    cin >> sec;

    cout << "Total Seconds: " << hms_to_secs(hr, min, sec);
    return 0;
}
long hms_to_secs(int hr, int min, int sec){
    sec += hr * 3600;
    sec += min * 60;
    return sec;
}