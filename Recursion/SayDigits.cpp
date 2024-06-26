#include <iostream>
using namespace std;

void SayDigit(int n){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n<0){
        return ;
    }
    if(n>0){
    int digit=n%10;
    
    SayDigit(n/10);
    cout<<arr[digit]<<" "; //head recursion
    }
        
}

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
SayDigit(n);


return 0;
}