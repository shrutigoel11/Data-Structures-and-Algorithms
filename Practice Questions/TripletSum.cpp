#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> PairSum(vector<int> &v, int s){
    vector<vector<int>> ans;
    sort(v.begin(), v.end()); // Sort the input vector to use two-pointer technique
    int n = v.size();
    for(int i = 0; i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = v[i] + v[left] + v[right];
            if (sum == s) {
                ans.push_back({v[i], v[left], v[right]});
                left++;
                right--;
            } else if (sum < s) {
                left++;
            } else {
                right--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }
    int s;
    cout << "Enter sum value: ";
    cin >> s;

    vector<vector<int>> pairs = PairSum(v, s);
    if (pairs.empty()) {
        cout << "No triplets found with the given sum.\n";
    } else {
        cout << "Triplets with sum " << s << " are:\n";
        for (const auto &triplet : pairs) {
            cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")\n";
        }
    }

    return 0;
}
