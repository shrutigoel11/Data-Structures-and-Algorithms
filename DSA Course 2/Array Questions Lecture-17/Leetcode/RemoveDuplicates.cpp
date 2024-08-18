#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberofDuplicates(int arr[],int n){
        int i=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
}

int main()
{
    int arr[] = {1,1,1,2,2,3,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=numberofDuplicates(arr,n);
    cout<<ans;
return 0;
}