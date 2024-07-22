//Recursion -> Function calling itself until a specific condition is met.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void f(int &count){

    if(count==3) return; //statements in this call will not be executed and terminated and goes back to previous call it repeats till all calls are terminated
    cout<<count<<endl;
    count++;
    f(count);
}

int main()
{
int count=0;
f(count);

return 0;
}