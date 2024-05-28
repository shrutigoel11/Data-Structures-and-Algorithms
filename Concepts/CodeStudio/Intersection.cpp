#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2) {
    vector<int> ans;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;

        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter array 1 elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter m: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter array 2 elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = findArrayIntersection(arr1, arr2);
    cout << "Intersection of the two arrays: ";
    for (int i : result) {
        if(i>0)
        cout << i << " ";
        else 
           cout<<"-1";
    }
    return 0;
}
