#include <iostream>
using namespace std;

int main()
{
int num=5;
int *p=&num;
int *q=p;
cout<<"Address of p and q: "<<p <<" & "<<q<<endl;
cout<<"AValue of p and q: "<<*p <<" & "<<*q<<endl;
cout<<p<<endl;
p++; // means +(size of data) in address  
//*p++ means value at address stored by p is incremented;
cout<<p;

return 0;
}