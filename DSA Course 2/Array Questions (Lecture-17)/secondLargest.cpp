#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[6],int n){
        int largest=arr[0];
        int slargest=-1;
        
        for(int i=0;i<n;i++){
            if(arr[i]>largest ){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        return slargest;
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=secondlargest(arr,n);
    cout<<"Second Largest Element is:"<<ans;

return 0;
}