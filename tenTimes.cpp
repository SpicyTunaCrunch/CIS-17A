 #include <iostream>
 using namespace std; 

 //prototype
 void tenTimes (int num);

 int main () 
 {
    int 
    num;
    cout << " Enter number\n";
    cin >> num;
    tenTimes(num);
    return 0;
 }

 void tenTimes (int num){
    cout << "Ten times " << num << " is  " << (10 * num) << ".\n";
 }