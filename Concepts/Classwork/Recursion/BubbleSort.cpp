#include <iostream>
using namespace std;

void sort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n;i++) //-->ek round karlo baki khud
    {
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    sort(arr,n-1);
}

int main()
{

int arr[]={1,10,4,3};
cout<<"Before: ";
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
sort(arr,4);
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}

return 0;
}