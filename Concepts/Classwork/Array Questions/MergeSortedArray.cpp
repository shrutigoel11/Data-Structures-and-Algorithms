#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void MergeSortedArrays(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements until either of the arrays is exhausted
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < m) {
        arr3[k++] = arr2[j++];
    }
}


void Input(int arr[],int n){
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
}
void Output(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of first array:";
    cin>>n;
    int m;
    cout<<"Enter size of second array:";
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"Enter array 1 elements:";
    Input(arr1,n);
    cout<<"Enter array 2 elements:";
    Input(arr2,m);
    cout<<"Array 1 elements:";
    Output(arr1,n);
    cout<<"Array 2 elements:";
    Output(arr2,m);

    int arr3[n+m]={0};
    MergeSortedArrays(arr1,n,arr2, m,arr3);
    cout<<"Array 3 elements:";
    Output(arr3,n+m);

    return 0;
}