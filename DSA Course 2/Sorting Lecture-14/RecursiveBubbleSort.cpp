#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[6],int n){
        if (n == 1) return;

    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]) {
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        didswap=1;
        } 
        }
            // if no swapping happens.
    if (didswap == 0) return;

    //Range reduced after recursion:
    bubbleSort(arr, n - 1);
    }
}

int main()
{

int arr[6]={26,45,67,17,9,8};

cout<<"Original Array:";
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

bubbleSort(arr,6);

cout<<"Sorted Array:";
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}

return 0;
}