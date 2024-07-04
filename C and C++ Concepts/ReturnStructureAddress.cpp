#include <iostream>
using namespace std;

struct Rectangle 
{
    int length, breadth;
};

struct Rectangle * fun()
{
    struct Rectangle *p;
    p=new Rectangle; //C++
    //p= (struct*)malloc(sizeof(struct Rectangle))   ------> C;

    p->length=10;
    p->breadth=20;
}

int main()
{
struct Rectangle *p=fun();
cout<<p->length<<endl;
cout<<p->breadth;
return 0;
}