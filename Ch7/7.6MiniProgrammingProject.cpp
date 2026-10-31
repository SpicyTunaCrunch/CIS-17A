/*
7.6 Mini Programming Project: Create class that outputs the following, should not ask user for any inputs
Luis Roldan
*/
#include <iostream> 
#include <iomanip>
#include <string>
using namespace std; 

class Date
{   private:
        int month, day, year; 
        string wordMonth;
    public:
        Date (){
            month = 1;
            day = 1;
            year = 2001;
        }
        Date(int m, int d, int y){
            int lastDay;
            if ( m == 2 ){
                lastDay = 28;
            }
            else if (m == 4 || m == 6 || m  == 9 || m == 11){
                lastDay = 30;
            }
            else {
                lastDay = 31;
            }
            if (d >= 1 && d <= lastDay){
                month = m;
                day = d;
                year = y;
            } 
            else {
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
        string getWord(){
            switch (month){
                case 1: {   wordMonth = "January"; break; }
                case 2: {   wordMonth = "February"; break; }
                case 3: {   wordMonth = "March"; break; }
                case 4: {   wordMonth = "April"; break; }
                case 5: {   wordMonth = "May"; break; }
                case 6: {   wordMonth = "June"; break; }
                case 7: {   wordMonth = "July"; break; }
                case 8: {   wordMonth = "August"; break; }
                case 9: {   wordMonth = "September"; break; }
                case 10:{   wordMonth = "October"; break; }
                case 11:{   wordMonth = "November"; break; }
                case 12:{   wordMonth = "December"; break; }
                default:{   wordMonth = "January"; break; }
            }
            return wordMonth;
        }
        void prntInts(){ // digits.. ex 1/1/01
            cout << month << "/" << day << "/" << (year % 100 )<< endl;
        }
        void prntMDY(){ //Month Day, Year
            getWord();
            cout << wordMonth << " " << day << ", " << year << endl;
        }
        void prntDMY(){ //Day Month Year
            getWord();
            cout << day << " " << wordMonth << " " << year << endl << endl;
        }
        

};

int main (){
    //output 1
    Date disDate1;

    cout << "\nCreating an object using the default constructor.\n" << 
            "Recalling contents of object: " << disDate1.getMonth() << "/" << disDate1.getDay() << "/" << setfill('0') << 
                                            setw(2) << (disDate1.getYear() % 100) << endl << 
            "The default constructor works!\n" << 
            "The accessor function works!\n\n";
    //putput 2
    Date disDate2(11, 01, 1996);

    cout << "Creating an object using a 3 parameter constructor containing the date of 11/01/96\n" << 
            "Recalling contents of object: "  << disDate2.getMonth() << "/" << disDate2.getDay() << "/" << setfill('0') << 
                                            setw(2) << (disDate2.getYear() % 100) << endl << 
            "The 3 perameter constructor works!\n\n"; 
    //output 3
    Date disDate3(7, 16, 2003);
    cout << "Testing the other accessor functions \n" << 
            disDate3.getWord() << " " << disDate3.getDay() << ", " << disDate3.getYear() << endl <<
            "The accessor function works!\n" << 
            disDate3.getDay() << " " << disDate3.getWord() << " " << disDate3.getYear() << endl <<
            "The accessor function works!\n\n";
            
    //output 4
    Date disDate4(4, 31, 1996);
    
    cout << "Testing the 3 parameter function with 4/31/16 which generates an error and causes the object to contain 1/1/01\n" <<
        "Recalling the contents of the object: " << disDate4.getMonth() << "/" << disDate4.getDay() << "/" << setfill('0') << setw(2) << ( disDate4.getYear() % 100 ) << endl <<            "See it works!\n\n";
    //output 5
    Date disDate5(11, 37, 2055);
    
    cout << "Testing the 3 parameter function with 11/37/55 which generates an error and causes the object to contain 1/1/01\n" <<
            "Recalling the contents of the object: " << disDate5.getMonth() << "/" << disDate5.getDay() << "/" << setfill('0') << setw(2) << ( disDate5.getYear() % 100 ) << endl <<
            "See it works!\n\n";
            
        //output 5
    Date disDate6(3, 15, 2016);
    cout << "Testing the other accessor functions with 3 different formatting functions for 3/15/16\n"; 
            disDate6.prntInts();
            disDate6.prntMDY();
            disDate6.prntDMY();
    cout << "YIPPPY ! It works!!\n";
    
    return 0;
}
