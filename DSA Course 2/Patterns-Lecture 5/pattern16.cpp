#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    char ch='A'; 
    for(int i=1;i<=n;i++){     
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            
        }cout<<endl;
        ch++;
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