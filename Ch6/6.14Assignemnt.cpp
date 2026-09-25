/*
file: 6.15 The exit() function 
Luis Roldan
*/

#include <iostream>
using namespace std; 

int manip(int);
int manip(int, int);
int manip(int, double);

int main (){
    int x = 2, y = 4, z;
    double a = 3.1;

    z = manip(x)+ manip(x, y)+ manip(y, a);
    cout << z << endl;
    return 0;
}
int manip(int n1){
    return n1 + n1 * 2;
}
int manip(int n1, int n2){
    return (n1 + n2) * 2;
}
int manip(int n1, double n2){
    return n1 * static_cast<int>(n2);
}
