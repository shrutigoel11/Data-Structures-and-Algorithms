#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int a=10;
int &r=a; //Initialised when declared 
cout<<a<<endl;
cout<<r<<endl;
r++;
cout<<a<<endl;
cout<<r<<endl;
a++;
cout<<a<<endl;
cout<<r<<endl;

int b=30;
r=b; //a=r=b; r is not equal to b means it stores only value of b in a as a and r are equal
cout<<a<<endl;
cout<<r<<endl;

return 0;
}