#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int count=0;
    for(int i=1;i<=n;i++){     
        for(int j=0;j<i;j++){
            cout<<count+1<<" ";
            count++;
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