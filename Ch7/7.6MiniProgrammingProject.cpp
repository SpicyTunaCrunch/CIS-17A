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
        string getWord(){
                string letM = " ";
            switch (month){
                case 1: {   letM = "January"; break; }
                case 2: {   letM = "February"; break; }
                case 3: {   letM = "March"; break; }
                case 4: {   letM = "April"; break; }
                case 5: {   letM = "May"; break; }
                case 6: {   letM = "June"; break; }
                case 7: {   letM = "July"; break; }
                case 8: {   letM = "August"; break; }
                case 9: {   letM = "September"; break; }
                case 10:{   letM = "October"; break; }
                case 11:{   letM = "November"; break; }
                case 12:{   letM = "December"; break; }
                default:{   letM = "January"; break; }
            }
            return letM;
        }

};

int main (){
    //output 1
    Date disDate1;

    cout << "\nCreating an object using the default constructor.\n" << 
            "Recalling contents of object: " << disDate1.getMonth() << "/" << disDate1.getDay() << "/" << setfill('0') << 
                                            setw(2) << (disDate1.getYear() % 100) << endl << 
            "The default constructor works!\n" << 
            "The first accessor function works!\n\n";
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
            "The second accessor function works!\n" << 
            disDate3.getDay() << " " << disDate3.getWord() << " " << disDate3.getYear() << endl <<
            "The third accessor function works!\n\n";
    //output 4
    Date disDate4(77, 21, 1996);
    
    cout << "Testing the 3 parameter function with 77/15/16 which generates an error and causes the object to contain 1/1/01\n" <<
        "Recalling the contents of the object: " << disDate4.getMonth() << "/" << disDate4.getDay() << "/" << setfill('0') << setw(2) << ( disDate4.getYear() % 100 ) << endl <<            "See it works!\n\n";
    //output 5
    Date disDate5(11, -26, 2055);
    
    cout << "Testing the 3 parameter function with 11/-26/55 which generates an error and causes the object to contain 1/1/01\n" <<
            "Recalling the contents of the object: " << disDate5.getMonth() << "/" << disDate5.getDay() << "/" << setfill('0') << setw(2) << ( disDate5.getYear() % 100 ) << endl <<
            "See it works!\n\n";
    
    return 0;
}
