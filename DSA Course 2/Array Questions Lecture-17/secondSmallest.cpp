#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[6],int n){
        int smallest=arr[0];
        int ssmallest=-1;
        
        for(int i=0;i<n;i++){
            if(arr[i]<smallest ){
                ssmallest=smallest;
                smallest=arr[i];
            }
            else if(arr[i]>smallest && arr[i]<ssmallest){
                ssmallest=arr[i];
            }
        }
        return ssmallest;
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=secondSmallest(arr,n);
    cout<<"Second Smallest Element is:"<<ans;

return 0;
}