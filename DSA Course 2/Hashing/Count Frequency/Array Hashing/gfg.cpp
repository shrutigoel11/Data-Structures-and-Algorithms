#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void frequencyCount(vector<int>& arr, int N, int P)
    {
        // Initialize a hash array to store frequencies.
        vector<int> hash(P+1, 0);

        // Count frequencies of elements in arr within the range 1 to P.
        for (int i = 0; i < N; i++) {
            if (arr[i] <= P) {
                hash[arr[i]]++;
            }
        }

        // Update arr to reflect the frequencies.
        for (int i = 0; i < N; i++) {
            if (i < P) {
                arr[i] = hash[i + 1];
            } else {
                arr[i] = 0; // Or any value that indicates no frequency.
            }
        }
    }