#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int m=n,ans=0;
if(n==0){
    ans=1;
}
int mask=0;
while(m!=0){
mask=(mask<<1)| 1;
m=m>>1;
}
ans=(~n)&mask;
cout<<ans;

return 0;
}