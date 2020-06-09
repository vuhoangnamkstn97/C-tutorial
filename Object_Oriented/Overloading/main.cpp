
#include <iostream>
using namespace std;

class Box {
   public:
      double getVolume(void);
      void setLength( double);
      void setBreadth( double);
      void setHeight( double );

      // Overload + operator to add two Box objects.
      Box operator+(const Box& );
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
double Box::getVolume()
{
    return this->height*this->length*this->breadth;
}
void Box::setHeight(double height)
{
     this->height = height;
}
void Box::setLength(double length)
{
     this->length = length;
}
void Box::setBreadth(double breadth)
{
       this->breadth = breadth;
}
Box Box::operator+(const Box& Box1 )
{
    Box Temp_Box;
    Temp_Box.height = this->height + Box1.height;
    Temp_Box.length = this->length + Box1.length;
    Temp_Box.breadth = this->breadth + Box1.breadth;
    return Temp_Box;
}
