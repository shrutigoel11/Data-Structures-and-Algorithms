#include <iostream>
using namespace std;

int factorial(int n){
    int f=1,i=1;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    return f;
}
int nCr(int n, int r){
int ans=(factorial(n))/((factorial(r))*factorial(n-r));
return ans;
}
int main()
{
int n,r;
cout<<"Enter n and r value:";
cin>>n >> r;
int ans=nCr(n,r);
cout<<n<<"\n"<<" C\n  "<<r<<": "<<ans;
return 0;
}