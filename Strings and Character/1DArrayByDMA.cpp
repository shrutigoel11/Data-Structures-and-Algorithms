#include <iostream>
using namespace std;

int GetSum(int *arr , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];       // arr[i]=*(arr+i)
    }
    return sum;
}

int main()
{
int n;
cout<<"Enter size of array:";
cin>>n;

int *arr=new int[n]; //rhs:heap lhs: stack
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Answer is: "<<GetSum(arr,n);
return 0;
}