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
bool LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key)
        {
           return 1;
        }
    }
    return 0;
}
int main()
{
    int n,key;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    initArray(arr,n);
    printtArray(arr,n);
    cout<<"\nEnter a key to search:"<<endl;
    cin>>key;
    bool found=LinearSearch(arr,n,key);
    if(found){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
return 0;
}