#include <iostream>
using namespace std;

bool IsPresent(int arr[][3],int key, int n, int m){// initialise col 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                return 1;
            } 
        }
    }
       return 0;
}

int main()
{

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int key;
cout<<"Enter key :";
cin>>key;

if(IsPresent(arr,key,3,3)){
    cout<<"Key found";
}
else{
    cout<<"Key not found";
}

return 0;
}