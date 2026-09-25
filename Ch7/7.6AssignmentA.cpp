/*
7.6 assignment 
Luis Roldan
fix the code:
Class Circle:
{
   private
      double centerX;
      double centerY;
      double radius;
   public
      setCenter(double, double);
      setRadius(double);
}

*/

//my answer

class Circle                        //Class -> class
{   private:
        double centerX;
        double centerY;
        double radius;
    public:
    Circle();                       //added costructor 
    void setCenter(double, double); //added void
    void setRadius(double);         //added void
};                                  //added ;