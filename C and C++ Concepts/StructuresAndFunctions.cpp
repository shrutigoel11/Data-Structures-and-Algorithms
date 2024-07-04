// C program for structures and functions;

#include <iostream>
using namespace std;

struct Rectangle 
{
    int length,breadth;
};
void initialise(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}
int peri(struct Rectangle r1)
{
    return 2*(r1.length+r1.breadth);
}
int main()
{
Rectangle r={0,0};
cout<<"Enter length and breadth:";
cin>>r.length>>r.breadth;//length and breadth are by default public so accessible;
initialise(&r,r.length,r.breadth);
int p=area(r);
int s=peri(r);
cout<<"Area: "<<p<<endl;
cout<<"Peri: "<<s<<endl;

return 0;
}