#include <iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;
 
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
    return f;
}

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
int ans=factorial(n);
cout<<ans;

return 0;
}