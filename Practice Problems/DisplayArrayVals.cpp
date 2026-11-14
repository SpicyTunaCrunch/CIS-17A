/*
Goal: Use a pointer to display every element in an array
Luis Roldan
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    //setting random seed
    srand(static_cast<unsigned int>(time(0)));
    //creating array
    const int SIZE(10);
    int num[SIZE], *ptr(num);
    //filling array with random nummbers 1- 100
    for (int i =0; i < SIZE; i++){
        num[i] = (rand() % 100) + 1; 
    }
            /*  1. Displaying array values */
    //creating array (Size infered) and a pointer referencing num[0]
    
    //using the pointer to print out all of num[] subscripts
    for (int i = 0; i < SIZE; i++){
        cout << *ptr ;
        if (i < SIZE - 1){  //OBO:) ==  OFF BY ONE:)
            cout << " ";
            //moving pointer up to next subscript in num[]
            ptr++;
        }
        
        
    }
    //demoing pointer stays in last value (if i use 1 < 3 -> for loop instead, current value wopuld have been 30)
    cout << endl << "Pointer's current place: " << *ptr << endl;

            /*  2.  Displaying array backwards  */
    //using the pointer, left @ last num[9], to print out all of num{} subscripts backwads
    for (int i = 0; i< SIZE; i++){
        cout << *ptr;
        if (i < SIZE - 1) { //OBO:)
            cout << " ";
            //moving pointer down to previous subscript in num[]
            ptr--;
        }
    }
    //demoing pointer stays in last value (if i use 1 < 3 -> for loop instead, current value wopuld have been 30)
    cout << endl << "Pointer's current place: " << *ptr << endl;

        /*  3.Summing all array elements    */
    //using pointer that is back at num[0] to add up the  num[] subscripts
    short ttl = 0;
    for (int i = 0; i < SIZE; i++){
        ttl += *ptr;
        if (i < SIZE - 1){  //OBO:)
            //moving pointer up thru array
            ptr++;
        }
    }
    
    //displaying total
    cout << "Total of all values in num[SIZE]: " << ttl << endl;

        /*  4. Finding the large num in array   */
    //resetting pointer to num[0]
    ptr = num;
    int lrg = *ptr;
    for (int i = 0; i < SIZE; i++){
        if (*ptr > lrg){
            lrg = *ptr;
        }
         if (i < SIZE - 1){ //OBO
            ptr++;
         }
    }
    //printing out largest number
    cout << "The largest number was " << lrg << endl;
        /*  5.  Counting Evvens and odds  */
        
        //trying something out, trying to put them into arrays
        //and adjusts to how many nums odds and eves for each
        //each and then using a pointer to read through those 
        
    //resetting poiner to num[0]
    ptr = num;

    short od(0), ev(0); 
    //counting how many odds and hoe many even
    for(int i = 0; i < SIZE; i++){
        if (*ptr % 2 == 0){
            ev++;
            ptr++;
        }else {
            od++;
            ptr++;
        }
    }
    short eVenz[SIZE], oDDs[SIZE], 
          *EvenPtr = eVenz, *OddsPtr = oDDs; 
    
    //resetting pointer
    ptr = num;
    
    //putting numbers into correct array
    for (int i = 0; i < SIZE; i++){
        if (*ptr % 2 == 0){
            *EvenPtr = *ptr;
            ptr++; 
            EvenPtr++;
        }else {
            *OddsPtr = *ptr;
            ptr++;
            OddsPtr++;
        }
    }

    //reseting pointers
    EvenPtr = eVenz;
    OddsPtr = oDDs;

    cout  << "# of even: " << ev << endl <<
             "# of odd:  " << od << endl <<
             "Even #'s in num[]: ";
    for (int i = 0; i < ev; i++){
        cout << *EvenPtr;
        if (i < ev - 1){
            cout << " ";
            EvenPtr++;
        }
    }
    cout << endl <<
            " Odd #'s in num[]: ";
    for (int i = 0; i < od; i++){
        cout << *OddsPtr;
        if (i < od - 1){
            cout << " ";
            OddsPtr++;
        }
    }
    cout << endl;


        /*  6.  Calculaing avarage  */
    cout << "The avarage of all the #'s is: " << fixed << setprecision(2) << static_cast<float> (ttl) / SIZE << endl;
    

        /*  7.  Smallest Even Number in num[]    */
    //resetting Even ptr
    EvenPtr = eVenz;

    short large = *EvenPtr,
          small = *EvenPtr; 
    for(int i = 0; i < ev; i++){
        if (*EvenPtr < small){
            small = *EvenPtr;
        }
        if (*EvenPtr > large){
            large = *EvenPtr;
        }
        EvenPtr++;
    }
    cout << "The smallest even # was: " << small << endl <<
            "The largest even # was : " << large << endl;

    return 0;
}