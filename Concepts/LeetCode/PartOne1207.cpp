#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool findDuplicates(vector<int> &nums) {
   
    unordered_set<int> st;

    for(auto ele : nums){
        if(st.find(ele) != st.end())
            return true;

        st.insert(ele);
    }

    return false;
}

int main() {
    cout << "Enter n : ";
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool duplicate = findDuplicates(arr);
    
    if(duplicate){
        cout << "Has Duplicate";
    }
    else{
        cout << "No Duplicate";
    }

    return 0;
}