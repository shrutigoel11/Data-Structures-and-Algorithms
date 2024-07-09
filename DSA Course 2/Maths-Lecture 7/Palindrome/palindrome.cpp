#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(long long int n){
    if(n<0) return false;
    long long int orignal=n, rev=0;
    while(n>0){
        rev=(rev*10) + (n%10);
        n=n/10;
    }
    if(orignal==rev) return true;
    else return false;
}

int main()
{

long long int n;
cout<<"Enter a number:";
cin>>n;
if(checkPalindrome(n)) cout<<"Yes";
else cout<<"No";

return 0;
}