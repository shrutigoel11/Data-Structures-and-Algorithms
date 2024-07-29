#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[6],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
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