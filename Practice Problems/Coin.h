/*Coin.h is the Coin class specifications
Luis Roldan
Just finished CIS 17A's Midterm 
This is my attempt to recreate my project to make sure i = understand
*/

#ifndef COIN_H
#define COIN_H
#include <vector>
#include <string>
using namespace std;

class Coin{
    private :
        vector <string> sides;
        int Size;
    public :
        Coin();
        Coin(int s);
        void tossCoin();
        void setSize();
        
        void calcTosz();
        void disTosz();
        string getSide();
        

};
#endif