//TWO ACTIVATION FRAME, FUNCTION FRAME DELETED AFTER TERMINATION OF FUNCTION

#include <iostream>
using namespace std;

void swap(int a,int b) //CALL BY VALUE :Formal parameters are modified but actual parameters remains same that's why a is still 10 and b is still 20
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