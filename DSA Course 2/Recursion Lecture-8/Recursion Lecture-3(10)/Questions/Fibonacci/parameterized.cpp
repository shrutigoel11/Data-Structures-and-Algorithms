#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int i,int f){
    if(i<1)return f;

    fib(i-1,f*i);
}

int main()
{

int ans=fib(4,1);
cout<<ans;

return 0;
}