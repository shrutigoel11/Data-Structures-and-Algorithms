#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        //upper
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }cout<<endl;

    }
        for(int i=1;i<n;i++){
        //upper
        for(int j=0;j<=n-i-1;j++){
            cout<<"* ";
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