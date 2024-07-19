#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int arr[12]={1,2,3,2,1,3,5,1,1,1,1};
int hash[13]={0};
for(int i=0;i<12;i++){
    hash[arr[i]]++;
}
int p;
cout<<"Enter query number:";
cin>>p;
while(p--){
    int number;
    cout<<"Enter a number to check: ";
    cin>>number;
    cout<<number<<":"<<hash[number]<<endl;
}

return 0;
}