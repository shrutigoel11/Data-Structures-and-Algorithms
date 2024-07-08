#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    
    for(int i=1;i<=n;i++){  
        char ch='A';   
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            ch++;
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