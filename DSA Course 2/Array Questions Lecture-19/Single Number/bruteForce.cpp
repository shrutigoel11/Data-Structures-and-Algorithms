#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    int singleNumber(int nums[],int n) {
        for (int i = 0; i < n; i++) {
        int cnt = 0;  // Reset cnt for each new number
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            return nums[i];  // Return the unique number
        }
    }
        
    }


int main()
{

int a[5]={1,1,3,5,5};
 int size = sizeof(a) / sizeof(a[0]);
int ans=singleNumber(a,size);
cout<<ans;

return 0;
}