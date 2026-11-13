/*
Coin.cpp is the Coin class inplementation file
*/

#include "Coin.h"
#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

    //Default constructor ^.^    
Coin :: Coin() : SIZEE(100) , coin(SIZEE, 0) {
}
void Coin :: setTosz(){
        //setting random number seed using the current time 
    srand(static_cast<unsigned int>(time(0)));
        //assigning each elemnt of vector coin with a 0 
    for (int i = 0; i < SIZEE; i++){
            //generating random number , % 2  ->   i stores either 0 or 1
        coin[i] = (rand() % 2);
    }
}
void Coin :: calcTosz(){
        //heads = 0 , tails = 1
    int h = 0, t = 0;
    for (int i = 0; i < SIZEE; i++){
        if (coin[i] == 0){
            h++;
        } else {
            t++;
        }
    }
    cout << "Coin Toss Results\n" <<
            "Heads :: " << h << endl <<
            "tails :: " << t << endl;
}
void Coin :: displayTosz(){
    for (int i = 0; i < SIZEE; i++){
       if (coin[i] == 0){
        cout << "Heads ";
       } else {
        cout << "Tails ";
       }
        if ((i + 1)  % 10 == 0){        //columns of 10
            cout << endl;
        }   
    }
}