#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[]){
    if(i>=5/2)return;
    swap(arr[i],arr[5-i-1]);
    reverse(i+1,arr);
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
reverse(0,arr);
cout<<"Reversed array is: ";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}