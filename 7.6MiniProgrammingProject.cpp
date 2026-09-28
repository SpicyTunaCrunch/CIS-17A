/*
7.6 Mini Programming Project: Create class that outputs the following, should not ask user for any inputs
Luis Roldan

            expected outputs
Creating an object using the default constructor.
Recalling the contents of the object: 1/1/01
The default constructor works!
The first accessor function works!

Creating an object using a 3 parameter constructor containing the date of 3/15/16
Recalling the contents of the object: 3/15/16
The 3 parameter constructor works!

Testing the other accessor functions
March 15, 2016
The second accessor function works!
15 March 2016
The third accessor function works!

Testing the 3 parameter function with 13/15/16 which generates an error and causes the object to contain 1/1/01
Recalling the contents of the object: 1/1/01
See it works!
*/
#include <iostream> 
#include <iomanip>
using namespace std; 

class Date
{   private:
        int month,day, year;   
    public:
        Date (){
            month = 1;
            day = 1;
            year = 2001;
        }
        Date(int m, int d, int y){
            if ( (m >= 1 && m <= 12) && (d >= 1 && d <= 31) && (y >= 0 && y <= 9999) ){
                month = m;
                day = d;
                year = y;
            } else {
                month = 1;
                day = 1;
                year = 2001;
            }
        }
        int getMonth(){
            return month;   }
        int getDay(){
            return day; }
        int getYear(){
            return year;    }
        void output1();
        void output2();
        void output3();
        void output4();
};

int main (){

    Date disdate1;
    disdate1.output1();
    Date disdate2(3, 15, 1996);
    disdate2.output2();
    return 0;
}
void Date::output1(){
    cout << "Recalling contents of object: " << month << "/" << day<< "/" << setfill('0') << setw(2) << ( year % 100 ) << endl;

}
void Date::output2(){ 
    cout << "Recalling contents of object: " << month << "/" << day<< "/" << setfill('0') << setw(2) << ( year % 100 ) << endl;
}
void Date::output3(){
    
}
void Date::output4(){}