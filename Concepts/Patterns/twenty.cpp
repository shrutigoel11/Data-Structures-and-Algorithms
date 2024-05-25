#include <iostream>
using namespace std;

int main()
{
int n,i=1;
cin>>n;

while(i<=n){
    //SPACE

    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }

    //STAR

    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}


return 0;
}