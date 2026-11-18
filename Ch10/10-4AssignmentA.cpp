 /*
 10.4 Assignment A
 Luis Roldan
 */

 #include <iostream>
 using namespace std;

 int main() {
    int x = 50, y = 60, z = 70;
    int *ptr = nullptr;

    cout << x << " " << y << " "  << z << " " << endl;

    ptr = &x;     //assigning ptr to the memory address of x         
    *ptr *=10;    //dereferences ptr address so that the *= opperator multiplies 10 to the value that is being held in the memory location 
    ptr = &y;     
    *ptr *= 5;   
    ptr = &z;
    *ptr *= 2;

    cout << x << " " << y << " " << z << " " << endl;

    return 0;

 }