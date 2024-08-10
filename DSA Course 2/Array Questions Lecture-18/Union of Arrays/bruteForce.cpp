#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    set<int> st;

    // Insert elements from the first array
    for (int num : a) {
        st.insert(num);
    }

    // Insert elements from the second array
    for (int num : b) {
        st.insert(num);
    }

    // Convert set to vector
    vector<int> result;
    for (int num : st) {
        result.push_back(num);
    }

    return result;
}

int main()
{



return 0;
}