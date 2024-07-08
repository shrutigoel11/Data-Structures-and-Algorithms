#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigit(long long x) {
    int digcount=0;
    while(x>0){
        int last=x%10;
        digcount++;
        x=x/10;
    }
    return digcount;
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