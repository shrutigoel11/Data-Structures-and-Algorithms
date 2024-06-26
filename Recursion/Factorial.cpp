#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0)    //---->BASE CASE
        return 1;
    return (n*factorial(n-1)); //--->RECURRENCE REALTION
}

int main()
{
int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Factorial of "<<n<<" is :"<<factorial(n);

return 0;
}