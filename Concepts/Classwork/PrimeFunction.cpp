#include <iostream>
using namespace std;
//0- not prime 1-prime
bool isPrime(int n){
   for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }

        else{
            return 1;
        }
    }
}
int main()
{
int n;
cout<<"Enter a number:";
cin>>n;
int ans=isPrime(n);
if(ans){
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}
return 0;
}