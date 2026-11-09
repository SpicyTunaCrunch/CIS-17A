/*
Coin.h is the Coin class Specfication file
*/
#ifndef COIN_H
#define COIN_H
#include <vector> 
using namespace std;

class Coin{
    private : 
        vector<int> coin;
        int SIZEE;
    public :
        Coin();
        void setTosz();
        void calcTosz();
        void displayTosz();
};

#endif