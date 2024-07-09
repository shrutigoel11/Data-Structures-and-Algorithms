#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int reverse(int n) {
        long rev=0;
        int m=n;
        while(m){
            int digit=m%10;
            rev=rev*10 +digit;
            m=m/10;
        }
        if(rev<INT_MIN || rev> INT_MAX){
            return 0;
        }
        else return rev;
    }

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Orignal number: "<<n<<endl;
int num=reverse(n);
cout<<"Reversed number : "<<num;
return 0;
}