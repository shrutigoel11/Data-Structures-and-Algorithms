//Constraint:array must be sorted or values in monotic order
//Total Occurences=(last-first)+1;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FirstOccurence(vector<int> &v, int key, int l, int h) {
    int ans = -1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (v[mid] == key) {
            ans = mid;
            h = mid - 1; // Move to the left
        } else if (v[mid] < key) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return ans; // Element not found
}

int LastOccurence(vector<int> &v, int key, int l, int h) {
    int ans = -1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (v[mid] == key) {
            ans = mid;
            l = mid + 1; // Move to the right
        } else if (v[mid] < key) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return ans; // Element not found
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
    sort(v.begin(), v.end());
    cout << "Enter key:";
    cin >> key;
    int ans1 = FirstOccurence(v, key, 0, n - 1);
    if (ans1 != -1)
        cout << "First occurence at index: " << ans1 << endl;
    else
        cout << "First occurence not found" << endl;

    int ans2 = LastOccurence(v, key, 0, n - 1);
    if (ans2 != -1)
        cout << "Last occurence at index: " << ans2 << endl;
    else
        cout << "Last occurence not found" << endl;

    int toatlOccurence=(ans2-ans1)+1;
    cout<<"Total occurences:"<<toatlOccurence;

    return 0;
}
