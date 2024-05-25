#include <iostream>
using namespace std;

int main()
{
int  n,i=0;
cout<<"Enter the value of n:";
cin>>n;
while(i<n){
    int j=0;
    while(j<n){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}

return 0;
}