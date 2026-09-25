/*
Chapter 6 Programming Project
Luis Roldan
*/

#include <iostream> // input-output lib
#include <iomanip> //formating lib
using namespace std; //entity organizer

//prototype
double calculateCharge(double, double);

//main f(x)
int main (){
    char again = ' ';
    double 
    w, //Package weight
    d; //shipping distance
    do {
        cout << "Enter the weight of the packagein Kilos or 0 to exit: ";
        cin >> w;
        if (w == 0){
            break;  }
        cout << "Enter the distance the package will be shipped in miles: ";
        cin >> d;
        cout << "Shipping Charge: $" << calculateCharge(w, d) << endl;
    } while (w != 0);
    cout << "\n See you later Aligator! :)";
    return 0;
}
//defining function
double calculateCharge( double w, double d){
    cout << fixed << showpoint << setprecision(2);
    int c = 0;
    for (int i = 0; d >= 500; i++){
        d-=500;
        c++;
    }
    if (d > 0){     //Make sure any remaining values that arent above 500 miles are counted as a trip 
        c++;
    }
    if (w <= 2){
        return 3.1 * c;
    } else if (w <= 6){
        return 4.2 * c;
    } else if (w <=10){
        return 5.3 * c;
    } else {
        return 6.4 * c;
    }
}