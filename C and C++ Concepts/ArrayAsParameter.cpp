#include <iostream>
using namespace std;

void fun(int *A,int n) // pointer to array and if we chnage any value in array if changes catual parameter also
{
    for(int i=0;i<5;i++)
    {
        cout<<" "<<A[i];;
    }
}

int main()
{
int A[]={2,1,3,4,5};
int n=5;
for(auto x:A)
cout<<" "<<x<<endl;
fun(A,n);
return 0;
}