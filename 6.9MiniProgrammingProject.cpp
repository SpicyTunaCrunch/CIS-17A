// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Luis Roldan
#include <iostream>
#include <iomanip> //formating 
using namespace std;

// Function prototypes
void displayMenu();
int getChoice();
double kilos2lbs();
double lbs2kilos();

/*****     main     *****/
int main()
{
    cout << fixed << showpoint << setprecision(2);
    int choice;
    do {
        displayMenu();
        choice = getChoice();
        switch (choice){
        case 1 : 
            cout << "Pounds = " << kilos2lbs() << endl; break;
        case 2 : 
            cout << "Kilos = " << lbs2kilos() << endl; break;
        }

  }while (choice != 3);  

  cout << "Exiting Program\n";

   return 0;
}
void displayMenu(){
    cout << "               MENU\n\n" << 

            "   1. Convert kilograms to pounds\n" <<
            "   2. Convert pounds to kilograms\n" <<
            "   3. Quit\n";
}
int getChoice(){ 
    int c;
    cin >> c;
    while (c < 1 || c > 3){
        cout << "\n\nInvalid choice, please choose from the following options\n";
        displayMenu();
        cin >> c;
    }return c;
}
double kilos2lbs(){
    double k;
    double lbs; 
    cout << "Kilos --> Pounds\n" <<
            "How many kilos? ";
    cin >> k;
    lbs = k * 2.20462;
    return lbs;
}
double lbs2kilos(){
    double k;
    double lbs; 
    cout << "Pounds --> Kilos\n" <<
            "How many pounds? ";
    cin >> lbs;
    k = lbs / 2.20462;
    return k;
}
