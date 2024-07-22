#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumn(int i,int sum){
    if(i<1)return sum;
    sumn(i-1,sum+i);
}

int main()
{
int ans=sumn(3,0);
cout<<ans;

return 0;
}