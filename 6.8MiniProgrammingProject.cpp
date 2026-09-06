/*
File: 6.8 Mini-Programing Project
Author: Luis Roldan
*/

#include <iostream> 
using namespace std;

//prototypes
bool divByTen(int);

//Main f(x)
int main(){
    int 
    n;

    cout << "Input a number to see if it is divisible by 10\n" <<
    "Number: ";
    cin >> n;

    if ( divByTen(n)){
        cout << "User's number is divisible 10\n";
    } else {
        cout << "User's number is NOT divisible by 10\n";
    }
    return 0;
}

bool divByTen(int n){
    bool status = false;
    if (n % 10 == 0){
        status = true;
    }
    return status;
}