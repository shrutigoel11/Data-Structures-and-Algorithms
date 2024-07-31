#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[6],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while (arr[i]<pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }   
    }
    //now place to correct position
    int temp=pivot;
        pivot=arr[j];
        arr[j]=temp;
    return j;
}

void quickSort(int arr[6],int low, int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
    }
}

int main()
{
int arr[6] = {26, 45, 67, 17, 9, 8};

    cout << "Original Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, 5);

    cout << "Sorted Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }


return 0;
}