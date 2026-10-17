/*
Chapter 8 Section 3 Mini Project
Luis Roldan
*/

#include <iostream>
using namespace std;

int main(){
    const int NUM_MEN = 10;
    int fish[10];
    cout << "Input the number of fish each fisherman caught\n";
    for (int i = 0; i < NUM_MEN; i++){
        cout << "How many fish did fisherman " << i + 1 << " catch?  ";
        cin >> fish[i];
    }
    for (int i = 0; i < NUM_MEN; i++){
        cout << "Fisherman " << i + 1 << " caught " << fish[i] << " fish."<< endl;
    }
    return 0;
}