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
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
    sum+=arr[i];
    }
    cout<<"\nSum is:"<<sum;
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    initArray(arr,n);
    printtArray(arr,n);
    sum(arr,n);

return 0;
}