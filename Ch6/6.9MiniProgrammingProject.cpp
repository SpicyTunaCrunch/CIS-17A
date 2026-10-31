// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Luis Roldan
#include <iostream>
#include <iomanip> //formating 
using namespace std;

// Function prototypes
void displayMenu();
int getChoice();
double kilos2lbs(double);
double lbs2kilos(double);

/*****     main     *****/
int main()
{
    cout << fixed << showpoint << setprecision(2);
    int choice;
    double weight;
    do {
        displayMenu();
        choice = getChoice();
        switch (choice){
        case 1 : 
            cout << "Kilos --> Pounds\n" <<
            "How many kilos? ";
            cin >> weight;
            cout << "Pounds = "<< kilos2lbs(weight) << endl;
            break;
        case 2 :
            cout << "Pounds --> Kilos\n" <<
            "How many pounds? ";
            cin >> weight;
            cout << "Kilos = " << lbs2kilos(weight) << endl;
            break;
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
double kilos2lbs(double w){
    double k;
    k = w * 2.2;
    return k;
}
double lbs2kilos(double w){
    double k;
    k = w / 2.2;
    return k;
}
