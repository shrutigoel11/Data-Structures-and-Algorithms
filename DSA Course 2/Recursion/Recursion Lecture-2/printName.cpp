#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int i,int N){
    //Base Case
    if(i>N) return;
    cout<<"Shruti"<< " ";
    print(i+1,N);
}

int main()
{

print(1,10);

return 0;
}