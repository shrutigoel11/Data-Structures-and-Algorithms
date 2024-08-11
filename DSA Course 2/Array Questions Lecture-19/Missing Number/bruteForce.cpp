#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missing(int a[],int n,int N){
    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
        return i;
    }
    }
    
}

int main()
{

int a[5]={1,2,3,5};
int ans=missing(a,5,5);
cout<<ans;

return 0;
}