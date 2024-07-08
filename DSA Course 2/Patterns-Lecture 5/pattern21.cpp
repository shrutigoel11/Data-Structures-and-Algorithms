#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
// upside

for(int i=0;i<n;i++){
    for(int j=0;j<=n-i-1;j++){
        cout<<"*";
    }
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    for(int j=0;j<=n-i-1;j++){
        cout<<"*";
    }cout<<endl;
}

//downside
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*";
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