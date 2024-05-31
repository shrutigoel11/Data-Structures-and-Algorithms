#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    
    while (s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        
        int sum = val1 + val2 + carry;   
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // handle remaining elements in the first array
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    
    // handle remaining elements in the second array
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }
    
    // handle the case where there is a carry at the end
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    
    // reverse the result
    return reverse(ans);
}

int main() {
    int n, m;
    cout << "Enter size of array A: ";
    cin >> n;
    cout << "Enter elements of array A: ";
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of array B: ";
    cin >> m;
    cout << "Enter elements of array B: ";
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> sum = findArraySum(a, n, b, m);

    cout << "Sum of the two arrays: ";
    for (int i = 0; i < sum.size(); i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
