//Dice.cpp is the Dice class function implementation
#include "Dice.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;
    //Default constructor , all values = 0
Dice::Dice() : SIZE(100), dice(SIZE,0){
}
void Dice::roll100(){
    //rollls dice 100 times and records roll in vector member object
    srand(static_cast<unsigned int>(time(0)));  
    for(int i=0; i< SIZE; i++){
        dice[i] = (rand()  % 6) + 1;
    }
}
void Dice::calculateRolls(){
    //tallies up the results for each number 
    int one, two, three, four, five, six; 
    one = two = three = four = five = six = 0;
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 1){
        one ++; 
        }   
    }
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 2){
        two ++; 
        }   
    }
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 3){
        three ++; 
        }   
    }
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 4){
        four ++; 
        }   
    }
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 5){
        five ++; 
        }   
    }
    for (int i = 0; i < SIZE; i++){
        if (dice[i] == 6){
        six ++; 
        }   
    }
        //Displaying resutls for each number
    cout << " Talling up results\n" <<
            "Quantity of 1's rolled: " << one << endl <<  
            "Quantity of 2's rolled: " << two << endl <<              
            "Quantity of 3's rolled: " << three << endl <<              
            "Quantity of 4's rolled: " << four << endl <<              
            "Quantity of 5's rolled: " << five << endl <<              
            "Quantity of 6's rolled: " << six << endl;
}
void Dice::printDice(){
    cout << "\nPrinting each roll"<< endl <<
            "--------------------:" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << dice[i] << " ";
        if ((i +1) % 10 == 0) {         //prints out 10 
                                        //elements p/ line
            cout << ":" << endl;    
        }
    }
    cout << "--------------------:" << endl; 
}