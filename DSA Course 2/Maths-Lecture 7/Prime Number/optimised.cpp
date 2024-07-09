#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    if(n<=1)return true;
    int count=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }
        
    }
    if(count==2)return true;
    else return false;
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