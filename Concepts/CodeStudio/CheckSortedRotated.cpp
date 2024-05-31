#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int cnt = 0;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] < nums[i - 1])
            cnt++;
    }
    if(nums[nums.size() - 1] > nums[0])
        cnt++;
    
    return cnt <= 1;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool ans = check(v);
    if(ans)
        cout << "The vector is sorted in non-decreasing order with just one element rotated." << endl;
    else
        cout << "The vector is not sorted in non-decreasing order with just one element rotated." << endl;

    return 0;
}
