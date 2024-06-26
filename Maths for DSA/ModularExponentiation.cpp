#include <iostream>
using namespace std;
int ME(int a, int b, int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=( (res*(a)% m))%m;
        }
        a=((a%m)*(a%m))%m;
        b=b>>1; //b/2;
    }
    return res;
}

int main()
{
int a,b,m;
cin>>a >>b >>m;
cout<<"Answer is :"<<ME(a,b,m);

return 0;
}