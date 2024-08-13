#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing(int a[], int n, int N){
    int sum=(N*(N+1))/2;
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=a[i];
    }
    return sum-s2;
}

int main()
{

int a[5]={1,2,3,5};
int ans=missing(a,5,5);
cout<<ans;

return 0;
}