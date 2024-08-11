#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing(int a[], int n, int N) {
   int XOR1=0,XOR2=0;
   n=N-1;
   for(int i=0;i<n;i++){
    XOR2=XOR2^ a[i];
    XOR1=XOR1^(i+1);
   }
   XOR1=XOR1^N;
   return XOR1^XOR2;
    }

int main()
{
int a[5]={1,2,3,5};
int ans=missing(a,5,5);
cout<<ans;


return 0;
}