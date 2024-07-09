#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n){
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    return rev;
}

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Orignal number: "<<n<<endl;
int num=reverseNum(n);
cout<<"Reversed number : "<<num;
return 0;
}