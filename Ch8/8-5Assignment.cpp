/*
8.5 Assignemnt
Luis Roldan
Change the following code's for loop to a range-based for loop 
double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0};
const double INT_RATE = 0.1;

cout << fixed << showpoint << setprecision(2);
for (int count = 0; count < 5; count++)
  cout << (balance[count] * INT_RATE) << endl ;
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0};
    const double INT_RATE = 0.1;

    cout << fixed << showpoint << setprecision(2);
    for ( double count : balance){
        cout << (count * INT_RATE) << endl;
    }

    return 0;
}