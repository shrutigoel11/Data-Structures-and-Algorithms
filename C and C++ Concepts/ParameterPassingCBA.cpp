//ACTUAL PARAMETERS ARE MODIFIED AND POINTERS USED AS FORMAL PARAMETERS THAT STORES ADDRESS OF ACTUAL PARAMETERS;TWO ACTIVATION FRAME, FUNCTION FRAME DELETED AFTER TERMINATION OF FUNCTION

#include <iostream>
using namespace std;

void swap(int *a,int *b) 
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
int a,b;
a=10;
b=20;
swap(&a,&b);
cout<<a <<" "<<b;
return 0;
}