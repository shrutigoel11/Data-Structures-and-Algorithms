#include <iostream>
#include <vector>
#include <array>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    int freq[100001] = {0};
    vector<int> dupes;

    for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    for(int i = 0; i < 100001; i++) {
        if(freq[i] > 1) {
            dupes.push_back(i);
        }
    }
    
    return dupes;
}

int main() {
    vector<int> v = {1, 2, 3, 2, 3};
    vector<int> result = findDuplicates(v);
    
    for(auto i : result) {
        cout << i << " ";
    }

    return 0;
}
