#include<bits/stdc++.h>
using namespace std;

int main()
{
        int a=0;
        int b=1;
        int n;
        cin>>n;
        int nextNum=0;
        for(int i=1;i<n;i++){
        nextNum=a+b;
        a=b;
        b=nextNum;       
        }
        cout<<b;
        
}