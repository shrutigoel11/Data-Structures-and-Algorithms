#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
int a=10; //Data Variable
int *p; //Address Variable --->DECLARATION
p = &a; //INITIALISATION
cout<<a<<endl;
cout<<"Using Pointer:"<<*p<<endl; //DEREFRENCING
cout<<&a<<" "<<p<<endl;

//Pointer to Array

int A[4]={2,3,4,6};
p=A;
for (int i=0;i<4;i++)
{
    cout<<A[i]<<endl;
}
cout<<"Access By Pointer"<<endl;
for (int i=0;i<4;i++)
{
    cout<<p[i]<<endl;
}



return 0;
}