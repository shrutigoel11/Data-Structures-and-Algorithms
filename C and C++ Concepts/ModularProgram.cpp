//Modular Program: Program is divided into modules/functions; 

#include <iostream>
using namespace std;

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    return 2*(length + breadth);
}

int main()
{
int length = 0,breadth = 0;
cout<<"Enter length and breadth:";
cin>>length>>breadth;
int a=area(length,breadth);
int p=perimeter(length,breadth);
cout<<"Area: "<<a<<endl;
cout<<"Perimeter: "<<p<<endl;

return 0;
}