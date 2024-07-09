#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    if(n<=1)return true;
    for(int i=2;i<(n);i++){
        if(n%i==0) return false;
        
    }
    return true;
}

int main()
{

int n;
cout<<"Enter n:";
cin>>n;
if(checkPrime(n)) cout<<"Prime Number";
else cout<<"Not a prime number";

return 0;
}