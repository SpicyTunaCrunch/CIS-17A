// This fortune telling program will be modified to use a void function
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// WRITE A PROTOTYPE FOR THE tellFortune FUNCTION HERE.
void tellFuture(int numYears, int numChildren);

/*****     main     *****/
int main()
{
  int numYears,
      numChildren;
          
  cout << "This program can tell your future. \n"
        << "Enter two integers separated by a space: ";
        
  cin >> numYears >> numChildren;
   
    tellFuture(numYears, numChildren);
    return 0;
}
/*****     tellFortune     *****/
// WRITE THE tellFortune FUNCTION HEADER HERE.
void tellFuture(int numYears, int numChildren)
// WRITE THE BODY OF THE tellFortune FUNCTION HERE.
{
    int y, c;
    y = abs(numYears) % 5;       // Convert to a positive integer 0 to 4
    c = abs(numChildren) % 6;   //Convert  tp a postive integer 0 to 5
    
    cout <<  "\nYou will be married in " << y << " years "
        << "and will have " << c << " children.\n";
}
