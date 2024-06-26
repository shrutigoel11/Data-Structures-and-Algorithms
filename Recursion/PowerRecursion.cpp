#include <iostream>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0) // b is even toh ans= a^b/2*b/2 else ans*a
    {
        return ans*ans;
    }
    return a*ans*ans;
}

int main()
{

int a,b;
cin>>a >> b;
int n=power(a,b);
cout<<n;

return 0;
}