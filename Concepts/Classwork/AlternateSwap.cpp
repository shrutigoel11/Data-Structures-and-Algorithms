#include <iostream>
using namespace std;

void initArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element at index:"<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
}
void printtArray(int arr[],int size){
    cout<<"Array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
   void swapAlternate(int arr[], int n){
    for(int i = 0; i < n - 1; i += 2){
        swap(arr[i] ,arr[i + 1]);
    }

    cout<<"Reverse array is:";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    initArray(arr,n);
    printtArray(arr,n);
    swapAlternate(arr,n);
return 0;
}