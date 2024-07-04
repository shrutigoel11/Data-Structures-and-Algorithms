//ONLY C++ SUPPORTS CALL BY REFERENCE --> REFERENCES ARE ALIAS TO VARIABLES. FUNCTION COME UNDER MAIN(), NO MEMORY ALLOCATED, ONE ACTIVATION FRAME

#include <iostream>
using namespace std;

void swap(int &a,int &b) 
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
int a,b;
a=10;
b=20;
swap(a,b);
cout<<a <<" "<<b;
return 0;
}