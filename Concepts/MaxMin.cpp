#include <iostream>
using namespace std;
void initArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element at index:"<<i<<endl;
        cin>>arr[i];
    }
}
void printtArray(int arr[],int size){
    cout<<"Array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int maxTerm(int arr[], int size){
    int max=INT32_MIN;//
        for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int minTerm(int arr[], int size){
    int min=INT32_MAX;
        for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main()
{
int n;
cout<<"Enter size of array: ";
cin>>n;
int arr[100];// never use variable as size bad practice
initArray(arr,n);
printtArray(arr,n);
int max=maxTerm(arr,n);
int min=minTerm(arr,n);
cout<<"\nMaximum element is: "<<max<<endl;
cout<<"Minimum element is: "<<min<<endl;
return 0;
}