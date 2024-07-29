#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[6],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
        }
       
    }
}

int main()
{

int arr[6]={26,45,67,17,9,8};

cout<<"Original Array:";
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

selectionSort(arr,6);

cout<<"Reversed Array:";
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}

return 0;
}