#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missing(int a[], int n, int N) {
    // Create and initialize the hash array
    int hash[N + 1] = {0}; // N+1 to cover all indices from 0 to N

    // Mark the presence of numbers in the hash array
    for(int i = 0; i < n; i++) {
        if (a[i] <= N) { // Make sure the number is within the range 1 to N
            hash[a[i]] = 1;
        }
    }

    // Find the missing number
    for(int i = 1; i <= N; i++) {
        if(hash[i] == 0) return i;
    }
}

int main()
{
int a[5]={1,2,3,5};
int ans=missing(a,5,5);
cout<<ans;


return 0;
}