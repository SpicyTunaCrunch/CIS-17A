//Dice.h is the Dice class specification file
#ifndef DICE_H
#define DICE_H
#include <vector>
using namespace std;

//Dice class delcaration
class Dice{
    private :
        vector<int> dice;
        int SIZE;
    public :
        Dice();
        void roll100();
        void calculateRolls();
        void printDice();

};

#endif