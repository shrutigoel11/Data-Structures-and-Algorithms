//Monolithic Program: We write everything inside maain()

#include <iostream>
using namespace std;

int main()
{

int length=0, breadth=0;
cout<<"Enter length and breadth: ";
cin>>length>>breadth;

int area=length*breadth;
int peri=2*(length+breadth);

cout<<"Area: "<<area<<endl;
cout<<"Perimeter:"<<peri<<endl;

return 0;
}