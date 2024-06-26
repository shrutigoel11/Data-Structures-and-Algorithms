#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    vector<int> mountainArray = {1, 3, 5, 7, 9, 8, 6, 4, 2};
    int peakIndex = findPeakElement(mountainArray);
    cout << "Peak element is: " << mountainArray[peakIndex] << " at index " << peakIndex << endl;
    return 0;
}
