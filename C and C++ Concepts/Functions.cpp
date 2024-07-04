#include <iostream>
using namespace std;

int add (int a, int b) // FORMAL PARAMETERS AND IT IS PROTOTYPING/DECLARTION OF FUNCTION
{
    int c;
    c=a+b;      //BODY OF FUNCTION IS DEFINITION
    return c;
}

int main()
{
int x,y,z;
x=10;
y=90;
z=add(x,y); //FUNCTION CALLING AND ACTUAL PARAMETERS
cout<<z;


return 0;
}