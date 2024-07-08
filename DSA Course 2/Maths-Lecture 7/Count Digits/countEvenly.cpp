#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    int evenlyDivides(int N){
      int count=0;
      int m=N;
      while(N>0){
          int digit=N%10;
          if(digit!=0 && m%digit==0){
              count++;
          }
          N=N/10;
      }
      return count;
    }

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
int count=evenlyDivides(n);
cout<<"The count is: "<<count;

return 0;
}