#include <iostream>
using namespace std;

//if else

string compareNM(int n, int m){
        if(n<m){
            return "lesser";
        }
        else if(n>m){
            return "greater";
        }
        else{
            return "equal";
        }
    }

int main()
{
int n=6;
int m=6;
cout<<compareNM(n,m);


return 0;
}