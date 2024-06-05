#include <iostream>
using namespace std;

void WavePrint(int arr[][3],int nrow,int ncol){

    for(int j=0;j<ncol;j++){
        if(j&1){
                for(int i=nrow-1;i>=0;i--){
                    cout<<arr[i][j]<<" ";
                }
        }
        else{
                for(int i=0;i<nrow;i++){
                    cout<<arr[i][j]<<" ";
                }
        }
    }

}

int main()
{
int arr[3][3]={1,2,3,4,5,6,7,8,9};
WavePrint(arr,3,3);

return 0;
}