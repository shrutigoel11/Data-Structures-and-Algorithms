#include <iostream>
using namespace std;
struct Rectangle
{
    int length , breadth;
};

//Call By Address : Actual parameters changes upon changing formal parameters;

void Area(struct Rectangle *r1)
{
    cout<<r1->length*r1->breadth;
}


int main()
{
struct Rectangle r={10,5};
cout<<r.length<< " " <<r.breadth<<endl;
Area(&r);

return 0;
}