//Constraint:array must be sorted or values in monotic order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> &v, int key, int l, int h) {
    if (l <= h) {
        int mid = l + (h - l) / 2;  // this doesn't violate range as if l=2^31-1=h mid will burst and return error

        if (v[mid] == key)
            return mid;
        else if (v[mid] < key)
            return BinarySearch(v, key, mid + 1, h);
        else
            return BinarySearch(v, key, l, mid - 1);
    }

    return -1; // Element not found
}

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << "Enter key:";
    cin >> key;
    int ans = BinarySearch(v, key, 0, n - 1);
    if (ans != -1)
        cout << "Found at index: " << ans;
    else
        cout << "Not found";
    return 0;
}