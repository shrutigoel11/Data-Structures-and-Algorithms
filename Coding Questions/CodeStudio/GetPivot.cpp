#include <iostream>
#include <vector>
using namespace std;

//Rotated sorted array

int findPivot(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[0])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    vector<int> mountainArray = {7, 9, 1,2,3};
    int pivotIndex = findPivot(mountainArray);
    cout << "Pivot element is: " << mountainArray[ pivotIndex] << " at index " << pivotIndex << endl;
    return 0;
}
