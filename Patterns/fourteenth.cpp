#include <iostream>
using namespace std;

int main()
{
int n,i=1;
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'-2+i+j;
      cout<<ch;
      
    j++;
    }
    cout<<endl;
    i++;
}


return 0;
}