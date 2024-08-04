#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(checkSorted(arr,n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    

return 0;
}