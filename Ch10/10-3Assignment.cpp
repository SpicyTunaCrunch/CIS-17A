/*
10.3 Assignment
Luis Roldan
*/

#include <iostream>
using namespace std;

int main() {
    
    const int SIZE = 100;
    int array[SIZE], *arrPtr = array;

    for (int x = 0; x < SIZE; x++){
        cout <<  *(arrPtr + x) << endl;
    }

    return 0;
}