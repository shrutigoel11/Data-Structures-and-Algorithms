#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  long long sum=0;
  
    long long sumOfSeries(long long n) {
        
        if(n==0)return sum;
        sum+=n*n*n;
        n--;
        sumOfSeries(n);
    }

int main()
{
cout<<sumOfSeries(5);


return 0;
}