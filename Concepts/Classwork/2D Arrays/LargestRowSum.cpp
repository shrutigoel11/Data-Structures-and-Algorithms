#include <iostream>
using namespace std;

void PrintSum(int arr[][3]){
    int temp=INT32_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of Row " <<i<<" is = " <<sum<< " ";
        cout<<endl;
        if(temp<sum){
          temp=sum;
        }
    }
    cout<<"Largest row sum: "<<temp;
}

int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
PrintSum(arr);

return 0;
}