/*
8.7 Mini Programming Project 
Jars of Salsa
Luis Roldan
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
    const int SIZE = 5;
    string type[SIZE] {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    //int sold[SIZE]; 
    for (int i = 0; i < SIZE; i++){
        cout << type[i] << endl;
    }
    return 0;
}