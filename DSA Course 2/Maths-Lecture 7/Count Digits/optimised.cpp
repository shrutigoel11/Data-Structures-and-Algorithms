#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigit(long long x) {
    return log10(x)+1;
}

int main()
{
long long n;
cout<<"Enter a number:";
cin>>n;
int count=countDigit(n);
cout<<"The count is: "<<count;


return 0;
}