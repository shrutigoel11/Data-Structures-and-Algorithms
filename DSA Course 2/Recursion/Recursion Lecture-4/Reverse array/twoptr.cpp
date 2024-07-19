#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int l,int arr[],int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    reverse(l+1,arr,r-1);
}

int main()
{

int arr[5];

cout<<"Enter array elements:";
for(int i=0;i<5;i++){
    cin>>arr[i];
}

cout<<"Orignal array is: ";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
reverse(0,arr,4);
cout<<"Reversed array is: ";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}