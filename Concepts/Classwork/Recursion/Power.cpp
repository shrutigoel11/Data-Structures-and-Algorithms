#include <iostream>
#include <math.h>
using namespace std;

int power(int n){

    if(n==0){
        return 1;
    }
    int small=power(n-1);
    int big=2*small;
    return big;
}

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Power of "<<n<<" is :"<<power(n);

return 0;
}