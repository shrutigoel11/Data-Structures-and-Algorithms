#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    int singleNumber(int nums[],int n) {
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            xorr=xorr^nums[i];
        }
        return xorr;
    }


int main()
{

int a[5]={1,1,3,5,5};
 int size = sizeof(a) / sizeof(a[0]);
int ans=singleNumber(a,size);
cout<<ans;

return 0;
}