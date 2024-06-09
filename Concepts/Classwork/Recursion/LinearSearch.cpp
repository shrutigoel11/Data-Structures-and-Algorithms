#include <iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key){

    //base case 

    if(size==0){
        return 0;
    }
        if(arr[0]==key)
            return 1;
        else
            return LinearSearch(arr+1,size-1,key);
}

int main()
{

int arr[]={1,2,3,4,56,7};
int key;
cout<<"Enter key:";
cin>>key;
bool ans=LinearSearch(arr,6,key);
if(ans){
    cout<<"Key found";
}
else{
    cout<<"Key not found";
}

return 0;
}