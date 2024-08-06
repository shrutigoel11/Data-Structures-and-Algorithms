#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n,int d){
        d=d%n;
        int temp[d];
        //copy values till d places
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }
        //shift from d+1 to (0 to d-1)
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        //paste temp array at last
        for(int i=n-d;i<n;i++){
            arr[i]=temp[i-(n-d)];
        }
}

int main()
{

int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}