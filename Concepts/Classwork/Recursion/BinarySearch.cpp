#include <iostream>
using namespace std;
void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool BinarySearch(int arr[],int key,int s,int e){
    cout<<endl;
    print(arr,s,e);
    //base
    //not found 
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    //found
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]>key){
        return BinarySearch(arr,key,s,mid-1);
    }
    else{
       return BinarySearch(arr,key,mid+1,e);
    }
}

int main()
{
int arr[5]={1,2,3,4,7};
int key;
cout<<"Enter key:";
cin>>key;
bool ans=BinarySearch(arr,key,0,4);
if(ans){
    cout<<"Key found";
}
else{
    cout<<"Key not found";
}


return 0;
}