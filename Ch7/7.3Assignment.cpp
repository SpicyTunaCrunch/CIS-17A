/*
7.3 Assignment
     Completing code skeleton to delcare a class called Date. 
     The class should contain member variables and functions to store and retrieve the member variables 
     month, day, and year components of a date.
     The function that store data should be called storeDate() and should have the parameters of M, D, Y.
     The function showDate() should output to the screen the member variables month, day, and year.
Luis Roldan
*/

#include <iostream>
using namespace std;

class Date {
  private :
  int Month, Day, Year;
  public :
  void storeDate(int M, int D, int Y){
    Month = M;
    Day = D;
    Year = Y;
  }
  void showDate(){
    cout << Month << " " << Day << " " << Year <<endl;
  }

};