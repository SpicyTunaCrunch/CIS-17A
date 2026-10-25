/*
8.7 Mini Programming Project 
Jars of Salsa
Luis Roldan
*/

#include <iostream>
#include <string>
using namespace std;

//prototype
void hello();
void askRepeat(int, int[], string[]);
void counting(int, int[], string[]);


int main (){
    const int SIZE = 5;
    string type[SIZE] {"mild", "medium", "sweet", "hot", "zesty"};
    int sold[SIZE]; 
    
    hello();
    askRepeat(SIZE, sold, type);
    counting(SIZE, sold, type);
    return 0;
}
//repeating the input 
void askRepeat(int SIZE, int sold[], string type[]){
    cout << "**********************************************************" << endl;
     for (int i = 0; i < SIZE; i++){
        cout << "\nHow many " << type[i] << " salas were sold?: " << endl; 
        cin >> sold[i];
    }
    cout << endl << "**********************************************************" <<  endl;

    for (int i = 0; i < SIZE; i++){
        cout << "The total sales for " << type[i] << ":  " << sold[i] << endl;
    }
    cout << "**********************************************************" << endl;
}
//finind the highest and lowest
void counting(int SIZE, int sold[], string type[]){
    int least = 0,
        most = 0,
        total = 0;
    for (int i = 0; i < SIZE; i++){
        //total
        total += sold[i];
        //least
        if (sold[i] < sold[least]){
            least = i;
        }
        //most
        if (sold[i] > sold[most]){
            most = i;
        }
    }
    cout << "\nThe highest selling is: " << type[most] << " salsa\n" <<
            "The lowest selling is: " << type[least] << " salsa\n" <<
            "Total sales: " << total  << " jars of salsa" << endl <<
            "**********************************************************\n";
}
void hello(){
    cout << "**********************************************************\n" <<
            "*                      Welcome                           *\n" <<
            "* This program takes in how many of each salsa was sold. *\n";


}