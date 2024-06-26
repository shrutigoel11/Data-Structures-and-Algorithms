#include <iostream>
#include <algorithm>
using namespace std;

int Partition(int arr[],int s,int e){
    int pivot=arr[s];  // start wala pivot manlo
    //ab count kro pivot se chote element pivot se age wale index se
    int count=0;
    for(int i=s+1;i<=e;i++){
          if( arr[i]<pivot){
            count++;
           }
    }

    // pivot ko sahi jagah dalo s+count-->pivotIdx;
    int pivotIdx=s+count;
    swap(arr[s],arr[pivotIdx]);

    // ab compare karake left right samhlo
    int i=s;
    int j=e;

    while(i<pivotIdx && j>pivotIdx){
        // agar left me chote h toh i++ 
        while(arr[i]<arr[pivotIdx]){
            i++;
        }
        //agar right me bade hai j--
        while(arr[j]>arr[pivotIdx]){
            j--;
        }
        //agr iske alawah kuch hai mtlb mix toh swap
        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIdx;
}

int QuickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return 0;
    }

    int p=Partition(arr,s,e); // PARTITION KARDO
    //RECURSION
    QuickSort(arr,s,p-1);   
    QuickSort(arr,p+1,e);
}

int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    QuickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}