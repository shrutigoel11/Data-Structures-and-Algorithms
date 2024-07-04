// C++ program for structures and functions;

#include <iostream>
using namespace std;

struct Rectangle 
{
    private:
    int length,breadth;
    public:
void initialise(int l,int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}
int peri()
{
    return 2*(length+breadth);
}
};
int main()
{
int l,b; //Create two variables as length and breadth are private and accessiblr only by member function in public within class;
Rectangle r;
cout<<"Enter length and breadth:";
cin>>l>>b;
r.initialise(l,b);
int p=r.area();
int s=r.peri();
cout<<"Area: "<<p<<endl;
cout<<"Peri: "<<s<<endl;

return 0;
}