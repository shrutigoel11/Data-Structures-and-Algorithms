#include <iostream>
#include <unordered_map>
using namespace std;

int singleNumber(int nums[], int n) {
    unordered_map<int, int> countMap; // Map to store the count of each number

    // Iterate through the array and count occurrences
    for (int i = 0; i < n; i++) {
        countMap[nums[i]]++;
    }

    // Find the number that appears exactly once
    for (const auto& entry : countMap) {
        if (entry.second == 1) {
            return entry.first;
        }
    }

    return -1; // Return a default value if no unique number is found
}

int main() {
    int a[5] = {1, 1, 3, 5, 5};
    int size = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array
    int ans = singleNumber(a, size);
    cout << ans << endl;

    return 0;
}