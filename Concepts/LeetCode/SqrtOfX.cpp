#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int n){
    int l=0;
    int h=n;
    int ans=-1;
    while(l<=h){
       long long int mid=(l+h)/2;
        if(mid*mid == n){
       return mid;
    }
    else if(mid*mid > n){
        h=mid-1;
    }
    else{
       ans=mid;
       l=mid+1;
    }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++) {
        factor /= 10;
        while ((ans + factor) * (ans + factor) <= n) {
            ans += factor;
        }
    }
    return ans;
}

int main()
{
int n;
cout<<"Enter a number:";
cin>>n;
int p;
cout<<"Enter precision:";
cin>>p;
int tempSol=BinarySearch(n);
double ans=morePrecision(n,p,tempSol);
cout<<"Answer is:"<<ans;
return 0;
}