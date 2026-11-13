/*
Practicing what I  learned with pointers  10.1 && 10.2
Luis Roldan
*/

#include <iostream>
using namespace std; 

int main () {

    //declaring variable num andassigning  its memory address location to numPtr 
    int num, *numPtr = &num;

    //assigning user input value to num
    cout << "num : ";
    cin >> num;
    //seeing what prints out with each call
    cout << "num : " << num << endl <<
            "&num : " << &num << endl <<
            "numPtr : " << numPtr << endl <<
            "*numPtr : " << *numPtr << endl << endl;

    //assigning a new value (1996) to num using its pointer
    *numPtr = 1996;
    cout << "Changing the value of num to 1996, while demoing that the memory location stays the same. \n" <<
            "num : " << num << endl <<
            "&num : " << &num << endl <<
            "numPtr : " << numPtr << endl <<
            "*numPtr : " << *numPtr << endl;


    return 0;
}