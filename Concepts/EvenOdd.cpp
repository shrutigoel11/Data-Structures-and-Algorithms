#include <iostream>
using namespace std;
//0 for odd 1 for even
bool IsEven(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{

int num;
cin>>num;
int ans=IsEven(num);
if(ans){
    cout<<num<<" is even.";
}
else{
     cout<<num<<" is odd.";
}
return 0;
}