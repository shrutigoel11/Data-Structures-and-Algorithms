#include <iostream>
using namespace std;

int main()
{
int  n,i=1;
cout<<"Enter the value of n:";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch=('A'-2+i+j);
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}

return 0;
}