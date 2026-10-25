/*
8.9 Assugnment
Luis Roldan
*/
#include <iostream>
using namespace std;

// Write the avgArray() function prototype here.
double avgArray(int[], int);
// It should have a const array parameter.

int main() {
  const int SIZE= 10;
  int userNums[SIZE];
  cout << "Enter 10 integers: \n";
  for ( int count= 0; count< SIZE; count++) {
    cout << "#" << (count + 1) << " ";
    cin >> userNums[count];
  }
  cout << "The average of those numbers is ";
  cout << avgArray(userNums, SIZE) << endl;
  return 0;
}

// Write the avgArray() function here.
double avgArray(int arr[], int SIZE){
    double total = 0;
    for (int i = 0; i < SIZE; i++){
        total += arr[i];
    }
    return total / SIZE;
}
