#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    bool ans=isSorted(arr+1,size-1);
    return ans;

}

int main()
{

int arr[]={1,2,3,4,5,9,8};
bool ans=isSorted(arr,8);
if(ans){
    cout<<"Array is sorted";
}
else{
    cout<<"Array is not sorted";
}
return 0;
}