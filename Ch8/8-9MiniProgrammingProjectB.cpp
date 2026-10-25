/*
8.9 Mini-Programming Project B
Luis Roldan
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototypes
void rollDie(int, int[]);
int numOnes(int, int[]);
int numTwos(int, int[]);
int numThrees(int, int[]);
int numFours(int, int[]);
int numFive(int, int[]);
int numSixes(int, int[]);

int main (){
    //Random seed using cuttent time
    srand(static_cast<unsigned int>(time(0)));

    const int SIZE = 100;
    int results[SIZE];

    rollDie( SIZE, results);

}
void rollDie(int SIZE, int arr[]){
    //rolling dice and filling array 
    for (int i =0; i < SIZE; i++){
        arr[i] = (rand() % 6) +1; 
    }
/*   //making sure dice rolls and fills array
    for (int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }
*/
}