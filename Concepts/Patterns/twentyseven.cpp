#include <iostream>
using namespace std;

int main()
{
int n, i=1;
cin>>n;
while(i<=n){

//SPACE 

int space=n-i;
while(space){
    
    cout<<" ";
    space--;
}

//PATTERN 1

int j=1;
// int count=1;
while(j<=i)
{
    // cout<<count;
    // count++;
    cout<<j;
    j++;
}

//PATTERN 2
int start=i-1;
while(start){
    cout<<start;
    start--;
}
cout<<endl;
i++;
}


return 0;
}