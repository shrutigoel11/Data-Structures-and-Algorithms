#include <iostream>
#include <math.h>
using namespace std;

int count(int n){

    if(n==0){
        return 0;
    }

    // count(n-1);  ---->head recursion -> 1 2 3 4 5
    // cout<<n
    cout <<n<<" ";
    count(n-1);  // tail  recursion  -> 5 4 3 2 1
}

int main()
{

int n;
cout<<"Enter a number:";
cin>>n;
count(n);

return 0;
}