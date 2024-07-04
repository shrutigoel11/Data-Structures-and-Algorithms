#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        //count
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        //count
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }cout<<endl;
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