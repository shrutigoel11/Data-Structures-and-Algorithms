#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallest(int arr[6],int n){
        int min=arr[0];
        for(int i=0 ; i< n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=smallest(arr,n);
    cout<<"Smallest Element is:"<<ans;

return 0;
}