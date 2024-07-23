#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
// int arr[12]={1,2,3,2,1,3,5,1,1,1,1};
string arr="ABBAABBCCccssd";
map<char,int>mpp;
for(int i=0;i<arr.size();i++){
    mpp[arr[i]]++;
}
int p;
cout<<"Enter query number:";
cin>>p;
while(p--){
    char number;
    cout<<"Enter a number to check: ";
    cin>>number;
    cout<<number<<":"<<mpp[number]<<endl;
}

return 0;
}