#include <iostream>
using namespace std;

int main()
{
int n,i=1,sum=0;
cout<<"Enter the value of n: ";
cin>>n;
while(i<=n){
    sum+=i;
    cout<<sum<<" "<<endl;
    i++;

}
cout<<sum;
return 0;
}