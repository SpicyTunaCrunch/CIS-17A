/*
6.14 Assignemnt
Luis Roldan
*/

#include <iostream>
using namespace std; 

void showVals(double, double);

int main (){ 
    double x = 1.2, y = 4.5;
    showVals(x, y);
    return 0;
}
void showVals(double n1, double n2){
    cout << n1 << endl;
    exit(0);
    cout << n2 << endl;
}