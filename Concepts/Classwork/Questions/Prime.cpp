#include <iostream>
using namespace std;

int main()
{
int n;
bool isPrime=1;
cout<<"Enter a number: ";
cin>>n;
for(int i=2;i<n;i++){
    if(n%i==0){
        isPrime=0;
        break;
    }
}
if (isPrime==0)
{
    cout<<n<<" is not prime.";
}
else{
    cout<<n<<" is prime.";
}

return 0;
}