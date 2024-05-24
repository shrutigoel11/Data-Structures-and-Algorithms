#include <iostream>
using namespace std;

int main()
{
int n,i=2,sum=0;
cout<<"Enter the value of n: ";
cin>>n;
while(i<=n){
    sum+=i;
    cout<<sum<<" "<<endl;
    i=i+2;

}
cout<<"Sum is:"<<sum;
return 0;
}