/*
7.6 Assignment B
Luis Roldan
            Correct the code:
Class Moon;
{
   private;
      double earthWeight;
      double moonWeight;
   Public;
      moonWeight(double ew);      //Constructor
         {earthWeight = ew; moonWeight = earthWeight / 6;}
      double getMoonWeight();
         {return moonWeight; }
}

int main() {
   double earth;

   cout >> "What is your weight? ";
   cin << earth;
   
   Moon lunar(earth);

   cout << "on the moon you would weight " << lunar::getMoonWeight() << endl;

   return 0;
}
*/

#include <iostream>
using namespace std;

class Moon                    //Class -> class , removed ;
{  private:
      double earthWeight;
      double moonWeight;   
   public:                        //Public -> public
      Moon(double ew)        //constructor name correcton , removed ;
      {
         earthWeight = ew;
         moonWeight = earthWeight / 6;
      }
      double getMoonWeight()
      {  return moonWeight;  }
};

int main (){
   double earth;
   cout << "What is your weight? ";
   cin >> earth;

   Moon lunar(earth);

   cout << "On the moon you would weigh " << lunar.getMoonWeight() << endl;    
                    //lunar::getMoonWeight -> lunar.getMoonWeight
   
   return 0;

}