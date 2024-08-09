#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int searchInSorted(int arr[], int N, int K) {

        for(int i=0;i<N;i++){
            if(arr[i]==K){
                return i;
            }
        }
        return -1;
    }

int main()
{
    int arr[]={1,2,3,4,5,5,6};
int N=sizeof(arr)/sizeof(arr[0]);
int ans=searchInSorted(arr,N,5);
cout<<ans;


return 0;
}