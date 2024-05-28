#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> PairSum(vector<int> &v, int s){
    vector<vector<int>> ans;
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] + v[j] == s){
                vector<int> temp = {min(v[i], v[j]), max(v[i], v[j])};
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
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
        cout << "No pairs found with the given sum.\n";
    } else {
        cout << "Pairs with sum " << s << " are:\n";
        for (const auto &pair : pairs) {
            cout << "(" << pair[0] << ", " << pair[1] << ")\n";
        }
    }

    return 0;
}
