/*
    10.7 Mini Programming Project
    Luis Roldan
*/
#include <iostream>
#include <iomanip>
using namespace std;

    //Function Prototype 
void convert(double *);

int main(){
    double measurement;

    cout << "Enter a length in inches, and i will convert\n" << 
            "it to centimeters : ";
    cin >> measurement;
        //Function Call
    convert(&measurement);

    cout << fixed << showpoint << setprecision(4) <<    //formatting so that 4 decimals are shown, including zeros
            "Value in centimeters: " << measurement << endl;

    return 0;
}
    //Defining Function
void convert(double *m){
        //multiplying value stored in &measurment 
    *m *= 2.54;
}
