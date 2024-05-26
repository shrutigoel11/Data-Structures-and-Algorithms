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
int Unique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter size of array (must be odd):";
    cin>>n;
    int arr[n];
    initArray(arr,n);
    printtArray(arr,n);
    int ans=Unique(arr,n);
    cout<<"\nUnique element is:"<<ans;

return 0;
}