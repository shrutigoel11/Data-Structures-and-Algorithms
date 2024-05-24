#include <iostream>
using namespace std;

int main()
{
int n,num=2;
cout<<"Enter a number: ";
cin>>n;
while(num<n){
    if(n%num==0){
        cout<<"Not Prime";
        break;
    }
    else {
        num++;
    } 
}

return 0;
}