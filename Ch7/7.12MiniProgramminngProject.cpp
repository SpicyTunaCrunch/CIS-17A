/*
7.12 MiniProgramming Project 
Luis Roldan
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Account
{
    string accNumber;
    double  accBalance,
            intRate,
            monthlyAvg;
    Account()
    {
        accNumber = "unknown";
        accBalance =  intRate = monthlyAvg = 0.00;
    }
};

int main(){
    cout << fixed << showpoint << setprecision(2);
    cout << "\nAssembling Account Structure\n\n";
    
    Account emply1; //employee 1 w/ custom values
    emply1.accNumber = "ACZ42137";
    emply1.accBalance = 4512.59;
    emply1.intRate = 0.04; // 4%
    emply1.monthlyAvg = 4215.07;

    cout << "Account Number: " << emply1.accNumber << endl <<
         "Account Balance: $ " << emply1.accBalance << endl <<
         "Interest Rate: " << noshowpoint << defaultfloat << emply1.intRate * 100 << " %" << endl << 
         "Avarage Monthly Balance: $ " << fixed << showpoint << setprecision(2) << emply1.monthlyAvg << endl << endl << endl;

    Account dflt1; //default construcor


    cout << "Account Number: " << dflt1.accNumber << endl <<
         "Account Balance: $ " << dflt1.accBalance << endl <<
         "Interest Rate: " << noshowpoint << defaultfloat << dflt1.intRate * 100 << " %" << endl <<  
         "Avarage Monthly Balance: $ " << fixed << showpoint << setprecision(2) << dflt1.monthlyAvg << endl;

    return 0;
}
