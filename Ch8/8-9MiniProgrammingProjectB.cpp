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
    
    //Dipsplaying results for each number on die
    cout << "Displaying results for 100 dice rolls\n"
            "Quantity of Ones: " <<  numOnes(SIZE, results) << endl <<
            "Quantity of Twos: " << numTwos(SIZE, results) << endl << 
            "Quantity of Threes: " << numThrees(SIZE, results) << endl << 
            
    numFours(SIZE, results);
    numFives(SIZE, results);
    numSixes(SIZE, results);



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
int numOnes(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 1){
            count ++;
        }
    }
    return count; 
}
int numTwos(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 2){
            count ++;
        }
    }
    return count; 
}
int numThrees(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 3){
            count ++;
        }
    }
    return count; 
}
int numFours(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 4){
            count ++;
        }
    }
    return count; 
}
int numFives(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 5){
            count ++;
        }
    }
    return count; 
}
int numSixes(int SIZE, int arr[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 6){
            count ++;
        }
    }
    return count; 
}