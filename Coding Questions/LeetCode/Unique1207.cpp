#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool frequencyArray(vector<int> &arr) {
    
    unordered_map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    unordered_set <int> st;
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        if(st.find(itr->second) != st.end()){ // has duplicate : find() if finds duplicate element it returns its reference else it moves to end;
        st.insert(itr->second);
        return false;
        }   
    }
     return true;
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

    if(frequencyArray){
        cout<<"Duplicate found";
    }
    else{
        cout<<"No Duplicate found";
    }

    return 0;
}
