#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[6],int n){
        int max=arr[0];
        for(int i=0 ; i< n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=largest(arr,n);
    cout<<"Largest Element is:"<<ans;

return 0;
}