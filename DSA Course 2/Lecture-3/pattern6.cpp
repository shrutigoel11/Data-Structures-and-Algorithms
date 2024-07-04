#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
for(int i=1;i<=n;i++){
    //space
		for(int j=0;j<n-i+1;j++){
			cout<<j+1<<" ";
		}cout<<endl;
 }
}

int main()
{
int n;
cout<<"Enter n: ";
cin>>n;
print(n);
}