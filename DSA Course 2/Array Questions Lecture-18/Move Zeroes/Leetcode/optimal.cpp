#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;  // Pointer for the next non-zero position

        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                swap(nums[j++], nums[i]);
            }
        }
    }
};

int main()
{



return 0;
}