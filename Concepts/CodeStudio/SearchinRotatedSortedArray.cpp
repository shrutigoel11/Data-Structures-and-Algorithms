#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Rotated sorted array

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

int BinarySearch(vector<int>& arr, int key, int l, int h) {
    int mid;
    while (l <= h) {
        mid = (l + h) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> Array = {7, 9, 1, 2, 3};
    int pivotIndex = findPivot(Array);
    int key;
    cout << "Enter key: ";
    cin >> key;

    int ans;
    if (Array[pivotIndex] <= key && key <= Array.back()) {
        ans = BinarySearch(Array, key, pivotIndex, Array.size() - 1);
    } else {
        ans = BinarySearch(Array, key, 0, pivotIndex - 1);
    }

    if (ans != -1) {
        cout << "Element found at index " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

