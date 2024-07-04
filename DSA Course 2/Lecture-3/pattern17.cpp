#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    
    for(int i=1;i<=n;i++){ 
        //space 
      for(int j=0;j<n-i;j++){
        cout<<"* ";
      }
        char ch='A';
      //triangle 1
      for(int j=0;j<i-1;j++){
        cout<<ch<<" ";
        ch++;
      }cout<<endl;
    //   triangle 2;
    //   ch='A';
    //   for(int j=0;j<i;j++){
    //     cout<<ch<<" ";ch++;
    //   }cout<<endl;ch--;


      //space
    }
}

int main()
{
int n;
cout<<"Enter n: ";
cin>>n;
print(n);


return 0;
}