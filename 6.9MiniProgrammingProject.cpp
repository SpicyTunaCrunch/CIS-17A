// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Luis Roldan
#include <iostream>
#include <iomanip> //formating 
using namespace std;

// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice,
// kilosToPounds and poundsToKilos FUNCTIONS HERE.
void displayMenu();
int getChoice(int);

/*****     main     *****/
int main()
{
   // DECLARE ANY VARIABLES MAIN USES HERE.
   
   // WRITE THE CODE HERE TO CARRY OUT THE STEPS
   // REQUIRED BY THE PROGRAM SPECIFICATIONS.
     
   return 0;
}
void displayMenu(){
    cout << "               MENU\n\n";

    cout << "   1. Convert kilograms to pounds\n" <<
            "   2. Convert pounds to kilograms\n" <<
            "   3. Quit\n";
}

/*****     getChoice     *****/
int getChoice(int c){
    int c;
    cin >> c;
    while (c < 1 || c > 3){
        system("cls");  //screen clear
        cout << "Invalid choice, please choose from the following options\n";
        displayMenu();
        cin >> c;
    }return c;
}

/*****     kilosToPounds     *****/
// WRITE THE kilosToPounds FUNCTION HERE.
// IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF POUNDS.

/*****    poundsToKilos     *****/
// WRITE THE poundsToKilos FUNCTION HERE.
// IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF KILOS.
