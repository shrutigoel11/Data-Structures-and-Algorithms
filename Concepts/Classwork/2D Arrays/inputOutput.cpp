#include <iostream>
using namespace std;

int main()
{

int arr1[3][3];
int arr2[3][3];
// input(arr1);
// input(arr2);
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
    }
// output(arr1);
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";  // row wise
    }cout<<endl;
}
//input arr2 
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr2[i][j]<<" ";  // row wise
    }cout<<endl;
}
//output arr2
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[j][i]<<" "; // col wise
    }cout<<endl;
}

return 0;
}