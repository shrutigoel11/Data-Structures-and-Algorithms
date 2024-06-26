#include <iostream>
using namespace std;

int main()
{
int n,i=0,count=1;
cin>>n;
while(i<n){
    int j=0;
    while(j<n){
        cout<<count;
        count++;
        j++;
    }
    cout<<endl;
    i++;
}


return 0;
}