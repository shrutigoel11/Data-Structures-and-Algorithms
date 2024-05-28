#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Method 1 : Using freq array with fixed size
// void frequencyArray( vector <int>& arr) {
//     int freq[1001] = {0};
//     for (int i = 0; i < arr.size(); ++i) {
//         freq[arr[i]]++;
//     }
//     for (int i = 0; i < 1001; ++i) {
//         if (freq[i] > 0) {
//             cout << "Frequency of " << i << ": " << freq[i] << endl;
//         }
//     }
// }

// Method 2 : Using unordered_map for finding the frequency
void frequencyArray(vector<int> &arr) {
    
    unordered_map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }

    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout << "Key: " << itr->first << " Value: " << itr->second << endl; 
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector <int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    frequencyArray(arr);

    return 0;
}