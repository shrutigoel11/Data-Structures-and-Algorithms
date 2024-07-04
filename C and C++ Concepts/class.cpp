#include <iostream>
using namespace std;

class Rectangle
{
    private:
     int length,breadth;

    public:
     Rectangle()
     {
        length=breadth=0;
     }

     Rectangle(int , int );

     int area();

     int perimeter();

     void setLength(int l)
     {
      length=l;
     }
     void setBreadth(int b)
     {
        breadth=b;
     }
     int getLength()
     {
        return length;
     }
     int getBreadth()
     {
        return breadth;
     }

     ~Rectangle();
};
Rectangle::Rectangle(int len, int brea)
{
    length=len;
    breadth=brea;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
Rectangle::~Rectangle()
{
    
}

int main()
{
Rectangle r(10,5);
cout<<"Area : "<<r.area()<<endl;
cout<<"Perimeter : "<<r.perimeter()<<endl;


return 0;
}