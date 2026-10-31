/*
8.13 Mini Programming Project
Luis Roldan
*/

#include <iostream>
using namespace std;

class Yard {
    private : 
        int length, width; 
    public :
        Yard(){
            length = width = 0;
        }
        void setLength(int l){
            length  = l;
        }
        void setWidth(int w){
            width = w;
        }
        int getLength(){
            return length;
        }
        int getWidth(){
            return width;
        }
};
void setYardArray(Yard[],  int);
void printYardArray(Yard[], int);

int main (){
    const int NUM_YARDS = 10;
    Yard back[NUM_YARDS];
    
    setYardArray(back, NUM_YARDS);
    printYardArray(back, NUM_YARDS);

    return 0;

}
void setYardArray(Yard arr[], int SIZE){
    //taking in values for length and width of each object of Yard class
    int len,  wid;                              
    for(int i = 0; i < SIZE; i++){
            cout <<"Enter the length for Yard" << i +1 << ": ";            
            cin >> len;
            arr[i].setLength(len);
            cout << "Enter the width for Yard" << i +1 << ": ";
            cin >> wid;
            arr[i].setWidth(wid);
            cout << endl;
    }
}
void printYardArray(Yard arr[], int SIZE){
    //displaying each object's width and length
     for (int i =0; i < SIZE; i++){
        cout << "\n__Yard_" << (i +1) << "__" << endl << 
        "\nlength: " << arr[i].getLength() << endl <<
          "width:  " << arr[i].getWidth() << endl <<
        "__________" << endl;
    }
}