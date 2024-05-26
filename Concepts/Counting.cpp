#include <iostream>
using namespace std;

//function definition
int count(int n){
    //function body
    int i=1;
    while(i<=n){
        cout <<i<<" ";
        i++;
    }
}
int main()
{
int n;
cin>>n;
count(n);// function call;

return 0;
}