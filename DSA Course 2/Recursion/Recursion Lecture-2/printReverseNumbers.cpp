#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int i,int N){
    //Base Case
    if(i<1) return;
    cout<<i<< " ";
    print(i-1,N);
}

int main()
{

print(10,10);

return 0;
}