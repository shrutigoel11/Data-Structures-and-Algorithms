#include <iostream>
using namespace std;

void PrintSum(int arr[][3]){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of Column " <<i<<" is = " <<sum<< " ";
        cout<<endl;
    }
}

int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
PrintSum(arr);

return 0;
}