#include <iostream>

class Shape
{
public:     virtual double getArea() = 0;
            void setHeight( double );
            void  setWidth( double );
protected:
            double height;
            double width;
};

class Rectangle:public Shape
{
public :   double getArea();
};

class Triangle:public Shape
{
public : double getArea();
};
using namespace std;

int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(10);
    Rect.setHeight(15);
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(10);
    Tri.setHeight(15);
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    return 0;
}
void Shape::setHeight(double height)
{
    this->height = height;
}
void Shape::setWidth(double width)
{
    this->width = width;
}
double Rectangle::getArea()
{
    return this->height*this->width;
}
double Triangle::getArea()
{
    return this->width*this->height/2;
}
