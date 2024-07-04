#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
int length;
int breadth;
};

int main()
{
    Rectangle r={10,20};
struct  Rectangle *p=&r; //Declare a pointer to structure


cout<<(*p).length<<" "<<p->breadth<<endl;

//Get memory in heap
p=(struct Rectangle*)malloc(sizeof(struct Rectangle)); // c and in c++ p=new Rectangle
p->length=20;
p->breadth=10;
cout<<(*p).length<<" "<<(*p).breadth;

return 0;
}