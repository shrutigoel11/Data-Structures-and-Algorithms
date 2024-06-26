#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[],int s, int e){

    int mid=s+(e-s)/2;
    //arrays ki length niklo

    int len1=mid-s+1;
    int len2=e-mid;

    //two arrays create karlo

    int *first=new int[len1];  //dma returns address of first element
    int *second=new int[len2];

    // inke andar values dalo

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    //ab sort karke main me dalo
    int idx1=0;
    int idx2=0;
    k=s;

    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2]){
            arr[k++]=first[idx1++];
        }
        else{
            arr[k++]=second[idx2++];
        }
    }
    while(idx1<len1){
           arr[k++]=first[idx1++]; 
        }
        while(idx2<len2){
            arr[k++]=second[idx2++];
        }
        //deallocate 
        delete []first;
        delete []second;
    }

void mergeSort(int arr[] ,int s, int e){

    //base case
    if(s>=e){
        return ;
    }
    //recursion lga do
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    // merge kardo
    merge(arr,s,e);
}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}